/* Write a Program that determines the maximum
value among a set of user-input numbers */
#include<iostream>
using namespace std;

int findMAX(int arr[], int num)
{
    int max = arr[0];
    
    for(int i = 1; i < num; i++)
	{
        if(arr[i] > max)
		{
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int num, max;
    
    cout << "How many numbers would you like to enter?" << endl;
    cin >> num;
    
    int arr[num];
    
    cout << "Enter the numbers:" << endl;
    for(int i = 0; i < num; i++)
	{
        cin >> arr[i];
    }
    
    max = findMAX(arr, num);
    
    cout << "Max= " << max;

    return 0;
}
