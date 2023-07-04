#include <fstream>
#include <unordered_map>
#include <variant>
#include <string>
#include <vector>

// Define an alias for our variant type, which can hold an int, double, or string.
using CsvValue = std::variant<int, double, std::string>;

// Define an alias for our row type, which is a map from string (column name) to CsvValue.
using CsvRow = std::unordered_map<std::string, CsvValue>;

// This is our CsvReader interface. It declares the basic functions a CsvReader should have.
class ICsvReader
{
public:
    virtual ~ICsvReader() = default;
    virtual bool isOpen() const = 0;
    virtual CsvRow getNextRow() = 0;
    virtual std::vector<std::string> getColumnNames() const = 0;
    virtual std::vector<CsvRow> getAllRows() = 0;
};

// This is our CsvReader class. It implements the ICsvReader interface.
class CsvReader : public ICsvReader
{
private:
    std::string filename;
    std::ifstream file;
    std::vector<std::string> columnNames;

    CsvValue parseValue(const std::string &str) const;

public:
    explicit CsvReader(const std::string &filename);
    ~CsvReader() override;

    bool isOpen() const override;
    CsvRow getNextRow() override;
    std::vector<std::string> getColumnNames() const override;
    std::vector<CsvRow> getAllRows() override;
};
