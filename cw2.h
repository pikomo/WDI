1 Zadanie z kolosa:
Wprowadź k, sprawdź czy istniej spójny podciąg w ciągu fibonacciego, który sumuje się do k.


bool podciąg_w_fibonaccim(int k)
{
	int n;
	cin >> n;
	
	int p1 = 1;
	int p2 = 1;
	int p3;
	int sum = 1;
	
	int k1=1;
	int k2=2;
	int k3;
	
	while(sum != n && p1 <= k1)
	{
		if(suma < n)
		{
			sum += k1;
			k3 = k2 + k1;
			k1 = k2;
			k2 = k3;
		}
		
		if(suma > n)
		{
			sum -= p1;
			p3 = p2 +p1;
			p1 = p2;
			p2 = p3;
		}
	}
	
	if(suma == n) return true;
	else return false;
	
}





