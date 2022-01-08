int quarter_of(int month){
  if (1 <= month  and month <= 3){ return 1; }
  else if (4 <= month and month <= 6){ return 2; }
  else if (7 <= month and month <= 9){ return 3; }
  else { return 4; }
}

// ORRR
#include <cmath>

int quarter_of(int month)
{
  return ceil(month/3.0);
}
