#include <iostream>
#include <vector>
using namespace std;

void dsort(vector<pair<string, int> > &temp)
{
    int tmp;
    string stmp;

    for(int i = 0; i < temp.size() - 1; i++)
        for(int j = 0; j < temp.size() - 1; j++)
            if(temp.at(j).second < temp.at(j + 1).second)
            {
                tmp = temp.at(j).second;
                temp.at(j).second = temp.at(j + 1).second;
                temp.at(j + 1).second = tmp;

                stmp = temp.at(j).first;
                temp.at(j).first = temp.at(j + 1).first;
                temp.at(j + 1).first = stmp;
            }
}

int main()
{
    int n;
    vector<pair<string, int> > v;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string name;
        int score;
        cin >> name >> score;
        v.push_back(pair<string, int>(name, score));
    }
    
    dsort(v);
    cout << v[2].first;

    return 0;
}