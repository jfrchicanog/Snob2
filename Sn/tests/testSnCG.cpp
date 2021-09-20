#include "Snob2_base.cpp"
#include "Snob2_session.hpp"
#include "CombinatorialClasses.hpp"
#include "SnClasses.hpp"
#include "SnPart.hpp"

#include "SnCGbank.hpp"
#include "SnCGcoefficient.hpp"
//class SnCGbank
//SnCGbank* _sncgbank=nullptr;

#include "SnPartProduct.hpp"


using namespace cnine;
using namespace Snob2;

//typedef CscalarObj cscalar;
//typedef CtensorObj ctensor;



int main(int argc, char** argv){

  Snob2_session session;

  int n=3;
  Sn G(n);
  IntegerPartition lambda({n-1,1});

  cout<<SnCGcoefficient(lambda,lambda,{n-2,2})<<endl<<endl;

  SnPart A=SnPart::gaussian({n-1,1},1);
  printl("A",A);

  SnPart B=SnPart::gaussian({n-1,1},1);
  printl("B",B);


  SnVec C=SnPartProduct(A,B);
  printl("C",C);
  cout<<"pppppppppppppp"<<endl;

  SnElement sigma=G.random();
  auto Ad=sigma*A;
  auto Bd=sigma*B;
  SnVec Cd=SnPartProduct(Ad,Bd);
  printl("Cd",Cd);
  
  auto Cdd=sigma*C;
  printl("Cdd",Cdd);

}