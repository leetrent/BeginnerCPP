#ifndef __ILLEGALBALANCEEXCEPTION_H__
#define __ILLEGALBALANCEEXCEPTION_H__

class IllegalBalanceException : public std::exception
{
    public:
        IllegalBalanceException()
        {
            std::cout << "[IllegalBalanceException] => (contructor)" << std::endl;
        }
        ~IllegalBalanceException()
        {
            std::cout << "[IllegalBalanceException] => (destructor)" << std::endl;
        }
        virtual const char* what() const noexcept override
        {
            return "Balance cannot be less than zero.";
        }
};
#endif
