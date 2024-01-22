//4057974   Jul 13, 2013 9:21:57 AM	fuwutu	 239A - Two Bags of Potatoes	 GNU C++0x	Accepted	62 ms	0 KB
#include <iostream>
using namespace std;
int main()
{
  int y,k,n;
  cin >> y >> k >> n;
  int x = k - y % k;
  int top = n - y;

  if(x<=top){
    while(x<=top){
      cout << x << " ";
      x += k;
    }

  }else{
    cout << -1 << endl;
  }
  return 0;
}
