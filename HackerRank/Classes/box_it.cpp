#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Box
{
private:
    int l, b, h;

public:
    Box(int l = 0, int b = 0, int h = 0);
    // Box(int l, int b, int h);
    Box(const Box &other);

    // Getters
    int getLength() const;
    int getBreadth() const;
    int getHeight() const;

    // Calculate volume
    long long calculate_volume() const { return static_cast<long long>(l) * b * h; }

    // Overloaded operators
    bool operator<(const Box &other) const;
    friend std::ostream &operator<<(std::ostream &os, const Box &box);
};

// Constructor
Box::Box(int l, int b, int h) : l(l), b(b), h(h) {}

// Copy Constructor
Box::Box(const Box &other) : l(other.l), b(other.b), h(other.h) {}

int Box::getLength() const
{
    return this->l;
}

int Box::getBreadth() const
{
    return this->b;
}

int Box::getHeight() const
{
    return this->h;
}

bool Box::operator<(const Box &other) const
{
    if (l != other.l)
    {
        return l < other.l;
    }
    if (b != other.b)
    {
        return b < other.b;
    }
    return h < other.h;
}

std::ostream &operator<<(std::ostream &os, const Box &box)
{
    os << box.l << " " << box.b << " " << box.h;
    return os;
}
