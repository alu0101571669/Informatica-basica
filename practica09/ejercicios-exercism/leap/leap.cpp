#include "leap.h"
#include <iostream>
namespace leap {
bool is_leap_year(int anyo) {
  if (anyo % 4 == 0) {
    if (anyo % 100 == 0) {
      if (anyo % 400 == 0) {
        return true;
      } else {
        return false;
      }
    }
    else {
      return true;
    }
  } 
  return false;  
} 
}// namespace leap
