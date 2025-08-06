///Quick sort///
#include<iostream>
using namespace std;

int partition(int arr[],int low,int high){
	int pivot=arr[high];
	int i=low-1;
	for(int j=low;j<=high-1;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return i+1;
}
void quicksort(int arr[],int low,int high){
	if(low<high){
		int pi=partition(arr,low,high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
}
int main(){
	int arr[]={10,5,2,8,6};
	int n=5;
	quicksort(arr,0,n-1);
	cout<<"sorted array: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

///Merge sort///
#include<iostream>
using namespace std;

const int maxsize = 1000;
void merge(int arr[], int left, int mid, int right){
    int n1=mid-left+1;
    int n2=right-mid;
    int L[maxsize], R[maxsize];
    for (int i=0;i<n1;i++)
        L[i]=arr[left + i];
    for (int j=0;j<n2;j++)
        R[j]=arr[mid+1+j];
    int i=0,j=0,k=left;
    while (i<n1 && j<n2){
        if (L[i]<=R[j]) {
            arr[k++]=L[i++];
        } else {
            arr[k++]=R[j++];
        }
    }
    while (i<n1)
        arr[k++]=L[i++];
     while (j<n2)
        arr[k++]=R[j++];
}
void mergeSort(int arr[], int left, int right) {
    if (left>=right)
        return;

    int mid=left+(right-left)/2;

    mergeSort(arr, left,mid);
    mergeSort(arr, mid+1,right);
    merge(arr, left, mid, right);
}

int main() {
    int arr[] = {10,8,15,20,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, n-1);
    cout << "sorted array: ";
    for (int i=0;i<n;i++)
        cout <<arr[i] << " ";
    cout << endl;
     
    return 0;
}

//Remove duplicate elements from array//
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,4,5,3,1,2};
    int n=7,i,j,k;
    int c=0; 
    
    for(i=0;i<n-c;i++)
    {
        for(j=i+1;j<n-c;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n-c-1;k++)
                {
                    arr[k]=arr[k+1];
                }
                c++;
                j--;
            }
        }
    }
    cout<<"After removing duplicates:"<<endl;
    for (i=0;i<n-c;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}