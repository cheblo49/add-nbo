#include <stddef.h>
#include <stdint.h>
#include <netinet/in.h>
#include <stdio.h>
#include "add-nbo.h"

void is_net_order(uint32_t i, uint32_t j){
        int a = 0x12345678;

        if(*((char*)& a) == 0x78){ // case1:  network-byte-order
                printf("network-byte-order\n");
                printf("%d(0x%x)", ntohl(i),ntohl(i));
                printf(" + ");
                printf("%d(0x%x)", ntohl(j),ntohl(j));
                printf(" = ");
                printf("%d(0x%x)\n", ntohl(i)+ntohl(j), ntohl(i)+ntohl(j));
        }
        else{
               printf("host-byte-order\n"); //case2: host-byte-order
                printf("%d(0x%x)", i,i);
                printf(" + ");
                printf("%d(0x%x)", j,j);
                printf(" = ");
                printf("%d(0x%x)\n",i+j, i+j);
        }
}


