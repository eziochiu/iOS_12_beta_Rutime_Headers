/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTPredictedLocationOfInterest : NSObject <NSSecureCoding> {
    double  _confidence;
    RTLocationOfInterest * _locationOfInterest;
    long long  _modeOfTransportation;
    NSDate * _nextEntryTime;
    RTReceipt * _receipt;
    RTSource * _source;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) RTLocationOfInterest *locationOfInterest;
@property (nonatomic) long long modeOfTransportation;
@property (nonatomic, readonly) NSDate *nextEntryTime;
@property (nonatomic, retain) RTReceipt *receipt;
@property (nonatomic, readonly) RTSource *source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationOfInterest:(id)arg1 confidence:(double)arg2 nextEntryTime:(id)arg3 modeOfTransportation:(long long)arg4 source:(id)arg5;
- (id)initWithLocationOfInterest:(id)arg1 confidence:(double)arg2 nextEntryTime:(id)arg3 modeOfTransportation:(long long)arg4 source:(id)arg5 receipt:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)locationOfInterest;
- (long long)modeOfTransportation;
- (id)nextEntryTime;
- (id)receipt;
- (void)setConfidence:(double)arg1;
- (void)setModeOfTransportation:(long long)arg1;
- (void)setReceipt:(id)arg1;
- (id)source;

@end
