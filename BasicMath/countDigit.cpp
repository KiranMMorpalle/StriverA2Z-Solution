int countDigits(int n){
	// Write your code here.

	int tmp=n, cnt=0;

	while(tmp>0){
		int rem=tmp%10;

		if(rem>0 && n%rem==0)
			cnt++;
		
		tmp=tmp/10;
	}

	return cnt;
}