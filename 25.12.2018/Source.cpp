#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

#include <chrono>
#include <thread>


void task6()
{
	using namespace std::chrono_literals;

	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;

	for (size_t i = 1; i <= 5; i++)
	{
		int mast = 1 + rand() % 1/*3*/;
		int nam = 1 + rand() % 13;



		switch (i)
		{
		case 1:
		{
			c1 = (mast * 100) + nam;
			printf("card #1: %d\n", c1);
		}break;
		case 2:
		{
			c2 = (mast * 100) + nam;
			printf("card #2: %d\n", c2);
		}break;
		case 3:
		{
			c3 = (mast * 100) + nam;
			printf("card #3: %d\n", c3);
		}break;
		case 4:
		{
			c4 = (mast * 100) + nam;
			printf("card #4: %d\n", c4);
		}break;
		case 5:
		{
			c5 = (mast * 100) + nam;
			printf("card #5: %d\n", c5);
		}
		break;
		}
		//		std::this_thread::sleep_for(1s);
	}

	printf("1.%d\n", c1 % 100);
	printf("2.%d\n", c2 % 100);
	printf("3.%d\n", c3 % 100);
	printf("4.%d\n", c4 % 100);
	printf("5.%d\n", c5 % 100);

	int cn = 1;
	int para = 0;
	int ggg = 0;
	do
	{
		if (cn == 1)
		{
			if ((c1 % 100) == (c2 % 100) ||
				(c1 % 100) == (c3 % 100) ||
				(c1 % 100) == (c4 % 100) ||
				(c1 % 100) == (c5 % 100))
			{
				para++;
			}
		}
		else if (cn == 2) {
			if ((c2 % 100) == (c1 % 100) ||
				(c2 % 100) == (c3 % 100) ||
				(c2 % 100) == (c4 % 100) ||
				(c2 % 100) == (c5 % 100))
			{
				para++;
			}
		}
		else if (cn == 3) {
			if ((c3 % 100) == (c1 % 100) ||
				(c3 % 100) == (c2 % 100) ||
				(c3 % 100) == (c4 % 100) ||
				(c3 % 100) == (c5 % 100))
			{
				para++;
			}
		}
		else if (cn == 4) {
			if ((c4 % 100) == (c1 % 100) ||
				(c4 % 100) == (c3 % 100) ||
				(c4 % 100) == (c2 % 100) ||
				(c4 % 100) == (c5 % 100))
			{
				para++;
			}
		}
		else if (cn == 5) {
			if ((c5 % 100) == (c1 % 100) ||
				(c5 % 100) == (c3 % 100) ||
				(c5 % 100) == (c4 % 100) ||
				(c5 % 100) == (c2 % 100))
			{
				para++;
			}
		}

		//if (cn == 1)
		//{
		//	if ((c1 / 100) == (c2 / 100) ||
		//		(c1 / 100) == (c3 / 100) ||
		//		(c1 / 100) == (c4/ 100) ||
		//		(c1 / 100) == (c5 / 100))
		//	{
		//		ggg++;
		//	}
		//}
		//else if (cn == 2) {
		//	if ((c2 / 100) == (c1 / 100) ||
		//		(c2 / 100) == (c3 / 100) ||
		//		(c2 / 100) == (c4 / 100) ||
		//		(c2 / 100) == (c5 / 100))
		//	{
		//		ggg++;
		//	}
		//}
		//else if (cn == 3) {
		//	if ((c3 / 100) == (c1 / 100) ||
		//		(c3 / 100) == (c2 / 100) ||
		//		(c3 / 100) == (c4 / 100) ||
		//		(c3 / 100) == (c5 / 100))
		//	{
		//		ggg++;
		//	}
		//}
		//else if (cn == 4) {
		//	if ((c4 / 100) == (c1 / 100) ||
		//		(c4 / 100) == (c3 / 100) ||
		//		(c4 / 100) == (c2 / 100) ||
		//		(c4 / 100) == (c5 / 100))
		//	{
		//		ggg++;
		//	}
		//}
		//else if (cn == 5) {
		//	if ((c5 / 100) == (c1 / 100) ||
		//		(c5 / 100) == (c3 / 100) ||
		//		(c5 / 100) == (c4 / 100) ||
		//		(c5 / 100) == (c2 / 100))
		//	{
		//		ggg++;
		//	}
		//}

		cn++;

	} while (cn <= 5);

	if (para > 2)
		printf("Сэт\n");
	else if (para == 1)
		printf("Пара\n");

	if (((c1 / 100) == (c2 / 100) && (c1 / 100) == (c3 / 100) && (c1 / 100) == (c4 / 100) && (c1 / 100) == (c5 / 100)))
		printf("Flash\n");


	//6.	!!!Определение покерной комбинации в пяти картах
	//	Программа псевдослучайным образом выбирает из колоды 
	//	в 54 карты(2–10, валет, дама, король, туз в мастях пики,
	//		крести, бубны, червы + 2 джокера) пять карт
	//	и отображает свой выбор.
	//	После этого определяется, есть ли в сданных картах одна из комбинаций :
	//(a)Пара : две карты одного значения;
	//(b)Сет : три карты одного значения;
	//(c)Флэш : пять карт одной масти
}

