/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostIntervalBuilder : NSObject {
    bool  _buildAnimationCompositeIntervalTimelines;
    bool  _compositeIntervalIsInFlight;
    NSMapTable * _outstandingAnimationStarts;
    NSMutableDictionary * _processwideDictionary;
    NSMutableDictionary * _systemwideDictionary;
    NSMutableDictionary * _threadwideDictionary;
    unsigned long long  _totalCompositeIntervalCount;
}

@property (nonatomic) bool buildAnimationCompositeIntervalTimelines;
@property (nonatomic) bool compositeIntervalIsInFlight;
@property (nonatomic, retain) NSMapTable *outstandingAnimationStarts;
@property (nonatomic, readonly) NSMutableDictionary *processwideDictionary;
@property (nonatomic, readonly) NSMutableDictionary *systemwideDictionary;
@property (nonatomic, readonly) NSMutableDictionary *threadwideDictionary;
@property (nonatomic) unsigned long long totalCompositeIntervalCount;

- (void).cxx_destruct;
- (void)_cleanupState;
- (void)_processCompositeInterval:(id)arg1;
- (bool)_trackBegin:(id)arg1;
- (bool)buildAnimationCompositeIntervalTimelines;
- (bool)compositeIntervalIsInFlight;
- (id)doneProcessing;
- (bool)eventIsCompositeLoopEvent:(id)arg1;
- (id)init;
- (bool)isCompositeLoopSubsystem:(id)arg1 category:(id)arg2;
- (id)matchingEventForEvent:(id)arg1 removeIfFound:(bool)arg2;
- (id)outstandingAnimationStarts;
- (bool)processBeginEvent:(id)arg1;
- (id)processEndEvent:(id)arg1 isAnimation:(bool*)arg2;
- (id)processwideDictionary;
- (void)setBuildAnimationCompositeIntervalTimelines:(bool)arg1;
- (void)setCompositeIntervalIsInFlight:(bool)arg1;
- (void)setOutstandingAnimationStarts:(id)arg1;
- (void)setTotalCompositeIntervalCount:(unsigned long long)arg1;
- (id)systemwideDictionary;
- (id)threadwideDictionary;
- (unsigned long long)totalCompositeIntervalCount;

@end
