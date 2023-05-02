#include <bits/stdc++.h>
using namespace std;

// int minCoins(int coins[], int M, int V) 
// 	{ 
// 	    // Your code goes here
// 	   vector<int> count(V+1,INT_MAX);
//        coins[0]=0;
//        for(int i=1;i<=V;i++){
//         for(int j=0;j<M;j++){
//             if(i-coins[j]>=0 && count[i-coins[j]]!=INT_MAX){
//                 count[i]=min(count[i],count[i-coins[j]]+1);
//             }
//         }
//     }
//     return count[V];
// 	} 


int maxEvents(int start[], int end[], int N) {
        // code here
        vector<pair<int, int>> v;
        for(int i=0;i<N;i++){
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(), v.end());
        int t=1, ans=0;
        for(int i=0;i<N;){
            if(t<=v[i].first && t>=v[i].second){
                i++; ans++;
            }
            t++;
        }
        return ans;
        
    }

int main(){
    int start[]={88, 57, 7, 8, 86, 16, 28, 47, 51, 2, 19, 59, 65, 2, 27, 33, 9, 30, 58, 68, 3, 14, 2, 4, 4, 11, 31, 36, 8, 50, 17, 13, 72, 8, 7, 55, 21, 5, 51, 39, 40, 50, 47, 73, 86, 12, 2, 4, 14, 68, 31, 54, 2, 20, 12, 36, 3, 14, 34, 44, 8, 3, 10, 52, 40, 55, 8, 82, 24, 10, 13, 3, 3, 36, 5};
    int end[]={92, 87, 65, 20, 93, 17, 50, 75, 63, 61, 66, 77, 69, 4, 76, 36, 12, 43, 58, 84, 24, 21, 3, 28, 11, 71, 66, 90, 10, 80, 18, 59, 77, 10, 37, 78, 47, 14, 53, 72, 82, 63, 61, 78, 96, 38, 4, 15, 67, 97, 33, 80, 8, 22, 12, 39, 3, 56, 44, 87, 11, 21, 32, 69, 56, 89, 16, 94, 28, 33, 81, 8, 81, 99, 29};
    cout<<maxEvents(start, end,75);
    return 0;
}


	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	   vector<int> count(V+1,INT_MAX);
       count[0]=0;
       for(int i=1;i<=V;i++){
        for(int j=0;j<M;j++){
            if(i-coins[j]>=0 && count[i-coins[j]]!=INT_MAX){
                count[i]=min(count[i],count[i-coins[j]]+1);
            }
        }
    }
    return (count[V]==INT_MAX?-1:count[V]);
	} 
	  


