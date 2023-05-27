#include<iostream>
#include<vector>
#include<string>
using namespace std;
void compress(vector <char> & chars){
    int i = 0;
    int n = chars.size();
    int ansindex = 0;
    while(i<n){
        int j = i+1;
        while(j<n && chars[i] == chars[j]){
            j++;
        }
        chars[ansindex++] = chars[i];
        int count = j-i;
        if(count>1){
            string cnt = to_string(count);
            for(char ch: cnt){
                chars[ansindex++] = ch;
            }
        }
        i = j;
    }
   for(int i = 0;i<ansindex;i++){
    cout<<chars[i]<<" ";
   }
    
}
int main(){
    vector <char> s = {'a', 'a', 'b', 'd', 'e','e','e','f','e','g','a'};
    compress(s);

    
    return 0;
}












