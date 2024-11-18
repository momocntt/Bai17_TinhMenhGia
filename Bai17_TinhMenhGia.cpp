// Bai17_TinhMenhGia
#include <iostream>
using namespace std;
int main()
{
	int sotien, to500, to200, to100, to50, to20, to10, to1,
		soto500, soto200, soto100, soto50, soto20, soto10, soto1;

	cout << "so to tien can rut ra:\n";
	cin >> sotien;


	soto500 = sotien / 500;
	sotien = sotien % 500; // sotien=sotien - soto500 *500; HOAC so tien -= soto500*500;
	cout << "|tSo to 500 la\t" << soto500 << "to\n";

	soto200 = sotien / 200;
	sotien = sotien % 200;
	cout << "|tSo to 200 la\t" << soto200 << "to\n";

	soto100 = sotien / 100;
	sotien = sotien % 100;
	cout << "|tSo to 100 la\t" << soto100 << "to\n";

	soto50 = sotien / 50;
	sotien = sotien % 50;
	cout << "|tSo to 50 la\t" << soto50 << "to\n";

	soto20 = sotien / 20;
	sotien = sotien % 20;
	cout << "|tSo to 20 la\t" << soto20 << "to\n";

	soto10 = sotien / 10;
	sotien = sotien % 10;
	cout << "|tSo to 10 la\t" << soto10 << "to\n";

	soto1 = sotien / 1;
	sotien = sotien % 1;
	cout << "|tSo to 1 la\t" << soto1 << "to\n";
} 











	
	


