// If a number is negative, it cannot be a palindrome
// Create a reversed version of input x: 243 => 342
// If initial input and reversed version are equal, return true
bool isPalindrome(int x){
    if (x < 0) return false;
    int og = x;
    long int reverse = 0;
    while (x){
        reverse = (x % 10) + (reverse * 10);
        x = x / 10;
    }
    return (reverse == og);
}
