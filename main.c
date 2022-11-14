#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv) {
    string names[] = {"syauri","sopyan", "putri", "siti", "zahra", "susi"};
    string cari = get_string("Cari Nama: ");
    for (int i = 0; i < sizeof(names) / sizeof(string); i++) {
        if (strcmp(cari, names[i]) == 0) {
            printf("Namanya ada \n");
            return false;
        }
    }
    printf("Namanya tidak ada \n");
    return true;

    /*
        strcmp() untuk membandingkan two strings
        Function strcmp(harus ada 2 argumen) 
        return nya boolean true(1) dan false(0)
        Kalau perbandingannya sama akan return false(0)
        Kalau perbandingannya beda akan return true(1)
    */
}
