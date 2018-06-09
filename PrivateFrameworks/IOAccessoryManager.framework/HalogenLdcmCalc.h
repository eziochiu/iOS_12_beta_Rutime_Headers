/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
 */

@interface HalogenLdcmCalc : NSObject {
    double  _adcGain;
    double  _capacitanceInNanoF;
    int  _clipDetectWindowSize;
    double  _clippingScore;
    double  _compensatedImpedance;
    double  _compensatedPhase;
    double  _currentGainCorrection;
    double  _currentPhaseCompensation;
    NSMutableData * _diffDataBuff;
    int  _diffDataBuffSize;
    int  _diffWindowSize;
    NSMutableData * _filterDataBuff;
    int  _filterDataBuffSize;
    double  _goertzelImpedance;
    double  _goertzelPhase;
    double  _hydraImpedance;
    double  _hydraR;
    double  _isWetCapacitiveThreshNf;
    double  _ldcmAcCap;
    double  _movesumClipThreshold;
    int  _nSamples;
    double  _resistanceInOhms;
    double  _sampleRate;
    double  _sanitycheckImpedanceLowerbound;
    double  _sanitycheckImpedanceUpperbound;
    double  _sanitycheckPhaseLowerbound;
    double  _sanitycheckPhaseUperbound;
    NSMutableData * _scoreDataBuff;
    int  _scoreDataBuffSize;
    double  _signalFrequency;
    int  _sizeofSample;
    double  _tiaGain;
    double  _voltageGainCorrection;
}

@property double adcGain;
@property (readonly) double capacitanceInNanoF;
@property int clipDetectWindowSize;
@property (readonly) double clippingScore;
@property (readonly) double compensatedImpedance;
@property (readonly) double compensatedPhase;
@property (readonly) double currentGainCorrection;
@property (readonly) double currentPhaseCompensation;
@property NSMutableData *diffDataBuff;
@property int diffDataBuffSize;
@property int diffWindowSize;
@property NSMutableData *filterDataBuff;
@property int filterDataBuffSize;
@property (readonly) double goertzelImpedance;
@property (readonly) double goertzelPhase;
@property double hydraImpedance;
@property double hydraR;
@property double isWetCapacitiveThreshNf;
@property double ldcmAcCap;
@property double movesumClipThreshold;
@property int nSamples;
@property (readonly) double resistanceInOhms;
@property double sampleRate;
@property double sanitycheckImpedanceLowerbound;
@property double sanitycheckImpedanceUpperbound;
@property double sanitycheckPhaseLowerbound;
@property double sanitycheckPhaseUperbound;
@property NSMutableData *scoreDataBuff;
@property int scoreDataBuffSize;
@property double signalFrequency;
@property int sizeofSample;
@property double tiaGain;
@property (readonly) double voltageGainCorrection;

- (bool)_allocBuffers;
- (void)_applyFractionalPhaseShift:(id)arg1 withPhaseDelay:(double)arg2;
- (void)_applyGain:(double)arg1 toData:(id)arg2;
- (void)_applyHanningWindow:(id)arg1;
- (void)_applyTiaGain:(id)arg1 toCurrentData:(id)arg2;
- (void)_doHydraComp:(double)arg1 withPhase:(double)arg2;
- (void)_freeBuffers;
- (void)_goertzelSecondOrder:(id)arg1 hasFftValue:(double*)arg2 hasPhase:(double*)arg3;
- (bool)_isClipped:(id)arg1;
- (void)_rcSolver;
- (double)adcGain;
- (double)capacitanceInNanoF;
- (int)clipDetectWindowSize;
- (double)clippingScore;
- (double)compensatedImpedance;
- (double)compensatedPhase;
- (double)currentGainCorrection;
- (double)currentPhaseCompensation;
- (void)dealloc;
- (id)diffDataBuff;
- (int)diffDataBuffSize;
- (int)diffWindowSize;
- (void)doCalibration:(id)arg1 withCurrentData:(id)arg2;
- (int)doLiquidDetection:(id)arg1 withCurrentData:(id)arg2;
- (id)filterDataBuff;
- (int)filterDataBuffSize;
- (double)goertzelImpedance;
- (double)goertzelPhase;
- (double)hydraImpedance;
- (double)hydraR;
- (id)initWithSize:(int)arg1;
- (double)isWetCapacitiveThreshNf;
- (double)ldcmAcCap;
- (double)movesumClipThreshold;
- (int)nSamples;
- (double)resistanceInOhms;
- (double)sampleRate;
- (double)sanitycheckImpedanceLowerbound;
- (double)sanitycheckImpedanceUpperbound;
- (double)sanitycheckPhaseLowerbound;
- (double)sanitycheckPhaseUperbound;
- (id)scoreDataBuff;
- (int)scoreDataBuffSize;
- (void)setAdcGain:(double)arg1;
- (void)setClipDetectWindowSize:(int)arg1;
- (void)setDiffDataBuff:(id)arg1;
- (void)setDiffDataBuffSize:(int)arg1;
- (void)setDiffWindowSize:(int)arg1;
- (void)setFilterDataBuff:(id)arg1;
- (void)setFilterDataBuffSize:(int)arg1;
- (void)setHydraImpedance:(double)arg1;
- (void)setHydraR:(double)arg1;
- (void)setIsWetCapacitiveThreshNf:(double)arg1;
- (void)setLdcmAcCap:(double)arg1;
- (void)setMovesumClipThreshold:(double)arg1;
- (void)setNSamples:(int)arg1;
- (void)setSampleRate:(double)arg1;
- (void)setSanitycheckImpedanceLowerbound:(double)arg1;
- (void)setSanitycheckImpedanceUpperbound:(double)arg1;
- (void)setSanitycheckPhaseLowerbound:(double)arg1;
- (void)setSanitycheckPhaseUperbound:(double)arg1;
- (void)setScoreDataBuff:(id)arg1;
- (void)setScoreDataBuffSize:(int)arg1;
- (void)setSignalFrequency:(double)arg1;
- (void)setSizeofSample:(int)arg1;
- (void)setTiaGain:(double)arg1;
- (double)signalFrequency;
- (int)sizeofSample;
- (double)tiaGain;
- (double)voltageGainCorrection;

@end
