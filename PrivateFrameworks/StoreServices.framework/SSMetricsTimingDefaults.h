/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsTimingDefaults : NSObject {
    NSDictionary * _cachedValues;
    bool  _runningTests;
    SSCoalescingQueue * _updateQueue;
}

@property (nonatomic, retain) NSDictionary *cachedValues;
@property (getter=isRunningTests, nonatomic) bool runningTests;
@property (readonly) double samplingPercentageCachedResponsesLoadURL;
@property (readonly) double samplingPercentageUsersLoadURL;
@property (readonly) double samplingPercentageUsersPageRender;
@property (readonly) double sessionDurationLoadURL;
@property (readonly) double sessionDurationPageRender;
@property (nonatomic, retain) SSCoalescingQueue *updateQueue;
@property (readonly) NSDictionary *values;

+ (id)sharedInstance;
+ (id)sharedInstanceWithSessionDelegate:(id)arg1;

- (void).cxx_destruct;
- (id)cachedValues;
- (id)initWithSessionDelegate:(id)arg1;
- (bool)isRunningTests;
- (double)samplingPercentageCachedResponsesLoadURL;
- (double)samplingPercentageUsersLoadURL;
- (double)samplingPercentageUsersPageRender;
- (double)sessionDurationLoadURL;
- (double)sessionDurationPageRender;
- (void)setCachedValues:(id)arg1;
- (void)setRunningTests:(bool)arg1;
- (void)setUpdateQueue:(id)arg1;
- (void)update;
- (id)updateQueue;
- (id)values;

@end
