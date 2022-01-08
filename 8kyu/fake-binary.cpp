#include <string>
#include <regex>
using namespace std;
string fakeBin(string str){
  str = regex_replace(str, regex("[1234]"), "0");
  str = regex_replace(str, regex("[56789]"), "1");
  return str;
}
