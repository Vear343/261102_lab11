#include<iostream>
#include<string>
#include<ctime>

using namespace::std;

// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

string grade(int x){
    string grade[9] = {"A","B+","B","C+","C","D+","D","F","W"};
    return grade[x];
}

int main(){
    srand(time(0));
    int x = rand() % 9;
    cout << "Press Enter 3 times to reveal your future.\n";
    cin.get();
    cin.get();
    cout << "You will get "<< grade(x) << " in this 261102.";
}