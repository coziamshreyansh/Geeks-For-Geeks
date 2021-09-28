public:
	long long int sum(int n)
	{
	    bool arr[n+1];
	    memset(arr, true, sizeof(arr));
	    for(int p=2; p*p<=n; p++)
	    {
	        if(arr[p])
	          {for(int i = p*p; i <= n; i+=p){arr[i] = false;}}
	                
	    }
	    
	    // calc sum
	    long long int sum = 0;
	    
	    for(int i=2; i<= n; i++)
	    {
	        if(arr[i])
	           { sum += i;}
	    }
	    return sum;
	    
	}
   	long long int prime_Sum(int n){
   	    // Code here
   	    long long int ans = sum(n);
   	    return ans;
   	    
   	}    
