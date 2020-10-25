#include <iostream>
#include <vector>

typedef long long int llInt;

using namespace std;

void printVector(vector<llInt> vct)
{
  for (vector<llInt>::iterator it = vct.begin(); it != vct.end(); it++)
    cout << *it << " ";
  cout << endl;
}

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
    llInt n;
    vector<llInt> divisiorResult;
    cin >> n;
    printVector(factorize(n));
  }
  return 0;
}