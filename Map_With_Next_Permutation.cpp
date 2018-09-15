#include<iostream>
#include<unordered_map>
#include<algorithm>
#define ll long long
using namespace std;
int conv(int a1[],int n){
        int i, k = 0;
        for (i = 0; i < n; i++) k = 10 * k + a1[i];
        return k;
    }
int main()
{
        int n;
        cin>>n;
        int a[n];
        unordered_map<ll,ll> m1;
        unordered_map<ll,ll>::iterator itr;
        for(int i=0;i<n;i++) a[i]=i+1;
        do{
            m1.insert(make_pair(conv(a,n),1));
        }while(next_permutation(a,a+n));
        for(itr=m1.begin();itr!=m1.end();itr++){
            cout<<itr->first<<" ";
        }
}


