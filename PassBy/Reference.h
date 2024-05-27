#ifndef REFERENCE_H
#define REFERENCE_H

class Reference
{
protected:
	int x;
	int y;
public:
	Reference();
	int getX(int);
	int getY(int);
	void Swap(int &x, int &y);
	void ReferenceResult();
};
#endif
