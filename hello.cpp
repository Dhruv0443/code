#include<bits/stdc++.h>
#include <iostream>
using namespace std;

class Circle{
int radius;
public:
    Circle(){
    radius=7;}
    Circle(int radius){
    this-> radius=radius;}
    protected int area(){
    return(22*radius*radius/7)}
    void disp(){
    cout<<radius;}
    };

int main() {
    Cyliner c1,c2(10),c3(5,14);
    c1.computevolume();
    c2.computevolume();
    c3.computevolume();
}

