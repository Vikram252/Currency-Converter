#include<iostream>

using namespace std;

class CurrencyConvertor{

	private:

		double usdToEuroRate;

		double euroToUsdRate;

		double usdToJapaneseYenRate;

		double usdToIndRupeeRate;

	public:

		CurrencyConvertor(double usdToEuro, double euroToUsd,double usdToJapYen,double usdToInd){

			usdToEuroRate = usdToEuro;

			euroToUsdRate = euroToUsd;

			usdToJapaneseYenRate = usdToJapYen;

			usdToIndRupeeRate= usdToInd;			

		}

		//method to convert USD to Euro

		double usdToEuro(double usdAmoutn){

			return usdAmoutn*usdToEuroRate;

		}

		//method to convert Euro to USD

		double euroToUsd(double euroAmout){

			return euroAmout*euroToUsdRate;

		}

		//method to convert USD to Pakistani Rupee

		double usdToJapYen(double usdAmount){

			return usdAmount*usdToJapaneseYenRate;

			}

		//method to converet USD TO Indian Rupee

		double usdToIndRupee(double usdAmount){

			return usdAmount*usdToIndRupeeRate;

		}

		//Display Exchange Rate Method

		void displayExchangeRate() const{

			cout<<"\n\t--------Current Exchange Rate -----------\n";

			cout<<"1 USD to Euro :"<<usdToEuroRate<<endl;

			cout<<"1 Euro to USD :"<<euroToUsdRate<<endl;

			cout<<"1 USD to Japanese Yen:"<<usdToJapaneseYenRate<<endl;

			cout<<"1 USD to Inidan Rupee :"<<usdToIndRupeeRate<<endl;

		}	

};

main(){

	const double initialUsdToEuroRate = 0.93;

	const double initialEuroToUsdRate = 1.08;

	const double initialUsdToJapRate = 156.98;

	const double initialUsdToIndRate = 83.51;

	CurrencyConvertor convertor(initialUsdToEuroRate,initialEuroToUsdRate,initialUsdToJapRate,initialUsdToIndRate);

	

	int choice;

	double amount;

	do{

		system("cls");

		convertor.displayExchangeRate();

		cout<<"\n\t******* Currency Convertor Main Menu ********\n";

		cout<<"1. Convert USD to Euro \n";

		cout<<"2. Convert Euro to USD \n";

		cout<<"3. Convert USD to Japanese Yen\n";

		cout<<"4. Convert USD to Indian Rupee\n";

		cout<<"0. Exit\n";

		cout<<"Plz Enter Your Choice :";

		cin>>choice;

		switch(choice){

			case 1:

				cout<<"Enter the Amount of USD :";

				cin>>amount;

				cout<<amount<<" USD is Equalent to "<<convertor.usdToEuro(amount)<<" Euro\n";

				system("pause");

				break;

			case 2:

				cout<<"Enter the Amount of Euro :";

				cin>>amount;

				cout<<amount<<" Euro is Equalent to "<<convertor.euroToUsd(amount)<<" USD\n";

				system("pause");

				break;

			case 3:

				cout<<"Enter the Amount of USD :";

				cin>>amount;

				cout<<amount<<" USD is Equalent to "<<convertor.usdToJapYen(amount)<<" Japanese Yen\n";

				system("pause");

				break;

			case 4:

				cout<<"Enter the Amount of USD :";

				cin>>amount;

				cout<<amount<<" USD is Equalent to "<<convertor.usdToIndRupee(amount)<<" Indian Rupee\n";

				system("pause");

				break;

			case 0:

				cout<<"Program End";

				

				break;

			default:

				cout<<"Plz Enter Valid Number \n";

				system("pause");

		}

	}while(choice !=0);

} 