#include <iostream>

int main()
{
    int w, h, n, l, d, x, y;
    int arr[101][101] = {};

    // 입력
    std::cin >> h >> w >> n;
    for(int i = 1; i <= n; i++)
    {
        std::cin >> l >> d >> y >> x;

        if(d == 0)
            for(int j = 0; j < l; j++)
                arr[x+j][y] = 1;
        if(d == 1)
            for(int j = 0; j < l; j++)
                arr[x][y+j] = 1;
    }

    // 출력
    for(int i = 1; i <= h; i++)
    {
        for(int j = 1; j <= w; j++)
            std::cout << arr[j][i] << " ";
        std::cout << "\n";
    }
    return 0;
}