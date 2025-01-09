struct Rect {
    int length;
    int width;
};

bool dongDang(const Rect& rt1, const Rect& rt2) {
    return (rt1.width != 0 && rt2.width != 0 &&
            rt1.length * rt2.width == rt2.length * rt1.width);
}

bool ssLonHon(const Rect& rt1, const Rect& rt2) {
    return (rt1.length * rt1.width) > (rt2.length * rt2.width);
}