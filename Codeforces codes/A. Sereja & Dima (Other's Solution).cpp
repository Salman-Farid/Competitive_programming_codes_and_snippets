#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,s=0,d=0;
    cin>>n;
    int a[n];
    int m=0,k=n-1,h;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        h=max(a[m],a[k]);
        if(h==a[m])
            a[m++]=0;
        else a[k--]=0;
        if(i%2==0)
            s+=h;
        else d+=h;
    }
    cout<<s<<" "<<d<<endl;

}


Python solution:
............................................
n=int(input())
lst=input().split()
s,d=0,0
turn=0
while(len(lst)!=0):
    if(int(lst[0])>int(lst[len(lst)-1])):
        if(turn%2==0):
            s+=int(lst[0])
        else:
            d+=int(lst[0])
        del lst[0]
    else:
        if(turn%2==0):
            s+=int(lst[len(lst)-1])
        else:
            d+=int(lst[len(lst)-1])  
        del lst[len(lst)-1] 
    turn+=1     
print(s,d)    



