#include <iostream>
using namespace std;

int forLoop( int n);
 
int whileLoop(int n);

int fibonacci( int n );


int main(){

    cout<< forLoop( 100 ) << "\n";
    cout<< whileLoop( 100 ) << "\n";
    cout<< fibonacci(6) << "\n";

    return 0;
}

int forLoop( int n) {
    int res = 0;

    for( int i = 1; i <= n; ++i) {
        res +=i;
    }

    return res;

}

int whileLoop( int n ) {
    int res = 0;
    int i = 1;

    while( i<=n ) {
        res += i;
        i++;
    }
    return res;
}

int fibonacci( int n ) {
    int res = 0;

    if (n == 1 || n == 2) {
        res = n-1;
    }
    else {
        res = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return res;
}