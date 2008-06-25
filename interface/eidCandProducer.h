#ifndef MuonAnalysis_TagAndProbe_eidCandProducer_h
#define MuonAnalysis_TagAndProbe_eidCandProducer_h

// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"


// forward declarations

class eidCandProducer : public edm::EDProducer 
{
 public:
  explicit eidCandProducer(const edm::ParameterSet&);
  ~eidCandProducer();

 private:
  virtual void beginJob(const edm::EventSetup&) ;
  virtual void produce(edm::Event&, const edm::EventSetup&);
  virtual void endJob() ;
      
  // ----------member data ---------------------------
      
  std::string _inputProducer;
  std::string _electronIDAssocProducer;
};

#endif