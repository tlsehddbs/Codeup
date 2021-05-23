#include <iostream>
using namespace std;

int main()
{
    int time, score, total;
    cin >> time >> score;

    total = ((89 - time) / 5) + 1 + score;
    cout << total;

    return 0;
}