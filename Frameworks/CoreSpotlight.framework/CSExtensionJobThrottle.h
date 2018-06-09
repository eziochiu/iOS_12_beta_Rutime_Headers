/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSExtensionJobThrottle : NSObject {
    NSMutableDictionary * _countersByBundleID;
    unsigned long long  _maxRetryCount;
    unsigned long long  _maxSecondsBetweenRetries;
    unsigned long long  _maxSecondsBetweenRetriesUnderMemoryPressure;
    unsigned long long  _minSecondsBetweenRetries;
    unsigned long long  _minSecondsBetweenRetriesUnderMemoryPressure;
}

@property (nonatomic, retain) NSMutableDictionary *countersByBundleID;
@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) unsigned long long maxSecondsBetweenRetries;
@property (nonatomic) unsigned long long maxSecondsBetweenRetriesUnderMemoryPressure;
@property (nonatomic) unsigned long long minSecondsBetweenRetries;
@property (nonatomic) unsigned long long minSecondsBetweenRetriesUnderMemoryPressure;

- (void).cxx_destruct;
- (id)countersByBundleID;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)maxRetryCount;
- (unsigned long long)maxSecondsBetweenRetries;
- (unsigned long long)maxSecondsBetweenRetriesUnderMemoryPressure;
- (unsigned long long)minSecondsBetweenRetries;
- (unsigned long long)minSecondsBetweenRetriesUnderMemoryPressure;
- (long long)nextDispatchTimeDeltaForExtension:(id)arg1 job:(id)arg2 memoryPressure:(bool)arg3;
- (void)setCountersByBundleID:(id)arg1;
- (void)setMaxRetryCount:(unsigned long long)arg1;
- (void)setMaxSecondsBetweenRetries:(unsigned long long)arg1;
- (void)setMaxSecondsBetweenRetriesUnderMemoryPressure:(unsigned long long)arg1;
- (void)setMinSecondsBetweenRetries:(unsigned long long)arg1;
- (void)setMinSecondsBetweenRetriesUnderMemoryPressure:(unsigned long long)arg1;

@end
