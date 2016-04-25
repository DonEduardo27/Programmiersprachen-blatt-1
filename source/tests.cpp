#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <iostream>

int max(int a, int b)
{if(a<b)return b;
  else return a;}


int gcd(int a, int b)
{int res=1;
  for (int i=1;i<=max(a,b);i++)
    {
      if(a%i==0 and b%i==0)res = i;
    }
  return res;
}

float fract(float x)
{
  return x - int (a); //betrag nehmen
}

int checksum (int sum)
{
  int res=0;
  while(sum>0)
    {
      res+=sum%10;
      sum/=10;
    }
    
    return res;
}

int sumMultiples()
{
  int res=0;
  for(int i=0; i<=1000;i++)
    {
      if(i%3==0 or i%5==0)res+=i;
    }
  return res;
}

int oberflZyl(int rad, int high)
{
  return (M_PI*2*rad*rad) + (2* M_PI *rad*high);
}

int volZyl(int rad, int high)
{
  return M_PI*rad*rad*high;//test machen
}

double mileToKilometer(double mile)
{return mile *1.60934;}

TEST_CASE("describe_gcd" , "[gcd]")
{
  REQUIRE(gcd(2,4)== 2);
  REQUIRE(gcd(6,9)== 3);
  REQUIRE(gcd(3,7)== 1);
  REQUIRE(gcd(0,0)== 1);
  REQUIRE(gcd(-3,7)== 1);
}

TEST_CASE("describe_checksum" , "[checksum]")
{
  REQUIRE(checksum(35)== 8);
  REQUIRE(checksum(0)== 0);
  REQUIRE(checksum(116757)== 27);

}

TEST_CASE("describe_sumMultiples" , "[sumMultiples]")
{
  REQUIRE(sumMultiples()==234168); 
}

TEST_CASE("describe_fract" , "[fract]")
{
  REQUIRE(fract(4.32)== Approx(0.32f) );
  REQUIRE(fract(443.342)== Approx(0.342f) );
  REQUIRE(fract(4.0)== Approx(0.0f) );
}

int main(int argc, char* argv[])
{

  return Catch::Session().run(argc, argv);
}
