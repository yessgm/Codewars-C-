#include <string>
using namespace std ; 

string reverseString (string str )
{
  string new_str;
    
  for (int i=0; i<str.length(); i++){
    new_str = str[i] + new_str;
  }
  
  return new_str ;
}