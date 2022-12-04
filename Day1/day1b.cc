#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
    string s;
    int curTotal = 0;
    int cur = 0;
    int maxTotal[3] = {0, 0, 0};
    ifstream file("input.txt");

    while (getline(file, s))
    {
        if (s.empty())
        {
            for (int i = 0; i < 3; ++i)
            {
                if (curTotal > maxTotal[i])
                {
                    maxTotal[i] = curTotal;
                    break;
                }
            }
            curTotal = 0;
        }
        else
        {
            stringstream ss(s);
            ss >> cur;
            curTotal += cur;
        }
    }

    int totalAmount = maxTotal[0] + maxTotal[1] + maxTotal[2];
    cout << totalAmount;
    return 0;
}