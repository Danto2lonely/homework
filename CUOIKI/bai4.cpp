/* viết hàm chuyển chữ cái thường thành hoa, chữ hoa thành thường, ký tự số thành dấu '_', các ký tự khác để nguyên*/
#include <bits/stdc++.h>
using namespace std;

void convert(string &s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 32;
        else if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
        else if (s[i] >= '0' && s[i] <= '9') s[i] = '_';
    }
}

int main() {
    string s;
    getline(cin, s);
    convert(s);
    cout << s;
    return 0;
}