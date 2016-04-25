#define CATCH_CONFIG_RUNNER
#include <iostream>
#include <cmath>
#include <catch.hpp>

double mileToKilometer(double mile)
{return mile *1.60934;}

TEST_CASE("describe_mileToKilometer" , "[mileToKilometer]")
{
  REQUIRE(mileToKilometer(2)== Approx(2*1.60934f) );
  REQUIRE(mileToKilometer(0)== Approx(0.0f) );

}

int main(int argc, char* argv[])
{
  double mile=0;
  std::cout<<"Wieviele Meilen? : ";
  std::cin>>mile;
  if(mile<0)
    {std::cout<<"es sollte eine positive Zahl sein"<<std::endl;
	return 0;}
  std::cout<<"das sind "<<mileToKilometer(mile)<<" Kilometer."<<std::endl;
  return Catch::Session().run(argc, argv);
}
