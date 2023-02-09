// Pre-emptively check for overflow before increasing a number
int reverse(int s){
    long long rev = 0;
    int x = s;
    while (x) {
        // Pre-emptively check for overflow before increasing a number
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10) return 0;
        rev = (rev * 10) + (x % 10);
        x = x / 10;
    }
    return rev;
}
