#include "Provider.h"
#include "Caller.h"

int main()
{
	Provider provider;

	provider.addRate(new RateSec("TarifSec free", 0));
	provider.addRate(new RateSec("TarifSec double", 1.5));
	provider.addRate(new RateSec("TarifSec babushka", 0.1));
	provider.addRate(new RateMin("TarifMin free+10", 10));
	provider.addRate(new RateMin("TarifMin double", 25));

	try
	{
		provider.addRate(new RateMin("Ta", 7));
	}
	catch (MobileException* obj)
	{
		cout << obj->showMessage() << endl;
	}
	

	provider.show();

	try
	{
		cout << "60 = " << provider["TarifSec double"]->calcCost(60) << endl;
		cout << "-60 = " << provider["TarifSec double"]->calcCost(-60) << endl;
	}
	catch (MobileException* obj)
	{
		cout << obj->showMessage() << endl;
	}

	/*Caller Vanya("Vanya", "+38063*******", 500);

	Vanya.setRate(new RateMin("TarifMin dedushka", 7));
	Vanya.show();*/
}