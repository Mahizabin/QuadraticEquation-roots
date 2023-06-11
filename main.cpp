#include<iostream>
#include<math.h>
using namespace std;
int main(){
    
    int a,b,c;
    cout<<"Enter the values of a,b and c: "<<endl;
    cin>>a>>b>>c;
    cout<<"The quadratic Equation is"<<a<<"x2+"<<b<<"x+"<<c<<endl;
    float k=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    float l=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"The roots of the quadratic equation are "<<k<<"and"<<l<<endl;
    return 0;
    
}
