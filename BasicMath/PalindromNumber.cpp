#include <bits/stdc++.h>
bool palindrome(int n)
{
    // Write your code here

    if(n<10)
        return true;
    
    int digit = log10(n);

    int num =pow(10,digit);

    return (n/num)==(n%10);

}