#include <iostream>

int main()
{
    int time, h, m, s;
    std::cin >> time;

    h = time / 3600;
    time -= h * 3600;
    m = time / 60;
    time -= m * 60;
    s = time;
    std::cout << h << " " << m << " " << s;
    return 0;
}