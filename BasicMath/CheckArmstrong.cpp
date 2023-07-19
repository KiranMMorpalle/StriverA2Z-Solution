#include <bits/stdc++.h>
using namespace std;

int main(){

    bool checkArmstrong(int n){
        //Write your code here

        if(n>0 && n<10)
            return true;

        int num = log10(n)+1;
        int tmp=n, sum=0;

        while(tmp>0){

            int rem=tmp%10;
            sum=sum+pow(rem,num);
            tmp=tmp/10;
        }
        
        return sum==n;
    }

}