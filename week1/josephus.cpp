#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k){
    // code here
          list<int>l;
          for(int i=1;i<=n;i++)
          l.push_back(i);
          list<int>::iterator it=l.begin();;
          while(l.size()>1)
          {
              for(int i=1;i<k;i++)
              {
                  it++;
                  if(it==l.end())
                  it=l.begin();
              }
              it=l.erase(it);
              if(it==l.end())
                  it=l.begin();
          }
          return *it;
}


//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    
    while(t-- > 0){
        int n,k;
        cin>>n>>k;
        
        cout<<josephus(n,k)<<"\n";
    }
    
    return 0;
}
// } Driver Code Ends
