#include<bits/stdc++.h>
using namespace std;
int main()
 {
	
    int t;
    cin>>t;
    while(t--){
        int n,count=0,maxi=0;
        cin>>n;
        while(n!=0){
            if(n%2==1){
                count++;
                n>>=1;
            }else{
                if(maxi<=count){
                    maxi=count;
                }
                n>>=1;
                count=0;
            }
        }
        if(maxi<=count){
            maxi=count;
        }
        if(maxi>=2){
            cout<<"0"<<endl;
        }else{
            cout<<"1"<<endl;
        }
    }
	return 0;
}