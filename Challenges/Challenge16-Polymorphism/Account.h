#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include "IPrintable.h"

class Account: public IPrintable
{
    virtual void print(std::ostream &os) const;
};
#endif
