/*
**************************************************************************
*	 File Name: source/main/main.c
*	 Author: jarvif
*	 Mail: liuzw@sunmnet.com 
*	 Created Time: Thu 23 May 2019 09:55:26 PDT
*
*	 COPYRIGHT(c) Sunmnet Technology Co. Ltd
**************************************************************************
*/
#include<stdio.h>
#include "spi.h"
int main(int argc,char *argv[])
{
	int a = sum(5,1);
	printf("a:%d\nhello world\n",a);
	return 0;

}
