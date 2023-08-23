#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int ansi = 0;
    int ansj = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }

    int i = 0;
    while (i < 5) {
        int j = 0;
        while (j < 5) {
            if (arr[i][j] == 1) {
               ansi = i;
               ansj = j;
            }
            j++;
        }
        i++;
    }
    int rowoutput = 0;
    int coloutput = 0;
    int row = 2;
    int col = 2;
    int ans;
    if(ansi==row){
        rowoutput = 0;
    }
    if(ansj == col){
        coloutput = 0;
    }
    if(ansi<row){
        rowoutput = row-ansi;
    }else{
        rowoutput = ansi-row;
    }
    if(ansj<col){
        coloutput = col-ansj;
    }else{
        coloutput = ansj - col;
    }
    ans = rowoutput+coloutput;
    cout<<ans<<endl;



    
    return 0;
}
