#include <string>

std::string makeUpperCase (const std::string& input_str)
{
  std::string temp = input_str;
  for(int i = 0; i < temp.length(); i++){
    temp[i] = toupper(temp[i]);
  }
  return temp;
}