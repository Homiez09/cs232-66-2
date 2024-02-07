#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> towers;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        towers.push_back(temp);
    }

    int count = 0;

    while(towers.size() > 0)
    {   
        int choose = towers[0];

        vector<int> tempTowers;
        vector<int> newTowers;

        tempTowers.push_back(towers[0]);
        for (int i = 1; i < towers.size(); i++)
        {
            if (choose > towers[i])
            {
                choose = towers[i];
                tempTowers.push_back(towers[i]);
            }
            else
            {
                newTowers.push_back(towers[i]);
            }
        }

        count++;

        towers.clear();
        
        towers.assign(newTowers.begin(), newTowers.end());
        tempTowers.clear();
        newTowers.clear();
    }

    cout << count << endl;
    return 0;
}