bool isZicZac(int *a, int n) {
    if (n < 3) return false;
    if (a[1] == a[0]) return false;
    bool up = (a[1] > a[0]);
    for (int i = 2; i < n; i++) {
        if (up && a[i] >= a[i - 1]) return false;
        if (!up && a[i] <= a[i - 1]) return false;
        up = !up;
    }
    return true;
}