/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLAWDLogisticRegTrackerMock : PMLProtoBufTracker {
    PMLTrackerMockAdapter * _adapter;
}

@property (readonly) NSArray *trackedGradients;
@property (readonly) NSArray *trackedWeights;

+ (id)mockTracker;
+ (id)mockTrackerForPlanId:(struct NSString { Class x1; }*)arg1;

- (void).cxx_destruct;
- (void)clearTrackedMessages;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;
- (id)initWithModel:(id)arg1;
- (id)trackedGradients;
- (id)trackedWeights;

@end
