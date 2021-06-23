//Implementasi Circular Queue di C menggunakan Array !


#include<stdio.h>          //digunakan untuk INPUT - OUTPUT. Singkatan STDIO adalah Standard Input Output
#include<conio.h>           //adalah merupakan file header yang berfungsi untuk menampilkan hasil antarmuka kepada pengguna

#define max 5         //symbolic constant

int f=-1,r=-1;       // global variable
int Q[max];

void tambah();
int hapus();
void cetak();

main()
{
    int w;
    printf("\n\t\t======= UNIVERSITAS PELITA BANGSA =======");
	printf("\n\t\t=========================================");
	printf("\n\t\t||      NAMA           |       NIM     ||");
	printf("\n\t\t||=====================================||");
	printf("\n\t\t|| Taufiq Alif Rahman  |    312010289  ||");
	printf("\n\t\t|| Anshar Rahmawan     |    312010309  ||");
	printf("\n\t\t|| Febri Aditiya       |    312010212  ||");
	printf("\n\t\t|| Reka Hani Latifah N |    312010343  ||");
	printf("\n\t\t|| Wulan Agustin       |    312010301  ||");
	printf("\n\t\t=========== TUGAS KELOMPOK 7 ============");
	printf("\n\t\t\t     KELAS TI.20.A2");
	printf("\n\n");
    do
    {
        printf("\n========== Menu ==========");
        printf("\n||1. Tambah             ||");
        printf("\n||2. Hapus              ||");
        printf("\n||3. Cetak              ||");
        printf("\n||4. Keluar             ||");
        printf("\n==========================");
        printf("\nMasuan Pilihan :");
        scanf("%d",&w);

        switch(w)
        {
        case 1:
            tambah();
            break;
        case 2:
            hapus();
            break;
        case 3:
            cetak();
            break;
        case 4:
            printf("\nProgram keluar!!\n");
        }
    }while(w != 4);
    return 0;
}

void tambah()
{
    int no;
    if((f ==0 && r == max-1) || f == r+1)
    {
        printf("\nCircular Queue sudah penuh !\n");
        return;
    }
    printf("\nMasukkan nomor :");
    scanf("%d",&no);
    if(f== -1)
        f++;
    if(r==max-1)
        r=0;
    else r=r+1;
        Q[r]=no;
}

int hapus()
{
    int e;
    if(f==-1)
    {
        printf("\nAntrian Melingkar Kosong !!\n");
        return;
    }
    e=Q[f];
    if(f==max-1)
        f=0;
    else if(f==r)
    {
        f=-1;
        r=-1;
    }
    else f=f+1;
    printf("\n%d telah dihapus !\n",e);
    return e;
}

void cetak()
{
    int i;
    if(f==-1)
    {
        printf("\nAntrian Melingkar Kosong! Tidak Ada yang Ditampilkan!!\n");
        return;
    }
    i=f;
    if(f<=r)
    {
        printf("\n\n NO Antrian");
        for(i = f;i<=r; i++){
            printf("\nAntrian > %d nomor ke => %d ",i,Q[i]);
        printf("\n");
        }
    }
    else
    {
        printf("\n\n NO Antrian");
        while(i<=max-1)
           printf("\nAntrian > %d nomor ke => %d ",i,Q[i++]) ;
        i=0;

        while(i<=r)
            printf("\nAntrian > %d nomor ke => %d ",i,Q[i++]);
        printf("\n");
    }
}
