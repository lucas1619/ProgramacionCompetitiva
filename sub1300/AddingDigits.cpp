/*
Vasya has got two number: a and b. However, Vasya finds number a too short. So he decided to repeat the operation of lengthening number a n times.

One operation of lengthening a number means adding exactly one digit to the number (in the decimal notation) to the right provided that the resulting
 number is divisible by Vasya's number b. If it is impossible to obtain the number which is divisible by b, then the lengthening operation cannot be performed.

Your task is to help Vasya and print the number he can get after applying the lengthening operation to number a n times.

Input
The first line contains three integers: a, b, n (1 ≤ a, b, n ≤ 105).

Output
In a single line print the integer without leading zeros, which Vasya can get when he applies the lengthening operations to number a n times.
 If no such number exists, then print number -1. If there are multiple possible answers, print any of them.
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    long long b,n, inicio;
    string respuesta;
    cin>>a>>b>>n;
    inicio = a;
    for (int i = 0; i < 10; ++i) {
        if((a*10 + i) % b == 0){
            a = a*10 + i;
            respuesta.append(to_string(a));
            for (int j = 1; j < n; ++j) {
                respuesta.push_back('0');
            }
            break;
        }
    }
    inicio == int(a) ? cout<<"-1" : cout<<respuesta;
    return 0;
}