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
       
        health=h;
    }
     void setlevel(char h)
    {
       level=h;
    }

};
int main(){
    //static allocation
  hero a;
  //Memory is allocated on the stack to hold the data members of the hero object.
  // The amount of memory needed is determined by the size of the data members of the hero class.
  a.sethealth(40);
  a.setlevel('a');
  cout<<" level "<<a.getlevel()<<endl;
  cout<<"health"<<a.gethealth()<<endl;

  //dynamic allocation
  hero *b=new hero;
  b->sethealth(70);
  b->setlevel('A');
 cout<<" level "<<(*b).getlevel()<<endl;
  cout<<"health"<<(*b).gethealth()<<endl;

  cout<<" level "<<b->getlevel()<<endl;
  cout<<"health"<<b->gethealth()<<endl;  
  //new hero: This part of the statement dynamically allocates memory for a single object of type hero on the heap. 
  //This means it reserves a block of memory large enough to hold all the data members of a hero object (in this case, an int and a char),
  // and initializes them according to their default values (for primitive types like int and char, 
  //this usually means they are initialized to 0 or '\0').
 return 0;
}

//hero *b = new hero;: Memory allocated on the heap must be explicitly deallocated using the delete keyword to avoid memory leaks. For example, delete b; would free the memory allocated for the hero object pointed to by b.
//hero a;: Memory allocated on the stack is automatically deallocated when the variable goes out of scope. You don't need to manually deallocate memory for a.

