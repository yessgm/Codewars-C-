#include <string>

std::string correct(std::string str){
  replace(str.begin(), str.end(), '5', 'S');
  replace(str.begin(), str.end(), '0', 'O');
  replace(str.begin(), str.end(), '1', 'I');
  return str;
}