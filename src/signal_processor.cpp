#include "signal_processor.hpp"

#include <iostream>

SignalProcessor::SignalProcessor(const std::string& name) : name(name), threshold_(0.0) {
    // Constructor implementation
    std::cout << "SignalProcessor created with name: " << this->name << std::endl;
}

void SignalProcessor::set_threshold(double threshold) {
    std::cout << "Setting threshold to: " << threshold << std::endl;
    this->threshold_ = threshold;
}

std::vector<int> SignalProcessor::find_peaks(const std::vector<double>& signal) {
    std::cout << "Finding peaks with threshold: " << this->threshold_ << std::endl;
    std::vector<int> peaks;
    for (size_t i = 0; i < signal.size(); ++i) {
        if (signal[i] > this->threshold_) {
            peaks.push_back(i);
        }
    }
    return peaks;
}