// Problem Statement



// Emma has a collection of unique plant species in her garden. She wants to check if a particular plant is already in her collection. 



// Help Emma by writing a program using a linear search algorithm that determines if the plant species is in her collection.

// Input format :
// The first line of input consists of an integer n, representing the number of plant species.

// The second line consists of n space-separated integers, representing the plant species IDs in Emma's collection.

// The third line consists of an integer representing the target plant species ID.

// Output format :
// The output prints whether the target plant species ID is present in the collection or not.



// Refer to the sample output for the exact format.

// Code constraints :
// 1 ≤ n ≤ 25

// 1 ≤ species ID, target ≤ 100



#include <iostream>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int species[25];
        
        for (int i=0; i<n; ++i)
        {
            cin>>species[i];
        }
        
        int target;
        cin>>target;
        bool found=false;
        for(int i=0; i<n; ++i)
        {
            if(species[i] == target)
            {
                found=true;
                break;
            }
        }
        
        if(found)
        {
            cout<<"Plant species "<<target<<" is present in the collection"<<endl;
        }
        else
        {
            cout<<"Plant species "<<target<<" is not present in the collection"<<endl;
        }
        
        return 0;
        
    
}