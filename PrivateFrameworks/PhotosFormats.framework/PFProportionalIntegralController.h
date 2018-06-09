/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFProportionalIntegralController : NSObject {
    long long  _integralError;
    long long  _integralErrorMax;
    long long  _integralErrorMin;
    double  _integralGain;
    long long  _output;
    long long  _outputMax;
    long long  _outputMin;
    bool  _outputReady;
    double  _proportionalGain;
    long long  _setPoint;
    NSMutableArray * _statistics;
}

@property long long integralError;
@property long long integralErrorMax;
@property long long integralErrorMin;
@property double integralGain;
@property long long output;
@property long long outputMax;
@property long long outputMin;
@property bool outputReady;
@property double proportionalGain;
@property long long setPoint;
@property (retain) NSMutableArray *statistics;

- (void).cxx_destruct;
- (void)addStatisticsSampleForTimestamp:(double)arg1 error:(long long)arg2 feedback:(long long)arg3;
- (void)enumerateStatisticsMeasurementsWithHandler:(id /* block */)arg1;
- (id)initWithSetPoint:(long long)arg1;
- (long long)integralError;
- (long long)integralErrorMax;
- (long long)integralErrorMin;
- (double)integralGain;
- (long long)output;
- (long long)outputMax;
- (long long)outputMin;
- (bool)outputReady;
- (double)proportionalGain;
- (void)setIntegralError:(long long)arg1;
- (void)setIntegralErrorMax:(long long)arg1;
- (void)setIntegralErrorMin:(long long)arg1;
- (void)setIntegralGain:(double)arg1;
- (void)setOutput:(long long)arg1;
- (void)setOutputMax:(long long)arg1;
- (void)setOutputMin:(long long)arg1;
- (void)setOutputReady:(bool)arg1;
- (long long)setPoint;
- (void)setProportionalGain:(double)arg1;
- (void)setSetPoint:(long long)arg1;
- (void)setStatistics:(id)arg1;
- (id)statistics;
- (id)statisticsDescription;
- (void)updateWithTimestamp:(double)arg1 error:(long long)arg2 feedback:(long long)arg3;

@end
