int calcGCD(int n, int m){
    // Write your code here.

    int num = (n<m) ? n : m;

    if(n%num==0 && m%num==0)
        return num;
    
    int gcd=1;
    for(int i=1; i<=num; i++){
        if(n%i==0 && m%i==0&& i>gcd)
            gcd=i;
    }

    return gcd;

}