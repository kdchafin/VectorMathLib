#ifndef VECTOR_MATH_H
#define VECTOR_MATH_H

#include <vector>

template<typename T>
std::vector<T> sum(const std::vector<T>& a, const std::vector<T>& b);

template<typename T>
std::vector<T> diff(const std::vector<T>& a, const std::vector<T>& b);

template<typename T>
std::vector<T> scale(const std::vector<T>& a, const T& y);

template<typename T>
T dot(const std::vector<T>& a, const std::vector<T>& b);

#endif // !VECTOR_MATH_H