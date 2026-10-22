
#include <iostream>
using namespace std;
 //we need to check if x is interval or not , so we will use conditional statements in this problem
void solve(){ 
    double x ; 
    cin >>x  ; 

    
    if (x >= 0 && x <= 25) {
        cout << "Interval [0,25]" << endl;
    }
    else if (x > 25 && x <= 50) {
        cout << "Interval (25,50]" << endl;
    }
    else if (x > 50 && x <= 75) {
        cout << "Interval (50,75]" << endl;
    }
    else if (x > 75 && x <= 100) {
        cout << "Interval (75,100]" << endl;
    }
    else {
        cout << "Out of Intervals" << endl;
    }
}
 
int main() {
 
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve(); 
 
}