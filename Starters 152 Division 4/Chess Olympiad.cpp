
// Problem link ===>>https://www.codechef.com/START152D/problems/CHOLY
// submission link ===>> https://www.codechef.com/viewsolution/1090674826

#include <iostream>
using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    double team_points = X * 1 + Y * 0.5;
    double opponent_points = Z * 1 + Y * 0.5;
    int remaining_games = 4 - (X + Y + Z);

    if (team_points + remaining_games * 1 > opponent_points)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
