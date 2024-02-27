#include<iostream>
using namespace std;
class hero
{   
    //properties or data members
    public:
    int health;
    char level;
    void print()
    {
        cout<<level<<endl;
    }
};
int main(){
   
   //by default access modifier is private 
   // private is only accessed inside the class
   hero ramesh;
   ramesh.health=70;
   ramesh.level='A';
   cout<<"health"<<ramesh.health<<endl;
   cout<<"level"<<ramesh.level<<endl;
 return 0;
}