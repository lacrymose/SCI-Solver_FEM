#ifndef __GET_VALUE_H__
#define __GET_VALUE_H__

template <class T> 
inline T getValue(const char* name);

template <> 
inline int getValue<int>(const char* name) {
  return atoi(name);
}

template <> 
inline float getValue<float>(const char* name) {
  return atof(name);
}

template <> 
inline double getValue<double>(const char* name) {
  return atof(name);
}
#endif