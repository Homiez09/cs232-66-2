#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int* towers = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> towers[i];
    }

    int count = 0;

    while (n > 0)
    {
        int choose = towers[0];

        int* tempTowers = new int[n];
        int* newTowers = new int[n];

        tempTowers[0] = towers[0];
        int tempIndex = 1;

        for (int i = 1; i < n; i++)
        {
            if (choose > towers[i])
            {
                choose = towers[i];
                tempTowers[tempIndex++] = towers[i];
            }
            else
            {
                newTowers[i - tempIndex] = towers[i];
            }
        }

        count++;

        delete[] towers;

        towers = newTowers;
        n -= tempIndex;

        delete[] tempTowers;
    }

    cout << count << endl;

    delete[] towers;

    return 0;
}
