#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    
    int a[n] = {};

    for(int i = 0; i < n; i++)
        std::cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        std::cout << i + 1 << ": ";

        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                if(a[i] > a[j])
                    std::cout << "> ";
                else if(a[i] < a[j])
                    std::cout << "< ";
                else if(a[i] == a[j])
                    std::cout << "= ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}