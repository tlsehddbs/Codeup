#include <iostream>
#include <vector>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b)
{
    if(a.second == b.second)    return a.second > b.second;
    else                        return a.second > b.second;
}

void dsort(vector<pair<string, int> > &temp)
{
    int tmp;
    string stmp;

    for(int i = 0; i < temp.size() - 1; i++)
    {
        for(int j = 0; j < temp.size() - 1; j++)
        {
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
    }
}

int main()
{
    int n, m;
    vector<pair<string, int> > v;

    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        string name;
        int score;
        cin >> name >> score;
        v.push_back(pair<string, int>(name, score));
    }

    dsort(v);

    for(int i = 0; i < m; i++)
        cout << v[i].first << endl;

    return 0;
}