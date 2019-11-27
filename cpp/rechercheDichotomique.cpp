// C++ implementation below
#include <iostream>
#include <sys/resource.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> 
#include <sys/types.h>
#include <algorithm>
#include <vector>

using namespace std;

class Answer
{
public:
    static bool exists(int ints[], int size, int k)
    {
        return dico(ints, k, 0 , size);
    }
    
    static bool dico (int ints []  , int val  , int i , int j ){
        
        if(i>=j && ints[i] !=val)
            return false ; 
        
        int mid = (i+j)/2 ; 
        
        if(ints[mid]== val)
            return true; 
            
        if(ints[mid]> val)
            return dico(ints , val, i , mid-1 );
        else 
            if(ints[mid]< val )
                return dico(ints , val, mid+1 , j );
                
                
        return false ; 
        
    }
};
