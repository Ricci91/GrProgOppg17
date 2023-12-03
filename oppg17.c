#include <stdio.h>
#include <stdbool.h>

/**
 * Skriv et program som beregner pongsummen for et visst antall skøyteløpere på en gitt
distanse. Programmet (lovlig betyr at det loopes inntil det angitte er innskrevet/lest):
1. leser inn en lovlig distanse (500, 1500, 3000 eller 5000) for kvinner.
2. beregner antall 500-metre i denne distansen (brukes ved beregning av poeng)
3. leser et lovlig antall løpere det skal leses tider for (1-MAXLOPERE (const, =10))
4. går gjennom det innleste antallet løpere, og for hver av dem utføres pkt.5 og 6:
5. leser vedkommendes tid (minutt, sekund og hundredel – alle er int).
Sikre at disse er lovlige ved at de alle er større eller lik 0 (null). Du trenger ikke
å sikre at de ellers er rimelige (f.eks. at 10.000 meter gås på tiden 2:03:24).
6. beregner og skriver ut løperens poengsum (float) ut fra de innleste tidene.
poeng = (minutt * 60 + sekund + hundredel / 100 ) / antall-500-metre
F.eks. 1500m på tiden 1 52 13: poeng = (1*60 + 52 + 13/100) / 3 = 37.377
7. helt til slutt spørres brukeren om vedkommende vil kjøre hele programmet fra
begynnelsen av igjen. Dvs. starte på pkt.1 igjen.
 *
*/

const int LOVLIGDISTANSE[] = {500, 1500, 3000, 5000};
const int MAXLOPERE = 10;

int antallRunder(int distanse);
int readDistanse();
int antallLopere();

int main(void)
{

	int distanse = readDistanse();
	int antallrunder = antallRunder(distanse);
	int antalllopere = 0;

	return 0;
}


/**
 * @brief Tar inn distanse og returnerer antall runder
 * 
 * @param Distanse som skal regnes ut
 * @return Antall runder sprunget
*/
int antallRunder(int distanse)
{
	return distanse / 500;
}



/**
 * @brief Leser distanse fra bruker og returnerer int
 * 
 * @return Int som representerer distenasen lopt
*/
int readDistanse()
{
	
	bool lovlig = false;

	int d = 0;

	while (!lovlig)
	{
		printf("Skriv inn distanse (500, 1500, 3000, 5000) -> ");
		scanf("%d", &d);

		for (int i = 0; i < 4; i++)
		{
			if (d == LOVLIGDISTANSE[i])
			{
				lovlig = true;
				break;
			}
		}
		if (!lovlig)
		{
			printf("Skriv lovlig intervall! \n");
		}
		
	}
	return d;
}

int antallLopere()
{
	int antall = 0;

	printf("Skriv in hvor mange lopere det er (mindre enn 10)");
	scanf("%d", &antall);
}