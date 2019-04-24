// Store a class object in a vector
#include <iostream >
#include <vector >
using namespace std;
class Demo{
    double d;
    public:
    Demo() { d = 0.0; }
    Demo(double x) { d = x; }
    Demo &operator=(double x){ d = x; return *this;}
    double getd() { return d; }
};
bool operator <(Demo a, Demo b){return a.getd() < b.getd();}
bool operator==(Demo a, Demo b){return a.getd() == b.getd();}

void viewVector(vector<Demo> &v){
    for(int i=0; i<(int)v.size(); i++)
    cout << v[i].getd() << " ";
    cout << endl;
}

int main(){
    vector <Demo> v; 
    for(int i=0; i<10; i++)
    v.push_back(Demo(i/3.0));
    viewVector(v);
    for(int i=0; i<(int)v.size(); i++) v[i] = v[i].getd() * 2.1;
    for(int i=0; i<(int)v.size(); i++) cout << v[i].getd() << " ";
    return 0;
}