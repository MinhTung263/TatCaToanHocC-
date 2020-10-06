#include <iostream>
#include <cmath>
using namespace std;
bool isNguyenTo(int n){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			dem++;
		}
	}
	if(dem==2){
		return 1;
	}else{
		return 0;
	}
}
bool isHH(int n){
	int dem=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			dem+=i;
		}
	}
	if(dem==n){
		return 1;
	}else{
		return 0;
	}
}
bool isCP(int n){
	int i=1;
	i=sqrt(n);
	if(i*i==n){
		return 1;
	}else{
		return 0;
	}
}
int GiaiThua(int n){
	int giaithua=1;
	for(int i=1;i<=n;i++){
		giaithua*=i;
	}
	return giaithua;
}
bool isChanLe(int n){
	for(int i=1;i<=n;i++){
		if(n%2==0){
			return 1;	
		}else{
			return 0;
		}
	}
}
bool isChiaHetCho3(int n){
	for(int i=1;i<=n;i++){
		if(n%3==0){
			return 1;	
		}else{
			return 0;
		}
	}
}
int main(){
	int n;
	cout<<"Nhap n=";
	cin>>n;
//	if(isNguyenTo(n)==1){
//		cout<<"\n"<<n<<" la so nguyen to";
//	}else{
//		cout<<"\n"<<n<<" khong la so nguyen to";
//	}
//	
//	if(isHH(n)==1){
//		cout<<"\n"<<n<<" la so hh";
//	}else{
//		cout<<"\n"<<n<<" khong la so hh";
//	}
cout<<"\nCac so nguyen to nho hon n la: ";
	for(int i=1;i<n;i++){
		 if(isNguyenTo(i)==1){
			cout<<i<<" ";
		}
	}
cout<<"\nCac so hoan hao nho hon n la: ";
	for(int i=1;i<n;i++){
		 if(isHH(i)==1){
			cout<<i<<" ";
		}
	}
cout<<"\nCac so chinh phuong nho hon n la: ";
	for(int i=2;i<n;i++){
		 if(isCP(i)==1){
			cout<<i<<" ";
		}
	}

cout<<"\nCac so le nho hon n la: ";
	for(int i=0;i<=n;i++){
		 if(isChanLe(i)==0){
			cout<<i<<" ";
		}
	}

cout<<"\nCac so chan nho hon n la: ";
	for(int i=1;i<n;i++){
		 if(isChanLe(i)==1){
			cout<<i<<" ";
		}
	}
	
cout<<"\nCac so chia het cho 3 nho hon n la: ";
	for(int i=1;i<n;i++){
		 if(isChiaHetCho3(i)==1){
			cout<<i<<" ";
		}
	}
cout<<"\nCac so khong chia het cho 3 nho hon n la: ";
	for(int i=1;i<n;i++){
		 if(isChiaHetCho3(i)==0){
			cout<<i<<" ";
		}
	}
cout<<"\nGiai thua cua n la:"<<GiaiThua(n);
}
	
