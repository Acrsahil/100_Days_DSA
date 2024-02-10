#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

  int n,a;
  scanf("%d",&n);
  vector<int> ind[5001];
  for(int i = 1; i<=n*2; i++){
    scanf("%d",&a);
    ind[a].push_back(i);
  }
  bool ans = true;
  for(int i = 0; i<5001; i++){
    if((ind[i].size() % 2 == 1)){
      ans = false;
      printf("-1");
      break;
    }
  }
  if(ans){
  for(int i = 1; i<5001; i++){
      for(size_t j = 0; j <ind[i].size(); j+=2){
        printf("%d %d\n",ind[i][j],ind[i][j+1]);
      }
  }
  }
    return 0;
}
