#include<iostream>
using namespace std;
#include<cstring>
class ZooAnimal  
{
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Create (char const s[], int, int, int); // create function
      void Destroy (); // destroy function 
      char* reptName ();
      int daysSinceLastWeighed (int today);
};

void ZooAnimal::Create(char const s[], int cn, int wd, int w)
{
    strcpy(name, s);
    cageNumber = cn;
    weightDate = wd;
    weight = w;
}

void ZooAnimal::Destroy()
{
    ZooAnimal::~ZooAnimal();
}


// -------- member function to return the animal's name
char* ZooAnimal::reptName ()
{
    return name;
}

int ZooAnimal::daysSinceLastWeighed(int today)
{
    int i = today;
    return i;
}
   
// ========== an application to use the ZooAnimal class
int main ()
{
    ZooAnimal bozo;
    bozo.Create ("Bozo", 408, 1027, 400);

    cout << "This animal's name is " << bozo.reptName()<< endl;

    bozo.Destroy ();
    return 0;
}
