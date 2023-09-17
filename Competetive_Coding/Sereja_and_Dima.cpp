#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cards[n];
    int s = 0;
    int e = n-1;
    int serga_sum = 0;
    int dima_sum = 0;
    bool serga_turn = true;
    for(int i = 0; i<n; i++){
        cin>>cards[i];
    }
    while(s<=e){
        if(serga_turn){
            if(cards[s]>cards[e]){
                serga_sum += cards[s];
                s++;
            }else{
                serga_sum += cards[e];
                e--;
            }
        }else{
            if(cards[s]>cards[e]){
                dima_sum += cards[s];
                s++;
            }else{
                dima_sum += cards[e];
                e--;
            }
        }
        serga_turn = !serga_turn;
    }
    cout<< serga_sum << " " << dima_sum << endl;


    return 0;
}