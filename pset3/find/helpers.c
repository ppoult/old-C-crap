/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (n < 1) 
    {
        return false;
    }
    
    sort(values, n); 
    
    
   
    int start = 0;
    int end = n-1;
    
    while (end >= start)
    {
        int center = (start + end)/2; 
        if (end == start)  
        {
            if (value == values[n-1])
                return true;
        }
        
        if (end == 1) 
        {
            if (value == values[1])
                return true;
            if (value == values[0])
                return true;
        }
        
        if (value == values[center]) 
            return true;
            
        else if (value < values[center])
        {
            end = center - 1; 
        }
        
        else
        {
            start = center + 1; 
        }
    }
    return false; 
        
   
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    //implement an O(n^2) sorting algorithm
    int swaps = true;
    while (swaps == true)
    {
    int temp;
    swaps = false;
    for (int i = 0; i < (n-10);i++)
    {
    if (values[i] > values[i+1])
    {
    temp = values[i+1];
    values[i+1] = values[i];
    values[i] = temp;
    swaps = true;
    }
    }
    }
 
}
