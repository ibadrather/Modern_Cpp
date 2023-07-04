// Including the necessary headers for our class. This includes the CSV Reader we've created earlier,
// functional for functions, numeric for std::accumulate and algorithm for std::sort and std::copy_if
#include "csvreader.h"
#include <functional>
#include <numeric>
#include <algorithm>

// Definition of our Data Operations class
class DataOps
{
public:
    // Constructor that takes a vector of CsvRow as input data. The input data is expected to be
    // the result of reading a CSV file.
    DataOps(const std::vector<CsvRow> &data);

    // Function for sorting the data based on a column name. This operation is in-place, meaning
    // it modifies the original data stored in the class.
    void sortData(const std::string &columnName);

    // Function for filtering the data based on a predicate. A predicate is a function that takes
    // a CsvRow and returns a boolean value. The function will return a new vector that includes
    // only the rows for which the predicate returns true.
    std::vector<CsvRow> filterData(std::function<bool(const CsvRow &)> predicate);

    // Function for aggregating the data of a specific column. It takes an initial value and an
    // operation function that takes two CsvValue arguments and returns a CsvValue. It applies the
    // operation cumulatively to the elements of the specified column, from the first to the last,
    // so as to reduce the sequence to a single output value.
    CsvValue aggregateData(const std::string &columnName, CsvValue init, std::function<CsvValue(CsvValue, CsvValue)> op);

private:
    // The data stored in the class. This data is a vector of CsvRow which was passed in the constructor
    std::vector<CsvRow> data;
};
