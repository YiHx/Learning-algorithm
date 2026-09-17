#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
    system("/opt/homebrew/bin/g++-16 a.cpp -o a");
    system("/opt/homebrew/bin/g++-16 date.cpp -o date1");
    system("/opt/homebrew/bin/g++-16 baoli.cpp -o baoli");

    while (1) {
        system("./date1 > date.txt");
        system("./baoli < date.txt > baoliDate.txt");
        system("./a < date.txt > aDate.txt");

        if (system("diff -q -w baoliDate.txt aDate.txt")) {
            cout<<"WA"<<endl;
            system("cat date.txt ");
            cout<<"暴力答案"<<endl;
            system("cat baoliDate.txt ");
            cout<<"正解"<<endl;
            system("cat aDate.txt");
            break;
        }else {
            cout<<"AC"<<endl;
            cout<<"##########"<<endl;
        }
    }
}