#include <stddef.h> // for size_t
#include <stdint.h> // for uint32_t
#include <stdio.h> // for printf
#include "add-nbo.h"

int main(int argc, char** argv){

        if (argc != 3){
                printf("usage : ./add-nbo test1.bin test2.bin \n");
                return 0;
        }

        FILE *fp, *fp1;

        uint32_t a;
        uint32_t b;

        fp = fopen(argv[1], "rb");

        fp1 = fopen(argv[2], "rb");

        fread(&a, sizeof(uint32_t), 1, fp);
        fread(&b, sizeof(uint32_t), 1, fp1);

        fclose(fp);
        fclose(fp1);


        is_net_order(a,b);

        return 0;
}

