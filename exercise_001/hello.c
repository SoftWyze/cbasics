/*
 * Program to print the name of the user
 * (c) 2018 SoftWyze (Pvt) Ltd
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
  if(argc == 2)
    printf("Hello %s, Nice to meet you.\n", argv[1]);
  else if(argc > 2)
    printf("You supplied to many arguments\n");
  else
    printf("One argument expected\n");
}
