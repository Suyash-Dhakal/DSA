#include <iostream>
#include <vector>
using namespace std;

int fib(int n) {
    // below is the array to store Fibonacci number i.e. earlier calculation
    // memoization strategy
    // int f[n+2];
    // int i;
    // f[0]=0;
    // f[1]=1;
    // for(i=2;i<=n;i++){
    //     f[i]=f[i-1]+f[i-2];
    // }
    // return f[n];
    // Above Code: time complexity: O(n) | space complexity: O(n)
    // the space complexity can be reduced to O(1) by just storing the last two Fibonacci numbers

    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;

    // The above code is highly optimized
    // Above Code: time complexity: O(n) | space complexity: O(1)
}

int main() {

    int val = 0;
    int fibo;
    cout << "Enter the nth fibonacci number you want:" << endl;
    cin >> val;

    fibo = fib(val);

    cout << "The " << val << "th fibonacci number is:" << fibo;

    return 0;
}
