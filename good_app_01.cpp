// good_app_01.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#include <iostream>
#include <time.h>
#include <stdio.h>

// 追加のコメント

int main(void)
{
	time_t rawtime;
	struct tm* timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	printf("現在時刻は: %s", asctime(timeinfo));

	getchar();

	return 0;
}