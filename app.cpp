#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    printf("Simulasi Brute Force Sederhana By GunturDeveloper\n");

    char u_pwd[100];
    printf("Masukkan password anda: ");
    scanf("%s", u_pwd);

    char pwd[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#$&-+,";
    char found_password[100] = "";
    int pwd_length = strlen(pwd);
    int u_pwd_length = strlen(u_pwd);
    int i;

    clock_t start_time = clock();

    for (i = 0; i < u_pwd_length; i++) {
        int found = 0;
        while (!found) {
            char guess = pwd[rand() % pwd_length];
            if (guess == u_pwd[i]) {
                found_password[i] = guess;
                found = 1;
                printf("Karakter ditemukan: %c\n", guess);
                printf("Sedang mencari karakter selanjutnya...\n");
               
                system("clear || cls");
            }
        }
    }

    clock_t end_time = clock();
    double time_taken = double(end_time - start_time) / CLOCKS_PER_SEC;

    int minutes = (int)(time_taken / 60);
    int seconds = (int)(time_taken) % 60;
    int milliseconds = (int)((time_taken - (int)time_taken) * 1000);

    printf("Password ditemukan: %s\n", found_password);
    printf("Waktu yang dibutuhkan: %d menit %d detik %d milidetik\n", minutes, seconds, milliseconds);

    return 0;
}
