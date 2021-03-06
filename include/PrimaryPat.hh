//
// Created by idalov on 10.05.17.
//

#ifndef FINAL_PRIMARYPAT_HH
#define FINAL_PRIMARYPAT_HH

#include <G4VUserPrimaryGeneratorAction.hh>
#include <G4ParticleGun.hh>

class PrimaryPat: public G4VUserPrimaryGeneratorAction{
private:
    G4ParticleGun* gun;
public:
    PrimaryPat();
    ~PrimaryPat();
    virtual void GeneratePrimaries(G4Event* anEvent);
};
#endif //FINAL_PRIMARYPAT_HH
