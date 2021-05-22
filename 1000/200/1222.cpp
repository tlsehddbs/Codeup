#include <iostream>

int main()
{
    int time, score1, score2, total;
    std::cin >> time >> score1 >> score2;

    total = ((89 - time) / 5) + 1 + score1;

    if(total > score2)
        std::cout << "win";
    else if(total < score2)
        std::cout << "lose";
    else
        std::cout << "same";

    return 0;
}