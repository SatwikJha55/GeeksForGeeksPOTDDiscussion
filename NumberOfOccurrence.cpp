#include <bits/stdc++.h>

using namespace std;

int numberOfBeautifulIntegers(int low, int high, int k);

int main(){
    int low, high, k;
    cin >> low >> high >> k;

    cout << numberOfBeautifulIntegers(low, high, k) << endl;


    return 0;
}

int numberOfBeautifulIntegers(int low, int high, int k){
    int beautifulCount = 0;
    
    if(low % k != 0)
        low = (low / k + 1) * k;

    for (int num = low; num <= high; num += k) {
            int evenDigits = 0, oddDigits = 0;
            int tempNum = num;
            
            while (tempNum > 0) {
                int digit = tempNum % 10;
                
                if (digit % 2 == 0)
                    evenDigits++;
                else 
                    oddDigits++;

                tempNum /= 10;
            }
            
            if (evenDigits == oddDigits) {
                beautifulCount++;
            }
    }
        
        return beautifulCount;
}
