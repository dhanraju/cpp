#ifndef BASIC_CLASS_H
#define BASIC_CLASS_H

class BasicClass {
    public:
	explicit BasicClass( int initialValue = 0 );
	int read() const;
	void write(int x);
    private:
	int storedValue;
};

#endif
