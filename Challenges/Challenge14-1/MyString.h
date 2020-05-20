#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);

    private:
        char *str;
        void init();

    public:
        // Empty constructor
        MyString();
        // One-arg constructor
        MyString(const char *s);
        // Copy constructor
        MyString(const MyString &source);
        // Move constructor
        MyString(MyString &&source);
        // Destructor
        ~MyString();

        //////////////////////////////////////////////////
        // OPERATOR OVERLOADING
        //////////////////////////////////////////////////
        // Copy assignment operator
        MyString &operator=(const MyString &rhs);
        // Lowecase operator
        MyString operator-() const;
        // Equality operator
        bool operator==(const MyString &rhs) const;
        // Inequality operator
        bool operator!=(const MyString &rhs) const;
        // Less than operator
        bool operator<(const MyString &rhs) const;
        // Greater than operator
        bool operator>(const MyString &rhs) const;
        // Plus operator (concatentation)
        MyString operator+(const MyString &rhs) const;
        // Plus-equal (+=) operator
        // (increment an instance of this class by the parameter on the right-hand side)
        void operator+=(const MyString &rhs);
        // Multiply operator (concatentate n number of times)
        // MyString operator*(const MyString &rhs, size_t n) const;


        //////////////////////////////////////////////////
        // OTHER METHODS:
        //////////////////////////////////////////////////
        void display() const;
};

#endif
