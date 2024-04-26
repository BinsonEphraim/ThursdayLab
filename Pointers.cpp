#include<iostream>
using namespace std;
int main(){
    // dinamically allocate int value and free app space by deleting pointer.
    int Numbers = 50;
    int* Epointer = new int;
    *Epointer= Numbers;
    delete Epointer;

    string name = "Lonjezo";
    string* Pstring= new string;
    *Pstring= name;
    delete Pstring;
// prompt the user to enter values
    int space;
    cout << "enter space value";
    cin>> space;
    int * SpacaPointer = new int{space};
    cout << space;
    delete SpacaPointer;

    string Village;
    cout << " enter your village ";
    cin >> Village;
    string * StringPointer = new string {Village};
    delete StringPointer;
    // out put into console.
    cout << " the value of integer is " << space<<" /n";
    cout <<" The value of string ,which is your name is " << name;

    // arrays of double
    int column,lows;
    cout << " enter number of columns ";
    cin >> column;
cout<<" enter number of lows ";
cin>> lows;

// dinamically allocate memory for vailable
if(column&& lows <=3){
double ** ArraysName = new double*[lows];
for(int i = 0; i<lows; i++){
    ArraysName[i]=new double[column];
    
    // give input to our array
    cout << " enter elements of an array "<<"/n";
    
    for(int i = 0; i< lows,i++){
        for(int j = 0; j< column; j++){
            cout << ArraysName[i][j];
        }
    
}}



}