#include <iostream>
int main()
{
	std::cout << "Welcome to Galactic Resource Manager! By inputing your resources below, you can create a system to predict your resources in 6 and 12 months.\n";
	//min stands for mineral. smin is six months mineral production and tmin is 12 months mineral production.
	int minprod;
	int mincons;
	std::cout << "\nEnter your monthly mineral production in gigatonnes: ";
	std::cin >> minprod;
	std::cout << "And its monthly consumption: ";
	std::cin >> mincons;
	int minnet = minprod - mincons;
	int smin = minnet * 6;
	int tmin = minnet * 12;
	//ene stands for energy. sene is six months energy production and tene is 12 months energy production.
	int eneprod;
	int enecons;
	std::cout << "\nEnter your monthly energy production in zetajoules: ";
	std::cin >> eneprod;
	std::cout << "And its monthly consumption: ";
	std::cin >> enecons;
	int enenet = eneprod - enecons;
	int sene = enenet * 6;
	int tene = enenet * 12;
	//all stands for alloy. sall is six months alloy production and tall is 12 months alloy production.
	int allprod;
	int allcons;
	std::cout << "\nFinally, enter your monthly alloy production in gigatonnes: ";
	std::cin >> allprod;
	std::cout << "And its monthly consumption: ";
	std::cin >> allcons;
	int allnet = allprod - allcons;
	int sall = allnet * 6;
	int tall = allnet * 12;

	std::cout << "\n_ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ _\n";
	std::cout << "\nYour net resources monthly are as follows:-\n";
	std::cout << "Minerals: " << minnet << " gigatonnes.\n";
	std::cout << "Energy: " << enenet << " zetajoules.\n";
	std::cout << "Alloys: " << allnet << " gigatonnes.\n";

	std::cout << "\n_ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ _\n";
	std::cout << "\nCalculating resources after 6 months and 12 months...\n";
	std::cout << "_ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ __ _ _\n"; 
	std::cout << "\nCalculation complete. \n";
	std::cout << "\nMinerals in 6 months: " << smin << " gigatonnes.\n";
	std::cout << "Minerals in 12 months: " << tmin << " gigatonnes.\n";
	std::cout << "\nEnergy in 6 months: " << sene << " zetajoules.\n";
	std::cout << "Energy in 12 months: " << tene << " zetajoules.\n";
	std::cout << "\nAlloys in 6 months: " << sall << " gigatonnes.\n";
	std::cout << "Alloys in 12 months: " << tall << " gigatonnes.\n";
	
	int minbatch = smin / 50;
	int enebatch = sene / 2;
	int batches;
	if (minbatch < enebatch)
	{
		batches = minbatch;
	}
	else
	{
		batches = enebatch;
	}
	
	int tminbatch = tmin / 50;
	int tenebatch = tene / 2;
	int tbatches;
	if (tminbatch < tenebatch)
	{
		tbatches = tminbatch;
	}
	else
	{
		tbatches = tenebatch;
	}
	std::cout << "\nBy using 50 gigatonnes minerals and 2 zetajoules of energy, you can gain an additional 10 gigatonnes of alloys, so you gain " << batches * 10 << " gigatonnes of alloys surplus after six months and " << tbatches * 10 << " gigatonnes after 12 months.\n";

	if (allnet < 0)
	{
		std::cout << "\nYou are doomed!\n";
	}
	else
	{
		std::cout << "\nYou are on the green!\n";
	}
	return 0;
}