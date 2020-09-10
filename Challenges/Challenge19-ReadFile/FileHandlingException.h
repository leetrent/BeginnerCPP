#ifndef _FILE_HANDLING_EXCEPTION_H_
#define _FILE_HANDLING_EXCEPTION_H_

#include <string>

class FileHandlingException
{
    private:
        std::string message;
    public:
        FileHandlingException(std::string msg) : message(msg) {}
        ~FileHandlingException() = default;
        std::string get_message()
        {
            return this->message;
        }
};
#endif
