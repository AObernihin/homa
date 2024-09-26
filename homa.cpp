
using namespace std;
#include <iostream>

int main()
{
	int a;
	char b;
	cout << "2-down" << endl << "1-right" << endl;
	cin >> a;
	cout << "enter symbol:";
	cin >> b;
	if (a == 1) {
		for (int i = 1; i < 6; i++) {
			cout << b;
		}
	}
	else {
		for (int i = 1; i < 6; i++) {
			cout << b << endl;
		}
	}
	//===============================//
	int randcomp, sumcomp = 0;
	int randuser, sumuser = 0;
	srand(time(NULL));
	for (int i = 1; i < 4; i++) {
		randcomp = rand() % 6 + 1;
		randuser = rand() % 6 + 1;
		cout << "you got:" << randuser << endl;
		cout << "computer got:" << randcomp << endl;
		cout << "=============" << endl;
		sumcomp += randcomp;
		sumuser += randuser;

	}
	if (sumcomp < sumuser) {
		cout << "sum of comp:" << sumcomp << endl;
		cout << "sum of you:" << sumuser << endl;
		cout << "you win";
	}
	else {
		cout << "sum of comp:" << sumcomp << endl;
		cout << "sum of you:" << sumuser << endl;
		cout << "you lose";
	}
	//================================//
	int arr[10], min, max;
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 50;
	}
	min = arr[0];
	max = arr[0];

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}cout << endl;


	for (int i = 0; i < 10; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
		else {
			continue;
		}
	}


	for (int i = 0; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		else {
			continue;
		}
	}
	cout << "min:" << min << endl;
	cout << "max:" << max << endl;
	
	//==================================//
	int salary[12], pata, first, second, min1, max1, value1, value2;
	for (int i = 0; i < 12; i++) 
	{
		cout << "enter salary for " << i+1 << " month:";
		cin >> pata;
		salary[i] = pata;
	}
	cout << "enter arrray of months:";
	cin >> first >> second;
	min1 = salary[first];
	max1 = salary[first];
	value1 = first;
	value2 = first;
	for (int i = first; i <= second; i++) 
	{
		if (min1 > salary[i]) {
			min1 = salary[i];
			value1 = i;
		}
		

		if (max1 < salary[i]) {
			max1 = salary[i];
			value2 = i;
		}
		
		
	}
	cout << "min in month:" << value1 << endl;
	cout << "max in month:" << value2 + 1  << endl;
	//================================================//
	int N[20]
	{ 12, -7, 45, -23, 67, -5, 30, -16, 88, -1, 54, -34, 90, -1, 19, -40, 72, -8, 36, -22 }, 
		sumN = 0, minN, maxN, firstN, secondN, multieven, multi, fminus, lminus;

	for (int i = 0; i < 20; i++) 
	{
		if (N[i] < 0) 
		{
			sumN += N[i];
		}
	}
	cout << "sum of videmni:" << sumN << endl;
	minN = N[0];
	maxN = N[0];
	for (int i = 0; i < 20; i++)
	{
		if (minN > N[i]) {
			minN = N[i];
			secondN = i;
		}


		if (maxN < N[i]) {
			maxN = N[i];
			firstN = i;
		}


	}
	
	multi = N[firstN];
	for (int i = firstN; i <= secondN; i++) 
	{
		multi = N[i] * multi;
	}
	cout << "multiple betweeen min max:" << multi << endl;

	multieven = N[0];
	for (int i = 0; i < 21; i++) 
	{
		if (i % 2 == 0) 
		{
			multieven *= N[i];
		}
	}
	cout << multieven << endl;

	for (int i = 0; i < 21; ++i) 
	{
		if (N[i] < 0) {
			fminus = i;
			cout << fminus;
			break;
		}
	}

	for (int i = 20; i < 21; --i)
	{
		if (N[i] < 0) {
			fminus = i;
			cout << fminus;
			break;
		}
	}
}