#include <iostream>
#include <vector>

typedef long long int llInt;

using namespace std;

vector<llInt> factorize(long n)
{
  vector<llInt> result;
  for (llInt i = 2; i * i <= n; i++)
    while (n % i == 0)
    {
      result.push_back(i);
      n /= i;
    }
  if (n != 1)
    result.push_back(n);
  return result;
}

int main()
{
  int numOfDataCase;
  cin >> numOfDataCase;
  for (int i = 0; i < numOfDataCase; i++)
  {
    llInt n, index;
    cin >> n >> index;
    vector<llInt> divisiorResult = factorize(n);

    if(index <= divisiorResult.size() && index > 0){
      cout << divisiorResult[index - 1] << endl;
    } else {
      cout << "-1" << endl;
    }

  }
  return 0;
}