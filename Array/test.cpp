#include<iostream>
using namespace std;

// find Length of an array
int array_length(int arry[])
{
    int flag = 0;
    while(arry[flag] != '\0')
    {
        flag++;
    }
    return flag;
}

// Search element from array
void search_in_array(int arry[], int search_number)
{
    bool found = false;
    for(int i = 0 ; i <array_length(arry); i++ )
    {
        if(arry[i] == search_number)
        {
            found = true;
        }
    }
    if(found)
    {
        cout << search_number << " found in Array!\n";
    }
    else
    {
        cout << search_number << " Not Found!\n";
    }
}

// Traversing
void Traverse_array(int arry[])
{
    for(int i = 0; i < array_length(arry); i++)
    {
        cout << arry[i] << " ";
    }
    cout << endl;

}

int main()
{
    // Initialization
    int myArray[5] = {1, 2, 3, 4, 5};

    // Accessing Elements
    int firstElement = myArray[0];

    // Insertion (Not a direct operation, you would typically create a new array)
    int newArray[6];
    for(int i = 0; i < 2; i++)
    {
        newArray[i] = myArray[i];
    }

    newArray[2] = 10;
    for(int i = 3; i < 6; i++)
    {
        newArray[i] = myArray[i-1];
    }


    // Deletion (Not a direct operation, you would typically create a new array)
    int modifiedArray[4];
    for(int i = 0; i < 3; i++)
    {
        modifiedArray[i] = myArray[i];
    }
    for(int i = 3; i < 4; i++)
    {
        modifiedArray[i] = myArray[i+1];
    }
    Traverse_array(modifiedArray);

    // Update
    myArray[1] = 20;

    //Length
    int length;
    length = array_length(myArray);
    cout << "Length of array = " << length <<"\n";

    // Search
    search_in_array(myArray,20);

    // Traverse
    cout << "\nTraverse the Array\n";
    Traverse_array(myArray);

    // Concatenation (Not a direct operation, you would typically create a new array)
    int newArray2[8];
    for(int i = 0; i < 5; i++)
    {
        newArray2[i] = myArray[i];
    }

    for(int i = 5; i < 8; i++)
    {
        newArray2[i] = i + 1;
    }
        cout << "Concat \n";
    for(int i = 0; i <= 3 ; i++){
        cout << newArray2[i] << " ";
    }
    cout << endl;

    // Slicing (Not a direct operation, you would typically create a new array)
    int subArray[3];
    for(int i = 1; i <= 3; i++)
        subArray[i-1] = myArray[i];
    cout << "Slicing \n";
    for(int i = 0; i <= 3 ; i++){
        cout << subArray[i] << " ";
    }
    cout << endl;


}
