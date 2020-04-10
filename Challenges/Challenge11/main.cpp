#include <iostream>
#include <vector>

using namespace std;

void    printMenuOptions    ();
char    determineSelection  ();
void    printNumbers        (vector<int> *vec);
void    printEmptyMessage();
int     sumNumbers          (vector<int> *vec);

void    onAddSelected       (vector<int> *vec);
void    onMeanSelected      (vector<int> *vec);
void    onSmallestSelected  (vector<int> *vec);
void    onLargestSelected   (vector<int> *vec);

double  determineMean       (vector<int> *vec);
int     determineSmallest   (vector<int> *vec);
int     determineLargest    (vector<int> *vec);

// NEW STUFF:
void handle_find(const vector<int> &vec);
bool find(const vector<int> &vec, int target);

int main()
{
    //vector<int> vec {1,2,3,4,5};
    vector<int> vec{};  
    
    bool done = false;
    do 
    {
        
        printMenuOptions();
        cout << endl << "Enter your choice: ";
        char choice = determineSelection();
        cout << "------------------------------" << endl;
        switch(choice)
        {
            case 'P':
                printNumbers(&vec);
                break;
            case 'A':
                onAddSelected(&vec);
                break;
            case 'M':
                onMeanSelected(&vec);
                break;            
            case 'S':
                onSmallestSelected(&vec);
                break;            
            case 'L':
                onLargestSelected(&vec);
                break;            
            case 'F':
                handle_find(vec);
                break;            
            case 'Q':
                cout << "Goodbye..." << endl;
                done = true;
                break;            
            default:
                cout << "Invalid choice" << endl;
                break;
        }
        cout << "------------------------------" << endl;        
    }
    while (done == false);
     
    return 0;
}

void printMenuOptions()
{
    cout << endl;
    cout << "P - Print numbers"                 << endl;
    cout << "A - Add a number"                  << endl;
    cout << "M - Display mean of the numbers"   << endl;
    cout << "S - Display the smallest number"   << endl;
    cout << "L - Display the largest number"    << endl;
    cout << "F - Find a number"                 << endl;
    cout << "Q - Quit"                          << endl;
}

char determineSelection()
{
    char choice {0};
    cin >> choice;
    return toupper(choice);
}

void printNumbers(vector<int> *vec)
{
    if (vec->empty())
    {
        printEmptyMessage();
    }
    else
    {
        cout << "[ ";
        int count{0};
        for (int nbr : *vec)
        {   
            if (count > 0) { cout << " "; }
            cout << nbr;
            count++;
        }            
        cout << " ]" << endl;
    }
 }

void printEmptyMessage()
{
    cout << "[] - this list is empty" << endl;
}
void onAddSelected(vector<int> *vec)
{
    int userInput{0};
    cout << "Enter an integer to add to the list: ";
    cin >> userInput;
    vec->push_back(userInput);
    cout << userInput << " has been added." << endl;
}


int sumNumbers(vector<int> *vec)
{
    int sum{0};
    for ( int nbr : *vec)
    {
        sum += nbr;
    }
    return sum;
}

void onMeanSelected(vector<int> *vec)
{
    if (vec->empty())
    {
        printEmptyMessage();
    }
    else
    {
        cout << "The mean is: " << determineMean(vec) << endl;
    }    
}

void onSmallestSelected(vector<int> *vec)
{
    if (vec->empty())
    {
        printEmptyMessage();
    }
    else
    {
        cout << "The mean is: " << determineSmallest(vec) << endl;
    }    
}

void onLargestSelected(vector<int> *vec)
{
    if (vec->empty())
    {
        printEmptyMessage();
    }
    else
    {
        cout << "The mean is: " << determineLargest(vec) << endl;
    }    
}


double determineMean(vector<int> *vec)
{
    return static_cast<double>(sumNumbers(vec)) / vec->size();
}

int determineSmallest(vector<int> *vec)
{
    int smallest = vec->at(0);
    for (int ii{1}; ii < vec->size(); ii++)
    {
        if (vec->at(ii) < smallest)
        {
            smallest = vec->at(ii);
        }
    }
    return smallest;
}

int determineLargest(vector<int> *vec)
{
    int largest = vec->at(0);
    for (int ii{1}; ii < vec->size(); ii++)
    {
        if (vec->at(ii) > largest)
        {
            largest = vec->at(ii);
        }
    }
    return largest;
}

void handle_find(const vector<int> &vec)
{
    int target{};
    cout << "Enter the number to find: ";
    cin >> target;
    if ( find(vec, target))
    {
        cout << "Number was found!" << endl;
    }
    else
    {
        cout << "Number was not found." << endl;
    }
 }

bool find(const vector<int> &vec, int target)
{
    for (auto nbr : vec)
    {
        if (nbr == target)
        {
            return true;
        }
    }
    return false;
}

