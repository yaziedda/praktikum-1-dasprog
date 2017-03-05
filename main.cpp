#include <stdio.h>

using namespace std;

void task1(){
    char *nama, *nim, *kelas, *program_studi, *tgl_lahir;

    nama = "Yazied Dhiya Uddien";
    nim = "16416255201187";
    kelas = "IF 16 C";
    program_studi = "Teknik Informatika";
    tgl_lahir = "7 Februari 1997";

    printf("\n");
    printf("Nama : %s", nama); printf("\n");
    printf("NIM : %s", nim); printf("\n");
    printf("Kelas : %s", kelas); printf("\n");




    printf("Program Studi : %s", program_studi); printf("\n");
    printf("Tanggal lahir : %s", tgl_lahir); printf("\n");
}

void task2(){
    char nama[100], nim[100], kelas[100], program_studi[100], tgl_lahir[100];
    printf("\n");
    printf("Isi Biodata anda : \n");
    printf("Nama : "); scanf("%s", &nama);
    printf("NIM : "); scanf("%s", &nim);
    printf("Kelas : "); scanf("%s", &kelas);
    printf("Program Studi : "); scanf("%s", &program_studi);
    printf("Tanggal Lahir : "); scanf("%s", &tgl_lahir);

    printf("\n");
    printf("Biodata anda : \n");
    printf("Nama : %s", nama); printf("\n");
    printf("NIM : %s", nim); printf("\n");
    printf("Kelas : %s", kelas); printf("\n");
    printf("Program Studi : %s", program_studi); printf("\n");
    printf("Tanggal Lahir : %s", tgl_lahir); printf("\n");
}

void task3(){
    char nama[100];
    int bb, tb;
    printf("\n");
    printf("Mengisi Data Berat Badan : \n");
    printf("Nama : "); scanf("%s", &nama);
    printf("Isi Berat Badan : "); scanf("%d", &bb);
    printf("Isi Tinggi Badan : "); scanf("%d", &tb);

    printf("\n");
    printf("Data Berat Badan : \n");
    printf("Nama : "); printf("%s", &nama); printf("\n");
    printf("Isi Berat Badan : %d", bb); printf(" kg\n");
    printf("Isi Tinggi Badan : %d", tb); printf(" cm\n");
}

void task4(){
    char nama[100];
    printf("\n");
    printf("Menampilkan pesan 'Selamat Belajar' \n");
    printf("Masukan Nama : "); scanf("%s", &nama);

    printf("\n");
    printf("Selamat Belajar "); printf("%s", &nama); printf("\n");

}

void pilih(int select){
    printf("Pilih nomor task yang mau di uji : "); scanf("%d", &select); printf("\n");

    switch(select){
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    case 3:
        task3();
        break;
    case 4:
        task4();
        break;
    default:
        printf("Pilihan tidak ada, pilihlah satu antara 1 - 4\n");
        pilih(select);
        break;
    }
}


int main()
{

    int select;

    printf("TUGAS MODUL PRAKTIKUM PERTEMUAN 1 \n");
    printf("1. Menampilkan biodata pribadi.\n");
    printf("2. Mengisi data pribadi.\n");
    printf("3. Mengisi data tinggi badan dan berat badan mahasiswa. \n");
    printf("4. Menampilkan pesan “Selamat Belajar” kepada nama mahasiswa \n");
    printf("\n");
    pilih(select);

    return 0;
}


