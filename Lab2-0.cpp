#include <iostream>
#include <stdlib.h>

using namespace std;

class ogrenci {
	int year;
public:
	ogrenci();
	ogrenci(int x);
	void show();
};


ogrenci::ogrenci(int x) {

	cout << "In constructor\n";
	year = x;
}
ogrenci::ogrenci() {

	cout << "In constructor\n";
	year = 1;
}
void ogrenci::show() {
	cout << year<<"\n";
}
int main()
{
	ogrenci ob(5);
	ogrenci ob2;
	ob.show();
	ob2.show();
	
	system("pause");
}
