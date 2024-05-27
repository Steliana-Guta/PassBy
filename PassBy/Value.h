#ifndef VALUE_H
#define VALUE_H

class Value
{
protected:
	int x;
	int y;
public:
	Value();
	int getX(int);
	int getY(int);
	void Swap(int x, int y);
	void ValueResult(void);
};
#endif
