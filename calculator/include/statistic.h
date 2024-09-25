#ifndef STATISTIC_H
#define STATISTIC_H

#include <iostream>
#include <vector>
#include <algorithm>

class Statistic
{
public:
    Statistic() = default;
    Statistic(const Statistic &statistic) = default;
    ~Statistic() = default;
    Statistic &operator=(const Statistic &statistic) = default;
    Statistic &operator=(Statistic &&statistic) = default;
    Statistic(Statistic &&statistic) = default;
    Statistic operator+(const Statistic &statistic) const;
    Statistic operator-(const Statistic &statistic) const;
    Statistic operator*(const Statistic &statistic) const;
    Statistic operator/(const Statistic &statistic) const;
    Statistic &operator+=(const Statistic &statistic);
    Statistic &operator-=(const Statistic &statistic);
    Statistic &operator*=(const Statistic &statistic);
    Statistic &operator/=(const Statistic &statistic);
    Statistic operator-() const;
    bool operator==(const Statistic &statistic) const;
    bool operator!=(const Statistic &statistic) const;
    void addValue(double value);
    void addValue(const Statistic &statistic);
    double getMean() const;
    double getVariance() const;
    double getStandardDeviation() const;
    double getMin() const;
    double getMax() const;
    double getSum() const;
    double getSumOfSquares() const;
    double getMedian() const;
    double getMode() const;
    std::vector<double> getValues() const;
    void clear();
private:
    std::vector<double> values;
    double sum = 0;
    double sumOfSquares = 0;
    double min = 0;
    double max = 0;
    double mean = 0;
    double variance = 0;
    double standardDeviation = 0;
};  // class Statistic

#endif