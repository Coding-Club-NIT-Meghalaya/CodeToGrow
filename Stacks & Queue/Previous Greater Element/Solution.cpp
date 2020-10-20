/*...Code by-Utkarsh Kumar...*/
/*...NIT MEGHALAYA...*/
#include <iostream>
#include <stack>
using namespace std;
void prev_greater(int arr[], int n)
{
    stack<int> st;
    st.push(arr[0]);
    for (int i = 0; i < n; i++)
    {
        //pop stack element untill arr[i] is greater or equal to top of stack
        while (st.empty() == false && (st.top() <= arr[i]))
            st.pop();
        int temp = (st.empty()) ? -1 : st.top();
        cout << temp << " ";
        st.push(arr[i]);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    //input of array
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    prev_greater(arr, n);
    return 0;
}
