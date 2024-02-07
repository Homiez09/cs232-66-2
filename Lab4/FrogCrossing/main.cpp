#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> maps;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;

        temp = "0" + temp + "Z";    
        maps.push_back(temp); 
    }

    for (int i = 0; i < n; i++) { // loop map
        for (int j = 1; j <= maps[i].size(); j++) { // step
            string map = maps[i];
            int frog_pos = j;
            char action = map[frog_pos];
            bool isBreak = false;
            
            for (int k = 0; k <= maps[i].size(); k++) { 
                
                map[frog_pos] = '0';

                if (action == 'Z') {
                    cout << j << " ";
                    isBreak = true;
                    break;
                } else if (action == 'L') {
                    frog_pos -= 1;
                } else if (action == 'R') {
                    frog_pos += j;
                    if (frog_pos >= map.size()) {
                        frog_pos = map.size()-1;
                    }
                }

                if (map[frog_pos] == '0') break;
                action = map[frog_pos];
            }
            if (isBreak) break;
        }
        cout << endl;
    }
}