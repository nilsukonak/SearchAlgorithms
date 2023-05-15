#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int linearSearch(int arr[], int n, int x) {       //n dizi boyutu, x aranacak eleman
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;  // Elemanýn dizideki indisini döndürecek
        }
    }
    return -1;  // Eleman dizide bulunamadýysa -1 döndürecek
}

int main() {
    int size;
    printf("Dizi boyutunu giriniz lutfen : ");
    scanf("%d", &size);

    int arr[MAX_SIZE];
    printf("Dizi elemanlarini giriniz lutfen :\n");
    int i;
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int aranacakEleman;
    printf("Aranacak elemani giriniz lutfen : ");
    scanf("%d", &aranacakEleman);

    int sonuc = linearSearch(arr, size, aranacakEleman);

    if (sonuc == -1) {
        printf("Eleman dizide bulunamadi.\n");
    } else {
        printf("Eleman, dizinin %d. indisinde bulunuyor.\n", sonuc);
    }

    return 0;
}
