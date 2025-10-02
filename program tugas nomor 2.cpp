#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukkan jumlah kode ASCII: ";
    cin >> n;

    int arr[100]; // batasan sederhana 

    cout << "Masukkan "<<n<<" kode ASCII: ";
    for (int i = 0;i<n;i++){
        cin >> arr[i]; // simpan input ke array
    }

    //tampilkan kata asli 
    cout<<"kata asli: ";
    for (int i=0;i<n;i++){
        cout<<char(arr[i]);
    }
    //tampilkan kata hasil reverse (manual, bukan fungsi bawaan)
    cout<<"Kata terbalik: ";
    for (int i=n-1;i>=0;i--){
        cout<<char(arr[i]);
    }
    cout<<endl;
        return 0;
}
