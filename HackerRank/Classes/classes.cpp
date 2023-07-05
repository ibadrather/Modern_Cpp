#include <iostream>
#include <sstream>
using namespace std;

class Student
{
private:
    int age;
    std::string first_name;
    std::string last_name;
    int standard;

public:
    Student(int age = 0, const std::string &first_name = "", const std::string &last_name = "", int standard = 0);

    // Setters
    void set_age(int age);
    void set_first_name(const std::string &first_name);
    void set_last_name(const std::string &last_name);
    void set_standard(int standard);

    // Getters
    int get_age() const;
    const std::string &get_first_name() const;
    const std::string &get_last_name() const;
    int get_standard() const;

    std::string to_string() const;
};

Student::Student(int age, const std::string &first_name, const std::string &last_name, int standard)
    : age(age), first_name(first_name), last_name(last_name), standard(standard)
{
}

void Student::set_age(int age)
{
    this->age = age;
}

void Student::set_first_name(const std::string &first_name)
{
    this->first_name = first_name;
}

void Student::set_last_name(const std::string &last_name)
{
    this->last_name = last_name;
}

void Student::set_standard(int standard)
{
    this->standard = standard;
}

int Student::get_age() const
{
    return age;
}

const std::string &Student::get_first_name() const
{
    return first_name;
}

const std::string &Student::get_last_name() const
{
    return last_name;
}

int Student::get_standard() const
{
    return standard;
}

std::string Student::to_string() const
{
    return std::to_string(age) + "," + first_name + "," + last_name + "," + std::to_string(standard) + "\n";
}

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}