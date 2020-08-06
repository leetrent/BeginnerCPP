#ifndef _IPRINTABLE_H_
#define _IPRINTABLE_H_
#include <iostream>
class IPrintable
{
    friend std::ostream &operator<<(std::ostream &os, const IPrintable &obj);
    public:
        virtual ~IPrintable() = default;
        virtual void print(std::ostream &os) const = 0;
};
#endif
