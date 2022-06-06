#include<iostream>
using namespace std;

class employee {
public:

   int num;
   char sname[100];
   char add[100];

   void input() {

       cout << "Enter Name: ";
       cin.getline(sname, 100);

       cout << "Enter Number: ";
       cin>>num;
       cin.get();
       cout << "Enter Address: ";
       cin.getline(add, 100);
   }

};
class cemployee {
public:

   int sal;
   char des[100];


   void comp() {

       cout << "Enter Designation : ";
       cin.getline(des, 100);

       cout << "Enter Salary : ";
       cin>>sal;
       cin.get();

   }

};

int main() {

   College obj;
   obj.input();
   obj.comp();
   obj.display();

   return 0;
}
