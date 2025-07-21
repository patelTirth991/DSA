///Remove duplicate elements in array///
#include<iostream>
using namespace std;

int main(){
	int a[]={1,2,3,2,4,1,5};
	int n=7,i,j,k;
	int count=0;
	
	for(i=0;i<n-count;i++){
		for(j=i+1;j<n-count;j++){
			if(a[i]==a[j]){
				for(k=j;k<n-count-1;k++){
					a[k]=a[k+1];
				}
				count++;
				j--;
			}
		}
	}
	for(i=0;i<n-count;i++){
		cout<<a[i]<<"  ";
	}
	return 0;
}
///largest element in array///
#include<iostream>
using namespace std;

int main(){
	int a[]={10,2,5,15,8};
	int i,max,n=5;
	max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<max<<"  ";
	return 0;
}

///sort ascending and descending///
#include<iostream>
using namespace std;

int main(){
	int a[]={10,5,8,2,15};
	int n=5,i,j;
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	cout<<"Ascending : ";
	for(i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
	cout<<endl;
	cout<<"Descending : ";
	for(i=n-1;i>=0;i--){
		cout<<a[i]<<"  ";
	}
	return 0;
}

///count +ve and -ve///
#include<iostream>
using namespace std;

int main(){
	int a[]={10,-5,8,2,-15};
	int i,j,P=0,N=0,n=5;
	
	for(i=0;i<n;i++){
		if(a[i]>0){
			P++;
		}
		else{
			N++;
		}
	}
	cout<<"Positive : ";
	cout<<P<<endl;
	cout<<"Negative : ";
	cout<<N<<endl;
	return 0;
}

///Even Odd Sort///
#include<iostream>
using namespace std;

int main(){
	int a[]={10,5,2,8,3,1};
	int i,j,n=6,odd=0,even=0,os,es;
	int o[100],e[100];
	
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			e[even]=a[i];
			even++;
		}
		else{
			o[odd]=a[i];
			odd++;
		}
	}
	
	for(i=0;i<even-1;i++){
		for(j=0;j<even-i-1;j++){
			if(e[j]>e[j+1]){
				swap(e[j],e[j+1]);
			}
		}
	}
	for(i=0;i<even;i++){
		cout<<e[i]<<"  ";
	}
	for(i=0;i<odd-1;i++){
		for(j=0;j<odd-i-1;j++){
			if(o[j]<o[j+1]){
				swap(o[j],o[j+1]);
			}
		}
	}
	for(i=0;i<odd;i++){
		cout<<o[i]<<"  ";
	}
	return 0;
}