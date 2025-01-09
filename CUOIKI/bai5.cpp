/*Cho 2 số nguyên N>0 và K>0, đếm trong mảng có bao nhiêu số nguyên có số chữ số lẻ bằng K. Viết hàm int kOddNumbes(int *a, int n, int k) để giải quyết vấn đề trên.
*/
int kOddNumbes(int* a, int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int num = a[i] < 0 ? -a[i] : a[i];
        int oddCount = 0;
        while (num > 0) {
            if ((num % 10) % 2 == 1) {
                oddCount++;
            }
            num /= 10;
        }
        if (oddCount == k) {
            count++;
        }
    }
    return count;
}