#include <stdio.h>
#include <string.h>

int main() {
    const int EKONOMI = 5000, VIP = 35000, BISNIS = 20000;

    char nama[50], kelamin, lagi;
    long long nik;
    char tgl[20];
    int tujuan, harga, kelas, pjam, hrkelas, hrtujuan;

    do {
    	system("cls");
        printf("=============================================\n");
        printf("               SELAMAT DATANG\n");
        printf("              DI PEMESANAN TIKET\n");
        printf("         STASIUN KERETA API SURABAYA\n");
        printf("=============================================\n");
        printf("           SILAHKAN ISI DATA ANDA\n\n\n");

        printf("NAMA ANDA : ");
        fgets(nama, sizeof(nama), stdin);
        nama[strcspn(nama, "\n")] = '\0';

        printf("JENIS KELAMIN ANDA [L/P] : ");
        scanf(" %c", &kelamin);
        printf("MASUKKAN NIK ANDA :  ");
        scanf("%lld", &nik);
        printf("MASUKKAN TANGGAL KEBERANGKATAN [dd/mm/yy] : ");
        scanf("%s", tgl);
        printf("\n");
    	
    	system ("cls");
    	printf("                          PILIHAN KERETA API DAN KELAS\n");
        printf("   =========================================================================\n");
        printf("   |N0. |      KERETA API      |      KELAS     |       TAMBAHAN HARGA     |\n");
        printf("   =========================================================================\n");
        printf("   |1.  | ARJONEGORO           | EKONOMI        |      Rp. 5.000,-         |\n");
        printf("   |2.  | ARGO BROMO           | BISNIS         |      Rp. 20.000,-        |\n");
        printf("   |3.  | AMBARAWA EKSPRES     | VIP/PARIWISATA |      Rp. 35.000,-        |\n");
        printf("   =========================================================================\n\n");
        printf("TENTUKAN PILIHAN ANDA : ");
        scanf("%d", &kelas);
        printf("\n");

        switch (kelas) {
            case 1:
            	hrkelas = 5000;
                system("cls");
		    	printf("         PILIHAN TUJUAN KERETA API\n");
		        printf("   =====================================\n");
		        printf("   |No. |  Tujuan      |     Harga     |\n");
		        printf("   =====================================\n");
		        printf("   |1.  | Bogor        | Rp. 50.000,-  |\n");
		        printf("   |2.  | Mojokerto    | Rp. 100.000,- |\n");
		        printf("   |3.  | Babat        | Rp. 200.000,- |\n");
		        printf("   |4.  | Atlantis     | Rp. 250.000,- |\n");
		        printf("   =====================================\n\n");
		        printf("Tentukan pilihan anda : ");
		        scanf("%d", &tujuan);
		        printf("\n");

        switch (tujuan) {
            case 1:
                hrtujuan = 50000;
                harga = hrtujuan + EKONOMI;
                break;
            case 2:
                hrtujuan = 100000;
               harga = hrtujuan + EKONOMI;
                break;
            case 3:
                hrtujuan = 200000;
                harga = hrtujuan + EKONOMI;
                break;
            case 4:
                hrtujuan = 250000;
               harga = hrtujuan + EKONOMI;
                break;
            default:
                printf("Menu tidak tersedia\n\n");
                continue;
        }
                break;
            case 2:
            	hrkelas = 20000;
            	system("cls");
		    	printf("         PILIHAN TUJUAN KERETA API\n");
		        printf("   =====================================\n");
		        printf("   |No. |  Tujuan      |     Harga     |\n");
		        printf("   =====================================\n");
		        printf("   |1.  | Bogor        | Rp. 120.000,- |\n");
		        printf("   |2.  | Mojokerto    | Rp. 250.000,- |\n");
		        printf("   |3.  | Babat        | Rp. 300.000,- |\n");
		        printf("   |4.  | Atlantis     | Rp. 400.000,- |\n");
		        printf("   =====================================\n\n");
		        printf("Tentukan pilihan anda : ");
		        scanf("%d", &tujuan);
		        printf("\n");

        switch (tujuan) {
            case 1:
                hrtujuan = 120000;
                harga = hrtujuan + BISNIS;
                break;
            case 2:
                hrtujuan = 250000;
                harga = hrtujuan + BISNIS;
                break;
            case 3:
                hrtujuan = 300000;
                harga = hrtujuan + BISNIS;
                break;
            case 4:
                hrtujuan = 400000;
                harga = hrtujuan + BISNIS;
                break;
            default:
                printf("Menu tidak tersedia\n\n");
                continue;
        }
                break;
            case 3:
            	hrkelas = 35000;
            	system("cls");
		    	printf("         PILIHAN TUJUAN KERETA API\n");
		        printf("   =====================================\n");
		        printf("   |No. |  Tujuan      |     Harga     |\n");
		        printf("   =====================================\n");
		        printf("   |1.  | Bogor        | Rp. 350.000,- |\n");
		        printf("   |2.  | Mojokerto    | Rp. 450.000,- |\n");
		        printf("   |3.  | Babat        | Rp. 500.000,- |\n");
		        printf("   |4.  | Atlantis     | Rp. 750.000,- |\n");
		        printf("   =====================================\n\n");
		        printf("Tentukan pilihan anda : ");
		        scanf("%d", &tujuan);
		        printf("\n");

        switch (tujuan) {
            case 1:
                hrtujuan = 350000;
                harga = hrtujuan + VIP;
                break;
            case 2:
                hrtujuan = 450000;
                harga = hrtujuan + VIP;
                break;
            case 3:
                hrtujuan = 500000;
                harga = hrtujuan + VIP;
                break;
            case 4:
                hrtujuan = 750000;
                harga = hrtujuan + VIP;
                break;
            default:
                printf("Menu tidak tersedia\n\n");
                continue;
        }
                break;
            default:
                printf("Menu tidak tersedia\n\n");
                continue; 
        }
        
        system("cls");
        printf("    PILIHAN JAM KEBERANGKATAN\n");
        printf("   =============================\n");
        printf("   |No. | Waktu  |     Jam     | \n");
        printf("   =============================\n");
        printf("   |1.  | Pagi   |  08.30 WIB  |\n");
        printf("   |2.  | Siang  |  12.50 WIB  |\n");
        printf("   |3.  | Malam  |  20.10 WIB  |\n");
        printf("   ============================\n\n");
        printf("Masukkan pilihan = ");
        scanf("%d", &pjam);
        printf("\n");

        char jam[20];
        switch (pjam) {
            case 1:
                strcpy(jam, "08.30 WIB");
                break;
            case 2:
                strcpy(jam, "12.50 WIB");
                break;
            case 3:
                strcpy(jam, "20.10 WIB");
                break;
            default:
                printf("Menu tidak tersedia\n\n");
                continue;
        }
        
        system("cls");
        printf("             TIKET ANDA BERHASIL DI PESAN\n\n");
        printf("   ================================================\n");
        printf("               TIKET KERETA API SURABAYA           \n");
        printf("   ================================================\n");
        printf("                                                   \n");
        printf("       Nama Penumpang        = %s\n", nama);
        printf("       Jenis Kelamin         = %c\n", kelamin);
        printf("       Nik Penumpang         = %lld\n", nik);
        printf("       Tanggal Keberangkatan = %s\n", tgl);
        printf("       Jam keberangkatan     = %s\n", jam);
        printf("   ================================================\n");
        printf("                KETERANGAN HARGA TIKET             \n");
        printf("       Harga Tiket kereta    = Rp. %d\n", hrtujuan);
        printf("       Harga Kelas           = Rp. %d\n", hrkelas);
        printf("       Total Harga           = Rp. %d\n", harga);
        printf("                                                   \n");
        printf("   ================================================\n");
        printf("             JL.PAHLAWAN, RAJAWALI, SURABAYA       \n");
        printf("   ================================================\n");
        printf("\n");
        
        printf("         Apakah Anda Ingin Memesan Tiket Lagi ? \n\n");
        printf("                  1. Ya       2. Tidak    \n\n");
        scanf(" %c", &lagi);
        
        while (getchar() != '\n');

    } while (lagi == '1' || lagi == '1');
    
    system("cls");
    printf("\n\n         Terima Kasih Telah Mempercayai Layanan Kami\n");
	printf("      Sampai Jumpa Lagi Dalam Perjalanan Anda Selanjutnya\n");
	printf("                    Salam dari KAI Surabaya\n");
    return 0;
}
