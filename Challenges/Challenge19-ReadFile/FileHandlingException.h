#ifndef _FILE_HANDLING_EXCEPTION_H_
#define _FILE_HANDLING_EXCEPTION_H_

class FileHandlingException
{
    private:
        std::string message;
    public:
        FileHandlingException(string msg) : message(msg) {}
        ~FileHandlingException() = default;
        string get_message()
        {
            return this->message;
        }
};
#endif
