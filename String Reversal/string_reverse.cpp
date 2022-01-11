#include <bits/stdc++.h>

using namespace std;

int main(){

 char in[200] = {'0'};
 
 gets(in);

 cout<<"Entered String : ";
 for (int i = 0; i < sizeof(in); i++)
 {
     cout<<in[i];
 }
    int f = sizeof(in);
 cout<<endl<<"Reversed String : ";

 for(int i = f - 1; i >= 0; i--){
     cout<<in[i];
 }

return 0;

}