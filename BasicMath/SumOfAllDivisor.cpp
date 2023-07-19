int sumOfAllDivisors(int n){
	// Write your code here.

	int sum=0;
	for(int i=1; i<=n; i++){
		int num=i;

		while(num>0){
			if(i%num==0)
				sum=sum+num;
			
			num--;
		}
	}
	return sum;	
}


// int sumOfAllDivisors(int n){

//     // Write your code here.

//       long long ans=0;

//         for(int i=1;i<=n;i++){
// 			ans+=i*(n/i);
// 		} 
//         return ans; 

// }

