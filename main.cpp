#include <iostream>
#include <iomanip>
using namespace std;
fileSuccess = true;

struct detail {
    string nama;
    int kategori;
    string dokter;

};


void writeData(string artName, string artistName, int price){
	FILE *berkas;
	berkas = fopen("data_pasien.txt","a");
	if(berkas != NULL){
		fprintf(berkas, "%s\t%s\t%d\n", artName.c_str(), artistName.c_str(), price);
		fclose(berkas);
		fileSuccess = true;
	}else{
		cout<<"error!\n";
	}
}
void readData(){
	FILE *berkas;
	berkas = fopen("data_pasien.txt","r");
	if(berkas == NULL){
		fileSuccess = false;
	}else{
		fileSuccess = true;
		int lastIndex=0;
		char temp_artName[100], temp_artistName[100];
		int temp_price;
		while(fscanf(berkas," %[^\t]\t%[^\t]\t%d\n", temp_artName, temp_artistName, &temp_price) != EOF){

		}
	}
}

void tambahPasien(){
    string nama;
    int kategori;
    cout << "========== REGISTRASI PASIEN ==========\n\n";
    cout << "Nama Pasien : "; cin.getline(nama);
    cout << "Kategori Triase: \n";
    cout << "[1] Resusitasi\n"; 
    cout << "[2] Emergency\n"; 
    cout << "[3] Urgent\n";
    cout << "[4] Non-Urgent\n";
    cout << "[5] False Emergency\n";
    cout << "Pilihan Kategori : "; cin >> kategori;

    if(kategori == 1){
        cout << "Pasien"
    }
}

int main(){
	int n;
do{
    cout<<"=====================================================\n          SISTEM MANAJEMEN TRIASE IGD v1.0          \n=====================================================\n\n";
	cout<<"-----------------------------------------------------\nMENU UTAMA:\n1. Registrasi Pasien Baru\n2. Panggil Pasien (Proses Penanganan)\n3. Lihat Detail Antrean\n4. Cari Data Pasien\n5. Keluar Program\n-----------------------------------------------------\nPilih menu [1-5]: ";
	cin>>n; cin.ignore();
}while (n!=5);
	switch(n){
		case 1:{

		}
		case 2:{

		}
		case 3:{

		}
		case 4:{

		}
	}
}

