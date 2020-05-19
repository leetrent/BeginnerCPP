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


        //////////////////////////////////////////////////
        // OTHER METHODS:
        //////////////////////////////////////////////////
        void display() const;



};

#endif
