//  Binary to Octal Problem
#include<bits/sdtc++.h>
using namespace std;
int main(){
int n,sum=0, bc=1;
  cin>>n;
  for(int i=n; i!=0; i/=8){
  sum+=(i%8)*bc;
    bc*=2;
  }
  cout<<sum<<endl;
  return 0;
}
