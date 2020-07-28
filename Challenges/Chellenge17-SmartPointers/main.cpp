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
        int get_data()
        {
            return this->data;
        }
};

///////////////////////////////////////////////////////////
// Function Prototype:
///////////////////////////////////////////////////////////
unique_ptr<vector<shared_ptr<Test>>> make();
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>> &vec);

///////////////////////////////////////////////////////////
// Function main()
///////////////////////////////////////////////////////////
int main()
{
    //Test t1;
    //Test t2{99};

    unique_ptr<vector<shared_ptr<Test>>> vec_ptr = make();
    cout << "How many data points do you want to enter: ";
    int num;
    cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);

    return 0;

}

///////////////////////////////////////////////////////////
// Function Implementations:
///////////////////////////////////////////////////////////
unique_ptr<vector<shared_ptr<Test>>> make()
{
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &vec, int num)
{
    int temp;
    for (int ii = 0; ii < num; ii++)
    {
        cout << "Enter data point for [" << (ii + 1) << "]: ";
        cin >> temp;
        vec.push_back( make_shared<Test>(temp) );
    }
}

void display(const vector<shared_ptr<Test>> &vec)
{
    cout << "\nYou entered the following values:" << endl;
    cout << "===================================" << endl;
    for ( const shared_ptr<Test> test : vec)
    {
        cout << test->get_data() << endl;
    }
}
