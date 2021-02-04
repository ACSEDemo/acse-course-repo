/*
let n represent the value passed to function2
let T(n) represent the number of operations needed to get a 
result from function2.
*/
int function2(int n){
	int rc=1;			//1
	while(rc <= n){		//1 * log n
		rc*=2;			//1 * log n
	}
	return rc;			//1
}
/*
T(n)= 1 + (log n) + (log n) + 1
    = 2(log n) + 2

Therefore T(n) is O(log n)

*/