#include "vector_math.h"
#include <stdexcept>

template <typename T>
std::vector<T> sum(const std::vector<T>& a, const std::vector<T>& b) {
    if (a.size() != b.size()) {
        throw std::invalid_argument("Comparing vectors of unequal size");
    }
    
    std::vector<T> result(a.size());
    for(int i = 0; i < a.size(); i++) {
        result[i] = a[i] + b[i];
    }
    return result;
}

template <typename T>
std::vector<T> diff(const std::vector<T>& a, const std::vector<T>& b) {

    if (a.size() != b.size()) {
        throw std::invalid_argument("Comparing vectors of unequal size");
    }

    std::vector<T> result(a.size());
    for(int i = 0; i < a.size(); i++) {
        result[i] = a[i] - b[i];
    }
    return result;
}

template <typename T>
std::vector<T> scale(const std::vector<T>& a, const T& y) {

    std::vector<T> result(a.size());
    for (int i = 0; i < a.size(); i++) {
        result[i] = a[i] * y;
    }
    return result;
}

template <typename T>
T dot(const std::vector<T>& a, const std::vector<T>& b) {
    
    if (a.size() != b.size()) {
        throw std::invalid_argument("Comparing vectors of unequal size");
    }

    T result = 0;
    
    for(int i = 0; i < a.size(); i++) {
        result += a[i] * b[i];
    }
    return result;
}

template std::vector<int> sum(const std::vector<int>&, const std::vector<int>&);
template std::vector<float> sum(const std::vector<float>&, const std::vector<float>&);

template std::vector<int> diff(const std::vector<int>&, const std::vector<int>&);
template std::vector<float> diff(const std::vector<float>&, const std::vector<float>&);

template std::vector<int> scale(const std::vector<int>&, const int&);
template std::vector<float> scale(const std::vector<float>&, const float&);

template int dot(const std::vector<int>&, const std::vector<int>&);
template float dot(const std::vector<float>&, const std::vector<float>&);
