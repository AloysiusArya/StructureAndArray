#include <stdio.h>
#include <stdlib.h>

int main(void){
  struct mahasiswa {
    char nama[64];
    char nim[64];
    int kehadiran;
  };
  struct mahasiswa stdArr[3];
  int i;
  for (i = 0; i < 3; i++) {
    printf("Masukkan Informasi #%d\n", (i+1));

    printf("Masukkan Nama: ");
    scanf("%s", stdArr[i].nama);

    printf("Masukkan NIM: ");
    scanf("%s", stdArr[i].nim);

    printf("Masukkan Kehadiran: ");
    scanf("%d", &stdArr[i].kehadiran);
  }

  // output
  for (i = 0; i < 3; i++) {
    if (stdArr[i].kehadiran < 80 ) {
        printf("\nInformasi #%d Mahasiswa:\n", (i+1));
        printf("Nama: %s\n", stdArr[i].nama);
        printf("NIM: %s\n", stdArr[i].nim);
        printf("Kehadiran: %d\n", stdArr[i].kehadiran);
    }
  }

  return 0;
}
