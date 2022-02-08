/*
    Counting the number of set bits using look up table method.

    For this method we need to divide the 32 / 64 bit number into chunks of 8 bits.

    Therefore we are working with numbers from 0 to 255 (8 bit). Then we check each 
    of these 8 bit chunks.

    We need to do some pre processing before we write the main code.

    We are doing the preprocessing so that all the function calls can happen in Θ(1) 
    times.

    In the preprocessing we make a table of size 256 in such a way that the table i 
    represents the number of set bits in the actual 'number' i. (table[0] = 0, 
    table[1] = 1, table[2] = 1, table[3] = 2, etc)

    This table would take care of numbers from 0 to 255; numbers greater than 
    that would be handled  the main code with the help of this table.

    In the main code we split the number into the required 8 bit chunks.

    0xff = 15*16 + 15

    Time complexity : Θ(1) [Under the assumption that we have already done the preprocessing] 

*/

#include <iostream>
using namespace std;

void starter(int[]);
int count(int[], int);

int main(void){

    int table[256];
    starter(table);
    cout << count(table, 40);
    
   return 0;
}

void starter(int arr[])
{
    arr[0] = 0;

    for (int i = 0; i < 256; ++i)
    {
        arr[i] = (i & 1) + arr[i/2];
        // (i & 1) would give the last bit value 
        // arr[i/2] would give the previous bit value.
    }
}

int count(int arr[], int num)
{
    int result = 0;

    for (int  i = 0; i < 4; i++)
    {
        result += arr[num & 0xff];
        num >>= 8;
    }
    // we are doing this 4 times because we are taking the int to be of size 32bits.
return result;
}