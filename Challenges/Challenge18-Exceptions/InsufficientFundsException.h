#ifndef _INSUFFICIENTFUNDEXCEPTION_H_
#define _INSUFFICIENTFUNDEXCEPTION_H_

class InsufficientFundsException : public std::exception
{
    public:
        InsufficientFundsException()
        {
             std::cout << std::endl << "[InsufficientFundsException] => (contructor)" << std::endl;
        }
        ~InsufficientFundsException()
        {
             std::cout << std::endl << "[InsufficientFundsException] => (destructor)" << std::endl;
        }
        virtual const char* what() const noexcept override
        {
            return "There are insufficient funds to complete this withdrawal.";
        }
};
#endif
