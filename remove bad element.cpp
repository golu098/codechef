question link :- https://www.codechef.com/problems/REMOVEBAD
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int a[n];
	    for(int i=0; i<n; i++) cin >>a[i];
	    int maxCount = 0;
	    int count = 0;
	    sort(a, a+n);
	    for(int i=0; i<n; i++){
	        if(a[i] == a[i+1]) count++;
	        else{
	            maxCount = max(maxCount, count);
	            count = 0;
	        }
	    }
	    //here else condition is applied so last count is not considered
	    maxCount = max(maxCount, count);
	    //count doesn't consider the first occurance of the number so -1
	    cout <<n-1-maxCount <<endl;
	}
	return 0;
}
