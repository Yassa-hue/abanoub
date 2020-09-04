#include <iostream>
#include <string>
using namespace std;
int main() {
    int sz, p, r;
    cin >> sz >> p;
    while (sz != 0 && p != 0) {
        if (sz == 1)
            cout << ""
        int pivot {1}, x = (sz/2)+1, y = (sz/2)+1;
        for (int i = pivot; i <= sz; ++i) {// reach the pivot
            if (p > pivot * pivot) {
                pivot += 2;
                x++;
                y++;
            }
        }
        r = pivot*pivot;
        int p2 {r};
        if (p == p2)
            cout << "Line = " << y << ", column = " << x << "." << endl;
        else {
            // reach the sec
            // reset x = y = s,s; r = p**2
            if (p >= p2-(pivot-1)) {
                r = p2-(pivot-1);
                y -= (pivot-1);
                // find the p
                while (r < p) {
                    y++;
                    r++;
                }
            } else if (p >= p2-2*(pivot-1)) {
                r = p2-2*(pivot-1);
                y -= (pivot-1);
                x -= (pivot-1);
                while (r < p) {
                    x++;
                    r++;
                }
            } else if (p >= p2-3*(pivot-1)) {
                r = p2-3*(pivot-1);
                x -= (pivot-1);
                while (r < p) {
                    y--;
                    r++;
                }
            } else if (p >= p2-3*(pivot-1) - (pivot-2)) {
                r = p2-4*(pivot-2);
                x -= 1;
                while (r < p) {
                    x--;
                    r++;
                }
            }
            cout << "Line = " << y << ", column = " << x << "." << endl;
        }
        cin >> sz >> p;
    }
    return 0;
}
//3 1
//3 3
//3 9
//5 9
//5 10
//0 0
/*
int main() {
    int num;
    cin >> num;
    int nums [num];
    for (int &i:nums)
        cin >> i;
    return 0;
}
 */


/*
    int x, md {0}, sd {0};
    cin >> x;
    int nums [x][x];
    for (auto &i : nums)
        for (auto &e : i)
            cin >> e;
    for (int i = 0; i < x; ++i)
        md += nums[i][i];
    for (int i = 0; i < x; ++i) {
        sd += nums[i][x-i-1];
    }
    return 0;
 */


/*
    int sz, p, r;
    cin >> sz >> p;
    while (sz != 0 && p != 0) {
        int pivot {1}, x = (sz/2)+1, y = (sz/2)+1;
        for (int i = pivot; i <= sz; ++i) {// reach the pivot
            if (p > pivot * pivot) {
                pivot += 2;
                x++;
                y++;
            }
        }
        r = pivot*pivot;
        int p2 {r};
        if (p == p2)
            cout << "Line = " << y << ", column = " << x << "." << endl;
        else {
            // reach the sec
            // reset x = y = s,s; r = p**2
            if (p >= p2-(pivot-1)) {
                r = p2-(pivot-1);
                y -= (pivot-1);
                // find the p
                while (r < p) {
                    y++;
                    r++;
                }
            } else if (p >= p2-2*(pivot-1)) {
                r = p2-2*(pivot-1);
                y -= (pivot-1);
                x -= (pivot-1);
                while (r < p) {
                    x++;
                    r++;
                }
            } else if (p >= p2-3*(pivot-1)) {
                r = p2-3*(pivot-1);
                x -= (pivot-1);
                while (r < p) {
                    y--;
                    r++;
                }
            } else if (p >= p2-3*(pivot-1) - (pivot-2)) {
                r = p2-4*(pivot-2);
                x -= 1;
                while (r < p) {
                    x--;
                    r++;
                }
            }
            cout << "Line = " << y << ", column = " << x << "." << endl;
        }
        cin >> sz >> p;
    }
 */