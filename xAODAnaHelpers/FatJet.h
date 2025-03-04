#ifndef xAODAnaHelpers_FatJet_H
#define xAODAnaHelpers_FatJet_H

#include "xAODAnaHelpers/Particle.h"
#include "xAODAnaHelpers/Jet.h"

namespace xAH {

  class FatJet : public Particle
    {
    public:

      // scale
      float JetConstitScaleMomentum_eta;
      float JetConstitScaleMomentum_phi;
      float JetConstitScaleMomentum_m;
      float JetConstitScaleMomentum_pt;

      float JetEMScaleMomentum_eta;
      float JetEMScaleMomentum_phi;
      float JetEMScaleMomentum_m;
      float JetEMScaleMomentum_pt;

      // area
      float GhostArea;
      float ActiveArea;
      float VoronoiArea;
      float ActiveArea4vec_pt;
      float ActiveArea4vec_eta;
      float ActiveArea4vec_phi;
      float ActiveArea4vec_m;

      // substructure
      float  Split12;
      float  Split23;
      float  Split34;
      float  tau1_wta;
      float  tau2_wta;
      float  tau3_wta;
      float  tau21_wta;
      float  tau32_wta;
      float  ECF1;
      float  ECF2;
      float  ECF3;
      float  C2;
      float  D2;
      float  NTrimSubjets;
      int    NClusters;
      int    nTracks;
      float ANN_score;

      // constituent
      int    numConstituents;

      // constituentAll
      std::vector<float>  constituentWeights;
      std::vector<float>  constituent_pt;
      std::vector<float>  constituent_eta;
      std::vector<float>  constituent_phi;
      std::vector<float>  constituent_e;

      // bosons 
      int nTQuarks;
      int nHBosons;
      int nWBosons;
      int nZBosons;

      // VTag
      int Wtag_medium;
      int Ztag_medium;

      int Wtag_tight;
      int Ztag_tight;

      std::unordered_map<std::string, std::vector<xAH::Jet>> trkJets;

      // muonCorrection
      float muonCorrected_pt;
      float muonCorrected_eta;
      float muonCorrected_phi;
      float muonCorrected_m;
    };

}//xAH
#endif // xAODAnaHelpers_Particle_H