void task5()
{
	//5.	В области 10 районов.Заданы площади, засеваемые 
	//	пшеницей(в гектарах), и средняя урожайность
	//	(в центнерах с гектара) в каждом районе.
	//	Определить количество пшеницы, собранное в области,
	//	и среднюю урожайность по области
	int allpsh = 0;
	int allsrd = 0;
	for (size_t rayon = 1; rayon < 11; rayon++)
	{
		int gek = 10 + rand() % 5;
		int psh = 300 + rand() % 300;
		float avg = float(psh) / gek;
		printf("rayon %d\t ploshad = %d\t srednya urozhainost = %f\n", rayon, gek, avg);
		allpsh += psh;
		allsrd += avg;
	}
	printf("Kоличество пшеницы с области = %d\t Средняя урожайность с области = %f\n", allpsh, float(allsrd / 10));

}

void task4()
{
	//4.	Известен рост каждого ученика двух классов.Определить средний рост учеников каждого класса.Численность обоих классов одинаковая.
	int summa;
	for (size_t clas = 1; clas < 3; clas++)
	{
		int chislo = 10 + rand() % 12;
		summa = 0;
		for (size_t student = 1; student <= chislo; student++)
		{
			int srs = 150 + rand() % 30;
			printf("class - %d\t student - %d\t rost = %d\n", clas, chislo, srs);
			summa += srs;
		}
		float avg = float(summa) / chislo;
		printf("Srednii rost = %f\n", avg);
	}
}

void task3()
{
	//3.	Известно количество осадков, выпавших за каждый 
	//	день января и марта.Определить среднедневное 
	//	количество осадков за каждый месяц.

	int numden;
	int summa;
	for (size_t mesyac = 1; mesyac <= 2; mesyac++)
	{
		numden = 0;
		summa = 0;
		printf("%d. mesyac\n", mesyac);
		for (size_t den = 1; den <= 31; den++)
		{
			float osadki = (float(300 + rand() % 600) / float(30 + rand() % 60));
			//  float(7/3)
			printf("\t%d. %f\n", den, osadki);
			numden++;
			summa += osadki;
		}
		float avg = float(summa) / numden;
		printf("среднедневное количество осадков = %f\n", avg);
	}
}

void task2()
{
	//2.	Известен возраст(в годах в виде 14, 5 лет и т.п.) каждого ученика двух классов.Определить средний возраст учеников каждого класса.В каждом классе учатся 20 человек
	int obshii;
	int sumstudents;

	for (size_t clas = 1; clas <= 2; clas++)
	{
		obshii = 0;
		sumstudents = 0;
		for (size_t student = 1; student < 21; student++)
		{
			int uchenik = 6 + rand() % 10;
			printf("class - %d\t student - %d\t age = %d\n", clas, student, uchenik);
			obshii += uchenik;
			sumstudents++;
		}
		printf("Srednii vozrast %d = %f\n", clas, float(obshii / sumstudents));
	}
}

void task1()
{
	/*1.	Известны оценки двух учеников по
	четырем предметам.Определить сумму
	оценок каждого ученика*/
	int sum;
	for (size_t i = 1; i <= 2; i++)
	{
		sum = 0;
		for (size_t o = 1; o <= 4; o++)
		{
			int mark = 2 + rand() % 3;
			printf("student - %d\tmark-%d=%d\n", i, o, mark);
			sum = sum + mark;
		}
		printf("Summa vseh marks student - %d\t = %d\n\n", i, sum);
	}
}

void main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));

	int task;
	int flag;
	do
	{
		system("cls");
		printf("Zadanie:");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:task2(); break;
		case 3:task3(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		case 6:task6(); break;
		}
		printf("Continue?1/0");
		scanf_s("%d", &flag);

	} while (flag == 1);
}