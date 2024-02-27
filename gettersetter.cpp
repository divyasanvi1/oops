#include<iostream>
using namespace std;
class hero
{   
    //properties or data members
   private:
    int health;
     public:
    char level;
    void print()
    {
        cout<<level<<endl;
    }

    int gethealth()
    {
        return health;
    }
     char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {   
        //if we want to use a password or so that a specific empolyee can only set the data 
        health=h;
    }
     void setlevel(char h)
    {
       level=h;
    }

};
int main(){
   // setter and getter used to get and set the private members
   //by default access modifier is private 
   // private is only accessed inside the class
   hero ramesh;
   //using setter
   ramesh.sethealth(70);
   ramesh.level='A';
   cout<<"health"<<ramesh.gethealth()<<endl;
   cout<<"level"<<ramesh.level<<endl;
 return 0;
}

//padding -give it a read 
// greddy alignment -balnce between memory efficency and alignment requirements
