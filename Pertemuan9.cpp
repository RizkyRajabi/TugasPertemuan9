#include <iostream>
#include <vector>
using namespace std;


int main (){
    vector<string> nama, npm,tanggalLahir;
    string n, np, tl;
    int pil, h;
    char t;
    bool tes;
    do{
        cout<< "=====Menu Data Mahasiswa=====\n";
        cout<< "1. Input Data Mahasiswa\n";
        cout<< "2. Lihat Data mahasiswa\n";
        cout<< "3. Hapus Data Mahasiswwa\n";
        cout<< "4. Exit\n";
        cout<< "Masukkan Nomor Pilihan(1-4): ";cin>>pil;
        system("cls");

        switch(pil){
        case 1:
            cin.ignore();
            cout<<"Masukkan Nama Mahasiwa: "; getline(cin, n);
            nama.push_back(n);
            cout<<"Masukkan NPM Mahasiwa: ";cin>>np;
            cin.ignore();
            npm.push_back(np);
            cout<<"Masukkan Tanggal Lahir: "; getline(cin, tl);
            tanggalLahir.push_back(tl);
            cout<<"\nData Telah Ditambahkan\n";
            cout<<"Kembali ke menu utama?(y/n): ";cin>>t;
            cin.ignore();
            if(t == 'y'|| t== 'Y'){
               tes = true;
               }else if(t == 'n' || t == 'N'){
                tes = false;
               }
            system("cls");
            break;

        case 2:
            for (int i= 0; i<nama.size(); i++ ){
                cout<<"Data Mahasiwa ke-"<<i+1<<endl;
                cout<<"Nama           : "<<nama[i]<<endl;
                cout<<"NPM            : "<<npm[i]<<endl;
                cout<<"Tanggal lahir  : "<<tanggalLahir[i]<<endl;
                cout<<endl;
            }
            cout<<"Kembali ke menu utama?(y/n): ";cin>>t;
            if(t == 'y'|| t== 'Y'){
               tes = true;
               }else if(t == 'n' || t == 'N'){
                tes = false;
               }
               system("cls");
               break;

        case 3:
            for (int i= 0; i<nama.size(); i++ ){
                cout<<"Data Mahasiwa ke-"<<i+1<<endl;
                cout<<"Nama           : "<<nama[i]<<endl;
                cout<<"NPM            : "<<npm[i]<<endl;
                cout<<"Tanggal lahir  : "<<tanggalLahir[i]<<endl;
                cout<<endl;
            }
    cout<<"Data Mahasiswa ke berapa yang ingin dihapus?(masukkan angka): "; cin>>h;

    nama.erase(nama.begin()+h-1);
    npm.erase(npm.begin()+h-1);
    tanggalLahir.erase(tanggalLahir.begin()+h-1);

    cout<<"\nData Mahasiswa ke-"<<h<<" Telah Dihapus"<<endl;
    cout<<"\nKembali ke menu utama?(y/n): "; cin>>t;

    if(t == 'y'|| t== 'Y'){
               tes = true;
               }else if(t == 'n' || t == 'N'){
                tes = false;
               }
               system("cls");
               break;

        case 4:
            tes= false;
            break;
        default:
            cout<<"\nPilihan Tidak Tersedia, Kembali Ke Menu Utama?(y/n): ";cin>>t;
            if(t == 'y'|| t== 'Y'){
               tes = true;
               }else if(t == 'n' || t == 'N'){
                tes = false;
               }
               system("cls");
               break;

            }


        }while(tes == true);
        cout<<"Program Selesai"<<endl;


}











