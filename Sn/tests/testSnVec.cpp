#include "Snob2_base.cpp"
#include "Snob2_session.hpp"
#include "CombinatorialClasses.hpp"
#include "SnClasses.hpp"
#include "SnVec.hpp"

using namespace cnine;
using namespace Snob2;

//typedef CscalarObj cscalar;
//typedef CtensorObj ctensor;



int main(int argc, char** argv){

  Snob2_session session;
  CombinatorialClasses combi_classes;
  SnClasses Snclasses;
  cout<<endl;

  //SnType type0(IntegerPartition({3,1}),1);
  //type0.set(IntegerPartition({2,2}),2);

  /*
  SnRepresentation mu;
  mu.set(SnIrrep({4,2}),1);
  mu.set(SnIrrep({5,1}),2);

  SnElement sigma({1,2,4,3}); 

  SnVec V(mu,cnine::fill::gaussian);
  printl("V",V);

  SnVec V1=V.apply(sigma);
  printl("V1",V1);
  */

}
