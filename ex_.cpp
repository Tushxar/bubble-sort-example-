
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
vector<int> arr{10,1,7,6,14,7};

int n = arr.size();
//bubble sort algorithm 

for (int round = 1 ; round<n ; round++){
    
    bool swapped = false;
    for(int j=0; j<n-round; j++){
        
        
        if(arr[j] > arr[j+1] ){
            swapped = true;
            swap(arr[j],arr[j+1]);
        }
        
    }
    if(swapped == false){
        break;
    }
}

    
    
}
