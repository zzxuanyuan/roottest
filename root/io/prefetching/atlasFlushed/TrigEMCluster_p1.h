//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef TrigEMCluster_p1_h
#define TrigEMCluster_p1_h
class TrigEMCluster_p1;

#include "TPObjRef.h"

class TrigEMCluster_p1 {

public:
// Nested classes declaration.

public:
// Data Members.
   float       m_Energy;    //
   float       m_Et;        //
   float       m_EnergyS[25];    //
   float       m_Eta;            //
   float       m_Phi;            //
   float       m_e237;           //
   float       m_e277;           //
   float       m_fracs1;         //
   float       m_weta2;          //
   float       m_ehad1;          //
   float       m_Eta1;           //
   float       m_emaxs1;         //
   float       m_e2tsts1;        //
   TPObjRef    m_trigCaloCluster;    //

   TrigEMCluster_p1();
   TrigEMCluster_p1(const TrigEMCluster_p1 & );
   virtual ~TrigEMCluster_p1();

};
#endif