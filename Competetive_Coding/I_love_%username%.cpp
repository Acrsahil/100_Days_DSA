#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int score[n];
    for(int i = 0; i<n; i++){
        cin>>score[i];
    }
    int low = score[0];
    int high = score[0];
    int amazing = 0;
    for(int i = 1; i<n; i++){
        if(score[i]>high){
            high = score[i];
            amazing++;
        }
        if(score[i]<low){
            low = score[i];
            amazing++;
        }
    }
    cout<<amazing<<endl;
    return 0;
}