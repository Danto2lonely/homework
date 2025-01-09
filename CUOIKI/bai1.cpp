/* Đọc từ bàn phím đến khi tìm được số nguyên lớn hơn 0, in ra và kiểm tra xem nó có lớn hơn 50 và nhỏ hơn 100 không*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        if (n > 0){
            cout << n << endl;
            if (n > 50 && n < 100){
                cout << n <<" "<< "YES";
            }
            else{
                cout << n <<" "<< "NO";
            }
            break;
        }
    }

}