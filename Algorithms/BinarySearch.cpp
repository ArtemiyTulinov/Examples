#include <stdlib.h>
#include <vector>
#include <iostream>

bool binarySearch( std::vector< int > vector, int k )
{
    int leftInd = 0;
    int rightInd = vector.size() - 1;

    while ( leftInd <= rightInd )
    {
        int middle = leftInd + ( rightInd - leftInd ) / 2;
        if ( k < vector[ middle ] )
        {
            rightInd = middle - 1;
        }
        else if ( k > vector[ middle ] )
        {
            leftInd = middle + 1;
        }
        if ( vector[ middle ] == k )
        {
            return true;
        }

    }
    return false;
}


int main()
{
    std::vector< int > vec = { 1, 2 , 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 19};
    std::cout << binarySearch(vec, 17);
    return 0;
}
