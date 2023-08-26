#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define TOTAL 11

//1．编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所
//有其他字符的数量。
void repo_char(void);

//2. 编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字符以及对应的
//ASCII码（十进制）。每行打印8个“字符 - ASCII码”组合。建议：使用字符计数和求模运算
//符（ % ）在每8个循环周期时打印一个换行符。
void char_ascii(void);
void char_ascii_2(void);//weiwan, budui

//3．编写一个程序，读取整数直到用户输入0。输入结束后，程序应报告用户输入的偶
//数（不包括0）个数、这些偶数的平均值、输入的奇数个数及其奇数的平均值。
void odd_average(void);