#include <stdio.h>

//5
float masukkan(int);

float average(int, float);


//6
float f_to_i(float);

float i_to_cm(float);

float cm_to_m(float);

int main() {

    //5
    int n;
    float total, ratarata;
    printf("Masukkan jumlah data yang akan diimputkan: ");
    scanf("%d",&n);

    total = masukkan(n);
    ratarata = average(n, total);
    printf("Total nilai %g\nrata-rata = %g\n", total,ratarata);

    //6
    float feed, inch, cm, meter;

    printf("Masukkan panjang dalam satuan kaki (feed): ");
    scanf("%f",&feed); inch = f_to_i(feed);
    cm = i_to_cm(inch);
    meter = cm_to_m(cm);

    printf("%g feed = %g inch\n", feed,inch);
    printf("%g inch = %g cm\n", inch, cm);
    printf("%g cm = %g meter\n", cm, meter);
    return 0;
}

//5
float average(int x, float tot) {
    float av; av = tot / x;
    return (av);
}

float masukkan(int jumlah_data) {
    int m;
    float nilai, sum = 0;
    for(m = 1 ; m <= jumlah_data ; m++) {
        printf("masukkan nilai ke %d : ", m);
        scanf("%f", &nilai);
        fflush(stdin); sum += nilai;
    }
    return (sum);
}

//6
float f_to_i(float f) {
    float x;
    x = f * 12;
    return(x);
}

float i_to_cm(float i) {
    float x;
    x = i * 2.54f;
    return(x);
}

float cm_to_m(float c) {
    float x;
    x = c / 100;
    return (x);
}

