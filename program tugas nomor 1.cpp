#include <iostream>
using namespace std;

int main() {
    cout << "Masukkan jumlah angka: ";
    int n; 
    cin >> n; // input jumlah elemen array

    int arr[n]; // buat aray dengan panjang n

    cout <<"Masukkan " << n << " angka: ";
    for (int i = 0;i<n;i++){
        cin>>arr[i]; // input angka satu per satu

}
    cout<< "Urutan Terbalik: ";
    for (int i = n-1 ;i>=0; i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}