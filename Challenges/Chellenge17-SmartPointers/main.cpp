#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class Test
{
    private:
        int data;
        void debug(std::string label)
        {
            cout << label << " (" << this->data << ")" << endl;
        }
    public:
        Test(): data{0}
        {
            debug("Test contructor");
        }
        Test(int val): data{val}
        {
            debug("Test contructor");
        }
        ~Test()
        {
            debug("Test destructor");
        }
};

///////////////////////////////////////////////////////////
// Function Prototype:
///////////////////////////////////////////////////////////
unique_ptr<vector<shared_ptr<Test>>> make();
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>> &vec);

int main()
{
    //Test t1;
    //Test t2{99};

    unique_ptr<vector<shared_ptr<Test>>> vec_ptr = make();
    return 0;
}

unique_ptr<vector<shared_ptr<Test>>> make()
{
    //vector<shared_ptr<Test>> vec = make_unique<vector<shared_ptr<Test>>>();
    //return vec;
    return make_unique<vector<shared_ptr<Test>>>();
}
