#include <bits/stdc++.h>
using namespace std;

void sorts(vector<int> &data, int s, int e) {
    for (int i = s; i <= e; i++) {
        int minIndex = i;
        for (int j = i + 1; j <= e; j++) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(data[i], data[minIndex]);
        }
    }
}



int main()
{
    
    string data;
    cin>>data;
    string ans = "";

    vector<int>num;

    for(int i = 0; i<data.size(); i++){

        if(isdigit(data[i])){
            int nume = data[i] - '0';
            cout<<typeid(nume).name()<<endl;
            num.push_back(nume);
        }
    }
    int n = num.size();
    sorts(num,0,n-1);

    for(int i = 0; i<num.size(); i++){
        ans += to_string(num[i]);
        if(i<num.size()-1){
            ans += '+';
        }
    }
    cout<<ans<<endl;


    return 0;
}