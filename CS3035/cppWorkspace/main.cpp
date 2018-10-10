
#include <iostream>
#include <math.h>

using namespace std;
static long largestPrimeFactor(long n)
{
    //set a starter for the largestPrimeFactor
    unsigned long largestPrimeFactor = -1;
    
    //make the number odd
    while (n % 2 == 0) {
        largestPrimeFactor = 2;
        
        n /= 2;
    }
    
    //loop through the odd numbers up to the sqrt n
    for (int i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0) {
            
            //set the largest prime factor
            largestPrimeFactor = i;
            
            //divide n by the current i value
            n = n / i; 
        } 
    } 
  
    //if n is greater than, set the largestPrimeFactor to n
    if (n > 2) 
        largestPrimeFactor = n; 
  
    //return the value
    return largestPrimeFactor; 
}

int main()
{
    unsigned long number = 600851475143;
    
    unsigned long result = largestPrimeFactor(number);
    
    cout << result;
    
    return 0;
}
