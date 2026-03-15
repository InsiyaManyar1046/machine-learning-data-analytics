#include<iostream>
#include<string>
using namespace std;
class shape{
    public:
    static int x;
    void inc(){
        x=x+1;
    }
};
int shape :: x=0;
int main(){
    shape s1,s2;
    s1.x=100;
    s2.x=200;
    cout<<s1.x<<endl;
    s1.inc();
    cout<<s1.x<<endl;
    cout<<s2.x<<endl;
    s2.inc();
    cout<<s2.x<<endl;
    return 0;
}