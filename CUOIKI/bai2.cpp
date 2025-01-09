//cho 2 số N và K (N và K lớn hơn 0), in ra N số lẻ đầu tiên lớn hơn hoặc bằng K, các số cách nhau bởi dấu cách. Nếu không hợp lệ in ra INVALID

#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    if (N <= 0 || K <= 0) {
        cout << "INVALID";
    } else {
        int count = 0;
        for (int i = K; count < N; i++) {
            if (i % 2 != 0) {
                cout << i << " ";
                count++;
            }
        }
    }
}