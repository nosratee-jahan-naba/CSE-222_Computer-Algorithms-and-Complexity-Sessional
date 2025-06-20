#include<bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) 
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min]) 
                min = j;
            
        }

        if (min != i) 
            swap(a[i], a[min]);
        
    }
}

int main() 
{
    Naba;
    
    int n;  cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    

    selectionSort(a, n);

    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";


    return 0;
}
