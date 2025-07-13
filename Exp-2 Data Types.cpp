//NAME: Nishka Ranadive
//PRN: 24070123082
//Exp-2

#include<iostream>
#include<string>
using namespace std;

int main(){
    
    int a;
    cout<<"Enter an Integer:";
    cin>>a;
    cout<<"Integer is:"<< a<<" and size is:"<< sizeof(a)<<"bytes"<<endl;
    
    float b;
    cout<<"Enter a Decimal Number for Float:";
    cin>>b;
    cout<<"Number is:"<< b<<" and size is:"<< sizeof(b)<<"bytes"<<endl;
    
    char c;
    cout<<"Enter a Character:";
    cin>>c;
    cout<<"Character is:"<< c<<" and size is:"<< sizeof(c)<<"bytes"<<endl;
    
    double d;
    cout<<"Enter a Decimal Number for Double:";
    cin>>d;
    cout<<"Number is:"<< d<<" and size is:"<< sizeof(d)<<"bytes"<<endl;
    
    
    string e;
    cout<<"Enter a String:";
    cin>>e;
    cout<<"String is:"<< e<<" and size is:"<< sizeof(e)<<"bytes"<<endl;
    
    bool f;
    cout<<"Enter TRUE/FALSE:";
    cin>>f;
    cout<<"Input is:"<< f<<" and size is:"<< sizeof(f)<<"bytes"<<endl;
    
    return 0;
}
