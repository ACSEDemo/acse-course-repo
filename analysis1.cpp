/*
let n represent the value passed to function1
let T(n) represent the number of operations needed to get a 
result from function1.
*/

int function1(int n){
	int rc=1;						//1
	
	for(int i=0; i < n ;i +=2){		//1 + (n/2) + (n/2)
		rc=rc+1;					//2(n/2)
	}
	return rc;						//1
}

/*
T(n) = 1 + 1 + (n/2) + (n/2) + 2(n/2) + 1
	 = 1 + 1 + 4(n/2) + 1
	 = 3 + 4(n/2)
	 = 3 + 2n
	 = 2n + 3

Therefore T(n) is O(n)

*/

