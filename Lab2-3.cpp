#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

class strtype {
	char *p;
	int len;
public:
	strtype(char *ptr);
	~strtype();
	void show();

};

strtype::strtype(char *ptr) {
	len = strlen(ptr);
	p = (char *)malloc(len + 1);
	if (!p) {
		cout << "Allocation error\n";
		exit(1);
	}

}

strtype::~strtype() {
	cout << "Freeing p\n";
	free(p);
}

void strtype::show() {
	cout << p << " - legnth: " << len << endl;
}

int main()
{
	strtype s1("This is a test."), s2("UGURINAL");
	
	s1.show();
	s2.show();
	
	system("pause");
}
