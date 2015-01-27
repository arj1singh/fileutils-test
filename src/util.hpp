#ifndef __UTIL_HPP__
#define __UTIL_HPP__

/*
A template function which takes input vector of type T.
Sorts the vector using cmp callback function and returns sorted vector.
Here cmp returns true if first parameter is bigger than second parameter.
*/
template <typename T> std::vector<T> sort(const std::vector<T>, bool cmp(T,T));

/*
This function compare string and return true if first alphabetically second.
*/
bool stringCmp(const std::string string1, const std::string string2);

#endif
