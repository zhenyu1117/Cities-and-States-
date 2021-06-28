
#include<iostream>
#include<cstdio>
using namespace std;
#define maxn 26*26*26*27
int n,h1[maxn],h2[maxn];
char s1[100],s2[100];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%s%s",s1+1,s2+1);
        if(s1[1]!=s2[1]||s1[2]!=s2[2]){
            int x1=(((s1[1]-'A')*26+s1[2]-'A')*26+s2[1]-'A')*26+s2[2]-'A';
            int x2=(((s2[1]-'A')*26+s2[2]-'A')*26+s1[1]-'A')*26+s1[2]-'A';
            h1[x1]++;h2[x2]++;
        }
    }
    long long ans=0;
    for(int i=0;i<maxn;i++)ans+=h1[i]*h2[i];
    ans/=2;
    cout<<ans;
}
