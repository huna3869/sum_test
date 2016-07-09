int sum(int n)
{
	int res = 0;
	int s = n/2;
	if(n%2 == 1)
		res = (n+1)*s + (n+1)/2;
	else
		res = (n+1)*s;

	return res;
}
