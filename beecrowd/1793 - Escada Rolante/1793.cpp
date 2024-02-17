#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    while (true) {
        cin >> x;
        if (x == 0)
            break;

        vector<int> times(x);
        for (int i = 0; i < x; ++i) {
            cin >> times[i];
        }

        int active_time = 0;
        for (int i = 0; i < x - 1; ++i) {
            if (x == 1) {
                active_time += 10;
            } else {
                int dif = times[i + 1] - times[i];
                if (dif < 10) {
                    active_time += dif;
                } else {
                    active_time += 10;
                }
            }
        }

        active_time += 10;
        cout << active_time << endl;
    }
    return 0;
}
