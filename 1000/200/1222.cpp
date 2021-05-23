#include <iostream>
using namespace std;

int main()
{
    int time, score1, score2, total;
    cin >> time >> score1 >> score2;

    total = ((89 - time) / 5) + 1 + score1;

    if(total > score2)
        cout << "win";
    else if(total < score2)
        cout << "lose";
    else
        cout << "same";

    return 0;
}