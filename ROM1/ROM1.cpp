// ROM.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "ROM1.h"

VOID ROM::setup(IINSTANCE* instance, IDSIMCKT* dsimckt)
{
	_instance = instance;

	vsm::model::init_pins(_instance, _pins_A, "A");
	vsm::model::init_pins(_instance, _pins_R, "R");
	vsm::model::init_pins(_instance, _pins_S, "S");
	OE.init(_instance, "OE");
	F0.init(_instance, "F0");
}

ROM::ROM()
{

}

VOID ROM::simulate(ABSTIME time, DSIMMODES mode)
{
	if (!OE->isactive())
	{
		for (size_t i = 0; i < _pins_S.size(); ++i) { _pins_S[i].set(time, 500, SLO); }
		for (size_t i = 0; i < _pins_R.size(); ++i) { _pins_R[i].set(time, 500, SLO); }
		return;
	}
	else
	{
		auto in_A = vsm::model::make_number(_pins_A);

		switch (in_A)
		{
		case 0:
			if (F0->isinactive())
			{
				_pins_S[0].set(time, 500, SHI);
				_pins_S[1].set(time, 500, SLO);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SHI);//FE
			}
			else
			{
				_pins_S[0].set(time, 500, SLO);
				_pins_S[1].set(time, 500, SLO);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SHI);//FE
			}
			break;
		case 1:
			_pins_S[0].set(time, 500, SHI);
			_pins_S[1].set(time, 500, SLO);
			_pins_R[0].set(time, 500, SLO);//PUP
			_pins_R[1].set(time, 500, SHI);//FE
			break;
		case 2:
			_pins_S[0].set(time, 500, SLO);
			_pins_S[1].set(time, 500, SLO);
			_pins_R[0].set(time, 500, SLO);//PUP
			_pins_R[1].set(time, 500, SHI);//FE
			break;
		case 3:
			_pins_S[0].set(time, 500, SHI);
			_pins_S[1].set(time, 500, SHI);
			_pins_R[0].set(time, 500, SLO);//PUP
			_pins_R[1].set(time, 500, SHI);//FE
			break;
		case 4:
			if (F0->isinactive())
			{
				_pins_S[0].set(time, 500, SHI);
				_pins_S[1].set(time, 500, SLO);
				_pins_R[0].set(time, 500, SHI);//PUP
				_pins_R[1].set(time, 500, SLO);//FE
			}
			else
			{
				_pins_S[0].set(time, 500, SLO);
				_pins_S[1].set(time, 500, SHI);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SHI);//FE
			}
			break;
		case 5:
			_pins_S[0].set(time, 500, SHI);
			_pins_S[1].set(time, 500, SLO);
			_pins_R[0].set(time, 500, SHI);//PUP
			_pins_R[1].set(time, 500, SLO);//FE
			break;
		case 6:
			_pins_S[0].set(time, 500, SLO);
			_pins_S[1].set(time, 500, SHI);
			_pins_R[0].set(time, 500, SLO);//PUP
			_pins_R[1].set(time, 500, SLO);//FE
			break;
		case 7:
			_pins_S[0].set(time, 500, SHI);
			_pins_S[1].set(time, 500, SLO);
			_pins_R[0].set(time, 500, SHI);//PUP
			_pins_R[1].set(time, 500, SLO);//FE
			break;
		case 8:
			if (F0->isinactive())
			{
				_pins_S[0].set(time, 500, SLO);
				_pins_S[1].set(time, 500, SHI);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SHI);//FE
			}
			else
			{
				_pins_S[0].set(time, 500, SLO);
				_pins_S[1].set(time, 500, SLO);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SLO);//FE
			}
			break;
		case 9:
			_pins_S[0].set(time, 500, SLO);
			_pins_S[1].set(time, 500, SLO);
			_pins_R[0].set(time, 500, SHI);//PUP
			_pins_R[1].set(time, 500, SLO);//FE
			break;
		case 10:
			_pins_S[0].set(time, 500, SLO);
			_pins_S[1].set(time, 500, SLO);
			_pins_R[0].set(time, 500, SLO);//PUP
			_pins_R[1].set(time, 500, SLO);//FE
			break;
		case 11:
			if (F0->isinactive())
			{
				_pins_S[0].set(time, 500, SLO);
				_pins_S[1].set(time, 500, SHI);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SHI);//FE
			}
			else
			{
				_pins_S[0].set(time, 500, SLO);
				_pins_S[1].set(time, 500, SLO);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SLO);//FE
			}
			break;
		case 12:
			if (F0->isinactive())
			{
				_pins_S[0].set(time, 500, SLO);
				_pins_S[1].set(time, 500, SLO);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SHI);//FE
			}
			else
			{
				_pins_S[0].set(time, 500, SHI);
				_pins_S[1].set(time, 500, SLO);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SHI);//FE
			}
			break;
		case 13:
			if (F0->isinactive())
			{
				_pins_S[0].set(time, 500, SLO);
				_pins_S[1].set(time, 500, SLO);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SHI);//FE
			}
			else
			{
				_pins_S[0].set(time, 500, SHI);
				_pins_S[1].set(time, 500, SLO);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SHI);//FE
			}
			break;
		case 14:
			if (F0->isinactive())
			{
				_pins_S[0].set(time, 500, SLO);
				_pins_S[1].set(time, 500, SLO);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SHI);//FE
			}
			else
			{
				_pins_S[0].set(time, 500, SHI);
				_pins_S[1].set(time, 500, SLO);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SHI);//FE
			}
			break;
		case 15:
			if (F0->isinactive())
			{
				_pins_S[0].set(time, 500, SLO);
				_pins_S[1].set(time, 500, SLO);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SHI);//FE
			}
			else
			{
				_pins_S[0].set(time, 500, SHI);
				_pins_S[1].set(time, 500, SLO);
				_pins_R[0].set(time, 500, SLO);//PUP
				_pins_R[1].set(time, 500, SHI);//FE
			}
			break;
		default:
			break;
		}
	}

}
extern "C"
{
	IDSIMMODEL __declspec(dllexport)* createdsimmodel(CHAR* device, ILICENCESERVER* license_server)
	{
		return license_server->authorize(ROM::MODEL_KEY) ? new ROM : nullptr;
	}

	VOID __declspec(dllexport) deletedsimmodel(IDSIMMODEL* model)
	{
		delete static_cast<ROM*>(model);
	}
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
