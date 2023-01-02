#include <iostream>
#include <string>
using namespace std;
// using std :: string;
class car{
public:
    string name;
    int a,b;

    car(int a , int b){
        this->a=a;
        //  cout << a <<  endl << b;
    }
};
int main(){
    car obj(5,7);
    cout << obj.a;
}