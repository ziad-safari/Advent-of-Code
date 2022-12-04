#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
    string s;
    ifstream file("input.txt");
    int totalScore = 0;
    while (getline(file, s))
    {
        if (s[0] == 'A' and s[2] == 'X') // A rock, B paper C sissor, X lose, Y draw, Z win
        {
            totalScore += 3; // Tie Rock
        }
        else if (s[0] == 'A' and s[2] == 'Y')
        {
            totalScore += 4;
        }
        else if (s[0] == 'A' and s[2] == 'Z')
        {
            totalScore += 8;
        }
        else if (s[0] == 'B' and s[2] == 'X')
        {
            totalScore += 1;
        }
        else if (s[0] == 'B' and s[2] == 'Y')
        {
            totalScore += 5; // Tie Paper
        }
        else if (s[0] == 'B' and s[2] == 'Z')
        {
            totalScore += 9;
        }
        else if (s[0] == 'C' and s[2] == 'X')
        {
            totalScore += 2;
        }
        else if (s[0] == 'C' and s[2] == 'Y')
        {
            totalScore += 6;
        }
        else if (s[0] == 'C' and s[2] == 'Z')
        {
            totalScore += 7;
        }
    }
    cout << totalScore;
    return 0;
}