//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> result;

     deque<int> dq;

     dq.push_front(arr[0]);

     for(int i=1;i<k;i++)

       {

           while(dq.back() < arr[i] && dq.size()!=0 ) 

           {

               dq.pop_back();

               if(dq.size()==0)

                  break ;

           }

           dq.push_back(arr[i]);

       }

       

       

       for(int i=k;i<n;i++)

       {

           

            result.push_back(dq.front());

          if(arr[i-k]==dq.front())

          {

              dq.pop_front();

          }

         

          

            while(dq.back() <arr[i] &&dq.size()!=0 ) 

           {

               dq.pop_back();

               if(dq.size()==0)

                  break ;

           }

           dq.push_back(arr[i]);

       }

       

       result.push_back(dq.front());

       return result;

       }
        // your code here
    
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends