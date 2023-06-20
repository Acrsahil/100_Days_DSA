#include <iostream>
using namespace std;


 // object like marcos
#define DATE 31

// chain macros
#define INSTAGRAM FOLLOWERS // -> Parent macros
#define FOLLOWERS 138 // chain macros -> child macros

// multiline macros
#define multiline 1, \
                  2, \
                  3

// function like macro
#define min(a,b) ((a<b) ? (a) : (b))

#define Area(l,b) (l*b)
int main()
{
    cout<<"i have "<< FOLLOWERS <<" followers in instagram "<<endl;
    int l1 = 2;
    int l2 = 5;
    cout<<"The area of rectangle is "<< Area(l1,l2)<<endl;

    int arr[] = {multiline};
    for(int i = 0; i<3; i++){
        cout<<arr[i]<<endl;
    }

    int a = 50050;
    int b = 7; 
    cout<<"minimum element between a and b is "<<min(a,b)<<endl;



    cout<<DATE<<"-MAY-2023"<<endl;
    return 0;
}