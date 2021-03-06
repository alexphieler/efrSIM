#include <Simulation/Solids/wheelRL.h>
#include <Simulation/solids/Moduls/MFTModul.h>

WheelRL::WheelRL():
         WheelBase(    Data::instance().wheelRL_sx,
                       Data::instance().wheelRL_sy,
                       Data::instance().wheelRL_sz,
                       Data::instance().wheelRLMassRim,
                       Data::instance().wheelRLMassTyre,
                       Data::instance().wheelRLMassMotorAssembly,
                       Data::instance().wheelSusRLMass,
                       Data::instance().wheelSusRL_sx,
                       Data::instance().wheelSusRL_sy,
                       Data::instance().wheelSusRL_sz,
                       Data::instance().wheelRL_JTyreX,
                       Data::instance().wheelRL_JTyreY,
                       Data::instance().wheelRL_JTyreZ,
                       Data::instance().wheelRL_JRimX,
                       Data::instance().wheelRL_JRimY,
                       Data::instance().wheelRL_JRimZ,
                       Data::instance().wheelRL_JRotorTransmissionX,
                       Data::instance().wheelRL_JRotorTransmissionY,
                       Data::instance().wheelRL_JRotorTransmissionZ,
                       Data::instance().wheelRL_dMotorAssemblyX,
                       Data::instance().wheelRL_dMotorAssemblyY,
                       Data::instance().wheelRL_dMotorAssemblyZ,
                       Data::instance().wheelRLPosX,
                       Data::instance().wheelRLPosY,
                       Data::instance().wheelRLPosZ,
                       Data::instance().wheelRLVeloX,
                       Data::instance().wheelRLVeloY,
                       Data::instance().wheelRLVeloZ,
                       Data::instance().wheelRLAccelX,
                       Data::instance().wheelRLAccelY,
                       Data::instance().wheelRLAccelZ,
                       Data::instance().wheelRLAngularVeloX,
                       Data::instance().wheelRLAngularVeloY,
                       Data::instance().wheelRLAngularVeloZ,
                       Data::instance().wheelRLAngularAccelX,
                       Data::instance().wheelRLAngularAccelY,
                       Data::instance().wheelRLAngularAccelZ,
                       Data::instance().wheelRLEulerX,
                       Data::instance().wheelRLEulerY,
                       Data::instance().wheelRLEulerZ,
                       Data::instance().wheelRL_mass,
                       Data::instance().wheelRL_MOIX,
                       Data::instance().wheelRL_MOIY,
                       Data::instance().wheelRL_MOIZ,
                       Data::instance().wheelRL_energy,
                       Data::instance().wheelRL_Fz,
                       Data::instance().wheelRL_Fx,
                       Data::instance().wheelRL_k,
                       Data::instance().wheelRL_ux,
                       Data::instance().wheelRLMrollingResistanceY,
                       Data::instance().wheelRLMoverturningCoupleX,
                       Data::instance().wheelSusRLForceX,
                       Data::instance().wheelSusRLForceY,
                       Data::instance().wheelSusRLForceZ,
                       Data::instance().wheelSusRLTorqueX,
                       Data::instance().wheelSusRLTorqueY,
                       Data::instance().wheelSusRLTorqueZ,
                       Data::instance().torqueMotorRL)
{
}

