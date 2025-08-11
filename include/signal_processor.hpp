#pragma once

#include <string>
#include <vector>

class SignalProcessor {
public:
    std::string name;

    SignalProcessor(const std::string& name);
    void set_threshold(double threshold);
    std::vector<int> find_peaks(const std::vector<double>& signal);

private:
    double threshold_;
};