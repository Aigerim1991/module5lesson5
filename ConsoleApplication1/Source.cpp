#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");

	int N;
	cout << "Номер задания: " << "\n";
	cin >> N;
	switch (N)
	{
	case 1:
	{
		float d, cm;
		for (d = 10; d <= 22; d++)
		{
			cm = (d*25.4) / 10;
		cout << "Расстояние в дюймах в сантиметры " << cm << endl;}
		
	}
	break;
	case 2:
	{
		float kurs,tenge;
		cout << "Ввести текущий курс- " << "\n";
		cin >> kurs;
		int dollary;
		cout.precision(10);
		for (dollary = 1; dollary <= 20; dollary++)
		{
			tenge = (float)dollary*kurs;
			cout << dollary <<" Тенге по текущему курсу: " << tenge << endl;
		}
	}
	break;
	case 3:
	{
		int d;
		for (int i = 1; i <= 10; i++)
		{
			d = i * 7;
			cout << "Таблица умножения на 7: "<<i<<" " << d << endl;
		}

	}
	break;
	case 4:
	{
		int a=1;
		int i;
		cin >> i;
		for (i; i <= 15; i++)
		{
			a *= i;//a=a*i
			
		
		}
		cout << "Произведение всех целых чисел: " << a << endl;
	}
	break;
	case 6:
	{
		int b, ball;
		int vid_sport;
		int sum = 0;
		srand(time(NULL));
		for (b = 1; b <= 2; b++)
		{
			sum = 0;
			for (vid_sport = 1;  vid_sport <=5; vid_sport++)
			{
				ball = 1 + rand() % 90;
				sum += ball;

			}
			cout << b << " спортсмен-пятиборец " << sum <<" получил баллов "<< endl;
		}
	}
	break;
	case 7:
	{
		int N,posetiteliy,v_molodoi=100,v_staruiy=0,vozrast;
		cout << "Посетители: " << "\n";
		cin >> posetiteliy;
		/*cout << "Самый молодой: " << "\n";
		cin >> v_molodoi;
		cout << "Самый старый: " << "\n";
		cin >> v_staruiy;*/
		int sum = 0, sredniy=0;
		srand(time(NULL));
		for (int i = 1; i <= posetiteliy; i++)
		{
 			vozrast = 4 + rand ()% 65;
			if (v_molodoi > vozrast)
			{
				v_molodoi = vozrast;
				
			}
			if (v_staruiy < vozrast)
			{
				v_staruiy = vozrast;
			}

			sum += vozrast;
			

		}
		
		cout << "Самый молодой-  " << v_molodoi << endl;
		cout << "Самый старый- " << v_staruiy << endl;
		sredniy = sum / posetiteliy;
		cout << "Средний: " << sredniy << endl;
	}
	break;
	case 8:
	{
		int yashikiVmashinu, mashina, skladCyashikami = 50;
		
		
		do
		{
			cout << "Ввести ящики" << endl;
			cin >> yashikiVmashinu;
			if (yashikiVmashinu > skladCyashikami)
			{
				cout <<"Нету столько ящиков" << endl;
			}
			else 
			{
				skladCyashikami -= yashikiVmashinu;
			}


		} while (skladCyashikami>0);
		
	
	}
	break;
	case 9:
	{
		int n;
		cin >> n;
		for (int i = 0; i <= n; i++)
		{
			cout << "Все числа" << i << "\n";
		}
	}
	break;
	case 10:
	{
		int n;
		cin >> n;
		for (int i = 0; i <= n; i++)
		{
			if (n % 2 == 0)
			{
				cout << "Число является четным" << "\n";
			}
			if (n % 1 == 0)
			{
				cout << "Число является  не четным" << "\n";
			}
			if (n % 7 == 0)
			{
				cout << "Число является  кратным к  7-ми " << "\n";
			}
			}
	}
	break;
	default:
		break;
	}





}