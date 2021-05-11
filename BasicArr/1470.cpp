#include <iostream>

int main()
{
    int n, count = 1, temp = 1;
    int a[100][100] = {};
    std::cin >> n;
    
    for(int j = 0; j < n; j++)
    {
        if(j%2==0)
        {
            count = temp;
            for(int i = 0; i < n; i++)
            {
                a[i][j] = count;
                count++;
                temp++;
            }
        }
        else
        {
            count += n - 1;
            for(int i = 0; i < n; i++)
            {
                a[i][j] = count;
                count--;
                temp++;
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            std::cout << a[i][j] << " ";
        std::cout << "\n";
    }
    return 0;
}