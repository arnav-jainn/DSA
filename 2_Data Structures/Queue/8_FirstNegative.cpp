// First -ve int in every window of K  (Sliding window)

#include <iostream>
#include <stack>
#include <deque>

using namespace std;

void FirstNegative(int *arr, int n, int k)
{

    deque<int> dq;

    // process first K elements-first window

    for (int index = 0; index < k; index++)
    {
        int element = arr[index];
        if (element < 0)
        {
            dq.push_back(index);
        }
    }

    // process remaining window  -> removal and addition

    for (int index = k; index < n; index++)
    {
        // old window ans

        if (dq.empty())
        {
            cout << "0";
        }
        else
        {
            cout << arr[dq.front()] <<" ";
        }
        // Removal - out of range index ko queue m s remove krdo
        if (index - dq.front() >= k)
        {
            dq.pop_front();
        }
        // Addition
        if (arr[index] < 0)
        {
            dq.push_back(index);
        }
    }

    // last window k ans
    if (dq.empty())
    {
        cout << "0";
    }
    else
    {
        cout << arr[dq.front()] <<" ";
    }
}

int main()
{
    // queue<int> q;
    // q.push(2);
    // q.push(-5);
    // q.push(4);
    // q.push(-1);
    // q.push(-2);
    // q.push(0);
    // q.push(5);

    int arr[]={2,-5,4,-1,-2,0,5};

    FirstNegative(arr,7,3);


    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
}