#include <string>

std::string rps(const std::string& p1, const std::string& p2)
{
  if ((p1=="scissors" and p2=="paper") or (p1=="rock" and p2=="scissors") or (p1=="paper" and p2=="rock")){
    return "Player 1 won!";
  }
  else if (p1 == p2){ return "Draw!"; }
  else { return "Player 2 won!"; }
}
