#include <iostream>
#include "csvreader.h"

int main()
{
    try
    {
        // Create an instance of the CsvReader class, passing the file path as an argument to the constructor
        CsvReader reader("../data/sample_data.csv");

        // Check if the file failed to open
        if (!reader.isOpen())
        {
            // Print an error message to the standard error stream and return 1 to indicate an error
            std::cerr << "Failed to open CSV file." << std::endl;
            return 1;
        }

        // Retrieve all the rows from the CSV file
        std::vector<CsvRow> rows = reader.getAllRows();

        // Retrieve the column names
        std::vector<std::string> columnNames = reader.getColumnNames();

        // Iterate over each row
        for (const CsvRow &row : rows)
        {
            // Iterate over each column name
            for (const std::string &columnName : columnNames)
            {
                // Find the value associated with the current column name
                auto it = row.find(columnName);

                if (it != row.end())
                {
                    // Use std::visit to handle different value types (variant) and print the value
                    std::visit([](auto &&arg)
                               { std::cout << arg << ' '; },
                               it->second);
                }
            }

            // Print a newline character to separate the rows
            std::cout << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        // Catch any exceptions thrown within the try block
        // Print the error message retrieved from the exception and return 1 to indicate an error
        std::cerr << "An error occurred: " << e.what() << std::endl;
        return 1;
    }

    // Return 0 to indicate successful execution of the program
    return 0;
}
