#include<iostream>
// #include<utility>
// #include<queue>
// #include<list>
// #include<map>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;


bool comp(int el1,int el2){
        if(el1<=el2){
            return true;
        }
        return false;
    }


    bool compr(pair<int,int> el1,pair<int,int> el2){
        if(el1.first<el2.first){
            return true;
        }
        if(el1.first==el2.first){
            if(el1.second>el2.second){
                return true;
            }
        }
        return false;
    }

int main(){
   
    // pair<pair<int,int>,pair<int,int>> pr = {{1,2},{3,4}};
    // // cout<<pr.first.first<<" "<<pr.second.second<<endl;
    // priority_queue<int,vector<int>,greater<int>> pq;
    // pq.push(30);
    // pq.push(5);
    // pq.push(2);
    // pq.push(18);
    // // cout<<pq.top()<<endl;
    // while(!pq.empty()){
    //     cout<<pq.top()<<endl;
    //      pq.pop();
    // }
    // list<int> ls;
    // ls.push_back(1);
    // ls.push_back(8);
    // ls.push_back(5);
    // ls.push_back(10);
    // ls.push_back(2);

//     cout<<"before removing element"<<endl;
//    for(auto it : ls){
//     cout<<it<<endl;
//    }
//    ls.remove(5);

// cout<<"after removing element"<<endl;
//    for(auto it : ls){
//     cout<<it<<endl;
//    }
    // while(!ls.empty()){
    //     cout<<ls.front()<<endl;
    //     ls.pop_front();
    // }

    // map<int,int> mpp;
    // int maxi = 0;
    // int n;
    // cin>>n;
    // for(int i = 0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     mpp[x]++;
    //     if(mpp[x]>mpp[maxi]){
    //         maxi = x;
    //     }
    // }
    // cout<<"ans is " <<maxi<<endl;

    // bitset<5> bt;
    // cin>>bt;

    // cout<<bt.any()<<endl;
    

    // int arr[5] = {1,2,3,1,2};
    // int n = 5;
    // for(int i = 0;i<n; i++){
    //     sort(arr,arr+n);
    // }
    // for(int i = 0;i<n; i++){
    //     cout<<arr[i]<<endl;
    // }

    // vector<int> v  = {1,6,2,7,4};
    // sort(v.begin()+1,v.end()-1);

    // for(auto it : v){
    //     cout<<it<<" ";
    // }

    // int arr[5] = {5,100,20,10,200};
    // int n = 5;
    // int max = *min_element(arr,arr+n);
    // int min = *max_element(arr,arr+n);
    // cout << "minimum element " << min << endl;
    // cout<<"maximum element " <<max << endl;
//     int n = 5;
//     int sum = 0;
//     int arr[5] = {1,2,3,4,5};
//     // for(int i = 0;i<n;i++){
//     //      sum = accumulate(arr,arr+n,10);
//     // }
//     // cout<<sum<<endl;
//    vector<int> v = {1,2,3,2,3};
//    auto it = find(v.begin(),v.end(),2); // this will provide the memory location of the '2'
//     int index = it-v.begin(); // this will give the index of it
//     cout<<index<<endl;
 
//    auto it = find(v.begin(),v.end(),24); // this will provide the memory location of the '2'
//     if(it==v.end()){
//         cout<<"element is not prsent in the vector "<<endl; // this will give the end index of the vector 
//     }else{
//         cout<<"inedx of the given key is "<<it-v.begin()<<endl;
//     }
//     ch
    // int arr[6] = {1,2,3,4,7,8};
    // int n = 6;
    // int k = 7;
    // int ans = binary_search(arr,arr+n,k);

    // vector<int>arr1 = {1,2,3,4,5};
    // int num = 5;
    // int k = 5;
    // int ind = lower_bound(arr1.begin(),arr1.end(),k)-arr1.begin();
    // cout<<ind<<endl;
    // vector<int> :: iterator ans;
    // ans = arr1.begin();
    // cout<<" ans is " <<*ans<<endl;

    // cout<<arr1.end()-arr1.begin()<<endl;
    // cout<<ind<<endl;
    // cout<<"value "<<ind<<endl;
    // if(ind!=num && arr1[ind] == k){
    //     cout<<"element found  at "<<ind<<endl;
    // }
    // else{
    //     cout<<"element not found "<<endl;
    // }


    //     vector<int>arr1 = {1,2,3,4,5,10,20,5};
    // int num = 10;
    // int k = 0;
    // int ind = upper_bound(arr1.begin(),arr1.end(),k)-arr1.begin();
    // vector<int> :: iterator ans;
    // ans = arr1.begin();
    // ind -= 1;




    // if(ind>=0 && arr1[ind]==k){
    //     cout<<"The last occurance " <<ind<<endl;

    // }else{
    //     cout<<"The element is not found in the vector "<<endl;
    // }
    // vector<int>arr1 = {1,2,3,4,5,10,20,5};
    // int num = 10;
    // int k = 10;
    // int uper = upper_bound(arr1.begin(),arr1.end(),k)-arr1.begin();
    // int lpr = lower_bound(arr1.begin(),arr1.end(),k) -arr1.begin();
    // int ans = uper-lpr;

    // cout<<ans<<endl;


    // string st = "abc";
    // bool ans = next_permutation(st.begin(),st.end());
    // cout<<ans<<" "<< st<<endl;

    int arr[5] = {5,4,3,2,1};
    int n = 5;
    

    sort(arr,arr+n,comp);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }


    vector<pair<int,int>>vec = {{1,4},{5,2},{5,9}};

    sort(vec.begin(),vec.end(),compr);

  for(int i = 0;i<vec.size();i++){
    cout<< vec[i].first <<","<<vec[i].second<<endl;
  }

    return 0;
}

