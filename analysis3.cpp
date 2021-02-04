/*
let n represent the value passed to function3
let T(n) represent the number of operations needed to get a 
result from function3.
*/

int function3(int n){
	int rc=1;				//1
	for(int i=0;i<10;i++){	//1 + 10 + 10
		rc+=i;				//10
	}
	return rc;		//1
}

/*

T(n) = 1 + 1 + 10 + 10 + 10 + 1
     = 33
     = 33(1)

Therefore T(n) is O(1)

