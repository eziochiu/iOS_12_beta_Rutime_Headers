/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioPowerMeter : NSObject {
    int  _averagePowerI;
    double  _averagePowerPeak;
    double  _decay;
    double  _decay1;
    bool  _instantaneousMode;
    double  _maxPeak;
    double  _peak;
    double  _peakDecay;
    double  _peakDecay1;
    int  _peakHoldCount;
    int  _previousBlockSize;
    double  _sampleRate;
}

- (double)_ampToDB:(double)arg1;
- (double)_linearToDB:(double)arg1;
- (void)_reset;
- (void)_savePeaks:(int)arg1 averagePower:(int)arg2 maxSample:(int)arg3;
- (void)_scaleDecayConstants:(int)arg1;
- (double)getAveragePowerDB;
- (double)getPeakPowerDB;
- (id)initWithSampleRate:(float)arg1;
- (void)process:(const short*)arg1 stride:(int)arg2 inFrameToProcess:(int)arg3;
- (void)reset;

@end
