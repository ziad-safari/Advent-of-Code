#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
    string s;
    int maxTotal = 0;
    int curTotal = 0;
    int cur = 0;
    ifstream file("input.txt");

    while (getline(file, s))
    {
        if (s.empty())
        {
            if (curTotal > maxTotal)
                maxTotal = curTotal;
            curTotal = 0;
        }
        else
        {
            stringstream ss(s);
            ss >> cur;
            curTotal += cur;
        }
    }
    cout << maxTotal;
    return 0;
}