// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack
   static   bool comp(Item a, Item b)
        {
            double r1=(double)a.value/ (double)a.weight;
            double r2= (double)b.value/ (double)b.weight;
            
            return r1>r2;
        }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        // vector<int>vec;
        // vector<int>ans(n,0);
        // int price=0;
        
      
        vector<pair<double,int>>ratio;
            double price=0;
      
        
        sort(arr, arr+n, comp);
        int curweight=0;
        double finalvalue=0.0;
        // sort(arr.begin(),arr.end());
        // reverse(ratio.begin(), ratio.end());

     for(int i=0;i<n;i++)
     {
       if(curweight + arr[i].weight <=W)
       {
           curweight+=arr[i].weight;
           finalvalue+=arr[i].value;
       }
       else
       {
           int remain =W-curweight;
           
           finalvalue+=(arr[i].value/(double)arr[i].weight)*(double)remain;
           break;
       }
     }
     return finalvalue;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends