#ifndef ADDRESS_H
#define ADDRESS_H

class Address
{
protected:
	int x;
	int y;
public:
	Address();
	int getX(int);
	int getY(int);
	void Swap(int*, int*);
	void AddressResult();
};
#endif
