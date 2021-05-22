#include <iostream>

int main()
{
    int time, score, total;
    std::cin >> time >> score;

    total = ((89 - time) / 5) + 1 + score;
    std::cout << total;

    return 0;
}