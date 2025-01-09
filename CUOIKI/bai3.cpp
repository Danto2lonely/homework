/*Input: Dòng đầu tiên chứa số n <=100
dòng thứ hai chứa n số nguyên là các phân tử của dãy tách bằng dấu cách
in ra dòng đầu tiên là các phần tử là số chính phương trong dãy, dòng thứ hai là tổng của chúng*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (sqrt(a[i]) == (int)sqrt(a[i])) {
            b.push_back(a[i]);
            sum += a[i];
        }
    }
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << endl << sum;
    return 0;
}