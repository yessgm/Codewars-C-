#include <string>
using namespace std; 

string sliceString (string str )
{
  int sub_len = str.length()-2;
  
  return str.substr(1, sub_len);
}