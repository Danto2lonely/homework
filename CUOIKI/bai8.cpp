#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Hàm tìm các ma trận con 2x2 toàn trắng hoặc toàn đen
void findsubMatrix(bool** a, int n) {
    vector<pair<int, int>> subMatrices;

    // Duyệt qua các ma trận con 2x2
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            // Kiểm tra 2x2 toàn trắng (true) hoặc toàn đen (false)
            if ((a[i][j] == a[i][j + 1]) && 
                (a[i][j] == a[i + 1][j]) && 
                (a[i][j] == a[i + 1][j + 1])) {
                subMatrices.emplace_back(i, j); // Lưu chỉ số góc trên trái
            }
        }
    }

    // Sắp xếp các cặp chỉ số tăng dần theo i rồi j
    sort(subMatrices.begin(), subMatrices.end());

    // In các cặp chỉ số trên từng dòng
    for (const auto& cell : subMatrices) {
        cout << cell.first << " " << cell.second << endl;
    }
}

// Hàm sắp xếp các cặp chỉ số theo tổng của chúng
void sortBysum(bool** a, int n) {
    vector<pair<int, int>> subMatrices;

    // Duyệt qua các ma trận con 2x2
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if ((a[i][j] == a[i][j + 1]) && 
                (a[i][j] == a[i + 1][j]) && 
                (a[i][j] == a[i + 1][j + 1])) {
                subMatrices.emplace_back(i, j);
            }
        }
    }

    // Sắp xếp các cặp chỉ số theo tổng i + j
    sort(subMatrices.begin(), subMatrices.end(), [](pair<int, int> p1, pair<int, int> p2) {
        int sum1 = p1.first + p1.second;
        int sum2 = p2.first + p2.second;
        return sum1 < sum2;
    });

    // In các cặp chỉ số trên từng dòng
    for (const auto& cell : subMatrices) {
        cout << cell.first << " " << cell.second << endl;
    }
}

int main() {
    int n;
    cin >> n;

    // Khởi tạo mảng 2 chiều
    bool** a = new bool*[n];
    for (int i = 0; i < n; ++i)
        a[i] = new bool[n];

    // Nhập dữ liệu
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    // Sắp xếp và in các cặp chỉ số theo tổng
    sortBysum(a, n);

    // Giải phóng bộ nhớ
    for (int i = 0; i < n; ++i)
        delete[] a[i];
    delete[] a;

    return 0;
}
