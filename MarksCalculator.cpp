#include <iostream>
#include <string>
using namespace std;

char gradeLetter(double Average){
    if(Average > 80) return 'A' ;
    else if(Average > 70) return 'B';
    else if(Average > 60) return 'C';
    else return 'F';
}

string courage(char GradeLetter){
    if(GradeLetter == 'A') return "Good Job!!!";
    else if(GradeLetter == 'B') return "Not Bad!!";
    else if(GradeLetter == 'C') return "Be Better Next Time!";
    else return "You are a totally failure, your future is dark and darker than the blackhole, you're not allow enjoy anything till your dead";
}


int main() {
    int count;
    double marks;
    double sum;
    double Average;
    
    cout << "Please enter the number of grade: ";
    cin >> count;
   
    if (count > 8 || count < 1){
        cout << "Invalid number";
        return 1;
    }
   
    for (int i = 0; i < count; i++) {
        cout << "Enter your marks of grade " << i + 1 << " : ";
        cin >> marks;
        sum += marks;
    }
    
    Average = sum / count;
    char GradeLetter = gradeLetter(Average);
    cout << "Average : " << Average << '\n';
    cout << "Your Grade : " << GradeLetter << '\n';
    cout << courage(GradeLetter);
    
    return 0;
}

