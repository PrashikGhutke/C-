#include<iostream>
using namespace std ;
Int max(int x ,int y) // Called Function Formal parameter
{
        if(x > y)
        return x;
        else
        return y;
}
int main()
{
        int x ,y ;
        cout<<"Enter The 2 Num ";
        cin>>x>>y;
        int s = max(x,y); //calling Function Actual Parameter
        cout<<"LARGE = "<<s ;
        return 0;
}


/*
OUTPUT:
Enter The 2 Num 5
5
LARGE = 5

*/