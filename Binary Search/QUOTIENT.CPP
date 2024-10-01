//This is division using binary search 
#include <iostream>
using namespace std;

int findQuotient(int divisor, int dividend)
{
    int start = 0;
    int ans = -1;
    int end = dividend;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (divisor * mid == dividend)
        {
            return mid;
        }
        // else if(divisor*mid > dividend){

        //     end = mid -1; // isko else case m dal rha hu

        // }
        else if (divisor * mid < dividend)
        {
            ans = mid;       // answer store karna cause yeh current iteration m bhi answer aa skta h and aage wala bhi nearest answer ho skta h
            start = mid + 1; // right m jaao
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int divisor = 1;
    int dividend = 35;

    // abs wala inbuilt function use karke -ve wala case handle kro

    int ans = findQuotient(abs(divisor), abs(dividend));

    if ((divisor < 0 && dividend > 0) || (divisor > 0 && dividend < 0))
    {
        cout << "The final answer is :" << 0 - ans << endl;
    }
    // handling 0
    else if(dividend == 0)
        {
            ans = 0;
            cout << "The final answer is :" << ans << endl;
        }

    else if(divisor==0){
        cout<<"The final answer is: infinity"<<endl;
    }
    else
    {
        cout << "The final answer is :" << ans << endl;
    }

    return 0;
}