#include "dataops.h"

DataOps::DataOps(const std::vector<CsvRow> &data) : data(data) {}

void DataOps::sortData(const std::string &columnName)
{
    std::sort(data.begin(), data.end(), [columnName](const CsvRow &a, const CsvRow &b)
              { return std::visit([](auto &&arg)
                                  { return arg; },
                                  a.at(columnName)) < std::visit([](auto &&arg)
                                                                 { return arg; },
                                                                 b.at(columnName)); });
}

std::vector<CsvRow> DataOps::filterData(std::function<bool(const CsvRow &)> predicate)
{
    std::vector<CsvRow> filteredData;
    std::copy_if(data.begin(), data.end(), std::back_inserter(filteredData), predicate);
    return filteredData;
}

CsvValue DataOps::aggregateData(const std::string &columnName, CsvValue init, std::function<CsvValue(CsvValue, CsvValue)> op)
{
    return std::accumulate(data.begin(), data.end(), init, [columnName, op](CsvValue total, const CsvRow &row)
                           { return op(total, row.at(columnName)); });
}
