#include <bits/stdc++.h>
using namespace std;

int main()
{
   string str1,str2;
   cin>>str1>>str2;
   
   for(int i = 0; i<str1.size(); i++){
    if(isupper(str1[i]))
    str1[i] = 'a' + str1[i] - 'A';

    if(isupper(str2[i]))
    str2[i] = 'a' + str2[i] - 'A';
   }



   if(str1>str2){
    cout<<1<<endl;
   }else if(str1<str2){
    cout<<-1<<endl;
   }else{
    cout<<0<<endl;
   } 
    return 0;
}