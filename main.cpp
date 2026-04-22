#include <iostream>
#include <iomanip>
using namespace std;
fileSuccess = true;

struct detail {
    string nama;
    int kategori;
    string dokter;
}pasien[100];


void writeData(string nama, int kategori){
	FILE *berkas;
	berkas = fopen("data_pasien.txt","a");
	if(berkas != NULL){
		fprintf(berkas, "%s,%s\n", nama.c_str(), kategori);
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
		char temp_nama[100];
		int temp_kategori;
		while(fscanf(berkas," %[^,],%[^,]\n", temp_nama, &temp_kategori) != EOF){
			pasien[lastIndex].nama=temp_nama;
			pasien[lastIndex].kategori=temp_kategori;
			lastIndex++;
		}
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
			readData();
			for (int i = 0; i < lastIndex; ++i){
				string kategoriWarna;
				if (pasien[i].kategori==1 || pasien[i].kategori==2 ) kategoriWarna="MERAH";
				else if (pasien[i].kategori==3) kategoriWarna="KUNING";
				else if (pasien[i].kategori==4) kategoriWarna="HIJAU";
				cout<<left<<setw(25)<<pasien[i].nama<<setw(30)<<kategoriWarna<<endl;
			}
		}
		case 4:{

		}
	}
}

