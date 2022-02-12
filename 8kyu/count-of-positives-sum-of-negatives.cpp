#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    if (input.size() == 0){ return {}; }
  
    int count = 0;
    int sum = 0;
  
    for (int i=0; i < input.size(); i++)
    {
      if (input[i] > 0){ count++; }
      else if (input[i] < 0){ sum+=input[i]; }
    }
  
    return {count, sum};
}