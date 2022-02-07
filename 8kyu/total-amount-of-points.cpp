#include <array>
#include <string>

int points(const std::array<std::string, 10>& games) {
    int ret = 0;
    for(int i = 0; i < games.size();i++) {
        if((int)(games[i][0]) < (int)(games[i][2])) {continue;}
        if((int)(games[i][0]) > (int)(games[i][2])) {ret += 3;continue;}
        if((int)(games[i][0]) == (int)(games[i][2])) {ret += 1;}
    }
    return ret;
}