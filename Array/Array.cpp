#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Initialization
    int myArray[5] = {1, 2, 3, 5, 4};

    // Accessing Elements
    int firstElement = myArray[0];

    // Insertion (Not a direct operation, you would typically create a new array)
    int newArray[6];
    for(int i = 0; i < 2; i++)
        newArray[i] = myArray[i];
    newArray[2] = 10;
    for(int i = 3; i < 6; i++)
        newArray[i] = myArray[i-1];

    // Deletion (Not a direct operation, you would typically create a new array)
    int modifiedArray[4];
    for(int i = 0; i < 3; i++)
        modifiedArray[i] = myArray[i];
    for(int i = 3; i < 4; i++)
        modifiedArray[i] = myArray[i+1];

    // Update
    myArray[1] = 20;

    // Search
    bool found = false;
    for(int i = 0; i < 5; i++)
    {
        if(myArray[i] == 5)
        {
            found = true;
            break;
        }
    }
    if(found)
    {
        cout << "5 is in the array\n" << endl;
    }
    else
    {
        cout << "5 is not in the array\n";
    }


    // Traverse
    for(int i = 0; i < 5; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Length
    int length = sizeof(myArray) / sizeof(myArray[0]);
    cout << "Length of the array: " << length << endl;

    // Concatenation (Not a direct operation, you would typically create a new array)
    int newArray2[8];
    for(int i = 0; i < 5; i++)
        newArray2[i] = myArray[i];
    for(int i = 5; i < 8; i++)
        newArray2[i] = i + 1;

    // Traverse
    cout << "After concatanation = ";
    for(int i = 0; i < 8; i++)
    {
        cout << newArray2[i] << " ";
    }
    cout << endl;

    // Slicing (Not a direct operation, you would typically create a new array)
    int subArray[3];
    for(int i = 1; i <= 3; i++)
        subArray[i-1] = myArray[i];

    // Traverse
    cout << "After Slicing = ";
    for(int i = 0; i < sizeof(subArray) / sizeof(subArray[0])  ; i++)
    {
        cout << newArray2[i] << " ";
    }
    cout << endl;

    // Sorting (You might use an algorithm like quicksort or std::sort in practice)
    sort(myArray, myArray + length);
    // Traverse
    cout << "After Sorting = ";
    for(int i = 0; i < length; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Reversing (You might use a loop or std::reverse in practice)
    reverse(myArray, myArray + length);
        // Traverse
    cout << "After Reverse = ";
    for(int i = 0; i < length; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Maximum and Minimum
    int maxElement = *max_element(myArray, myArray + length);
    int minElement = *min_element(myArray, myArray + length);
    cout << "Max Number  = " << maxElement << "\nMin Element = "<< minElement;

    return 0;
}

