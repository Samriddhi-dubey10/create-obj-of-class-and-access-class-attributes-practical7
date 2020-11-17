#include <iostream>

using namespace std;
class tickets{
    int age;
    int no_of_passanger;
char name[20];
char from[20];
char to[20];

public:

    void accept(){
    cout<<"enter name,from ,to,age , no_of_paasanger"<<"\n";
    cin>>name>>from>>to;
    cin>>age>>no_of_passanger;


    }
void display(){

cout<<"Display Details :"<<"\n";
cout<<"name is "<<name<<"\n";
cout<<"from  "<<from<<"\n";
cout<<"to  "<<to<<"\n";
cout<<"age: "<<age<<"\n";
cout<<"no_of_passanger"<<no_of_passanger<<"\n";

}
};

int main()
{
    tickets t;
    t.accept();
    t.display();
    return 0;
}
