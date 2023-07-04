#include "csvreader.h"
#include <sstream>

CsvReader::CsvReader(const std::string &filename) : filename(filename), file(filename)
{
    if (!file.is_open())
    {
        throw std::runtime_error("Could not open file " + filename);
    }

    // Read the column names from the first line of the file.
    std::string line;
    if (std::getline(file, line))
    {
        std::stringstream s(line);
        std::string column;

        while (std::getline(s, column, ','))
        {
            columnNames.push_back(column);
        }
    }
}

CsvReader::~CsvReader()
{
    if (file.is_open())
    {
        file.close();
    }
}

bool CsvReader::isOpen() const
{
    return file.is_open();
}

CsvValue CsvReader::parseValue(const std::string &str) const
{
    try
    {
        return std::stoi(str);
    }
    catch (std::invalid_argument &)
    {
    }

    try
    {
        return std::stod(str);
    }
    catch (std::invalid_argument &)
    {
    }

    return str;
}

CsvRow CsvReader::getNextRow()
{
    std::string line;
    if (!std::getline(file, line))
    {
        return {}; // Return an empty map if there is no more line.
    }

    std::stringstream s(line);
    std::string field;

    CsvRow row;
    size_t columnIndex = 0;

    while (std::getline(s, field, ','))
    {
        if (columnIndex < columnNames.size())
        {
            row[columnNames[columnIndex]] = parseValue(field);
            columnIndex++;
        }
    }

    return row;
}

std::vector<std::string> CsvReader::getColumnNames() const
{
    return columnNames;
}

std::vector<CsvRow> CsvReader::getAllRows()
{
    std::vector<CsvRow> data;
    CsvRow row = getNextRow();

    while (!row.empty())
    {
        data.push_back(row);
        row = getNextRow();
    }

    return data;
}
