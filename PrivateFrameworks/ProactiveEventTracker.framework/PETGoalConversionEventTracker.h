/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@interface PETGoalConversionEventTracker : PETEventTracker {
    NSString * _conversionEvent;
    NSString * _opportunityEvent;
}

@property (nonatomic, readonly) NSString *conversionEvent;
@property (nonatomic, readonly) NSString *opportunityEvent;

- (void).cxx_destruct;
- (id)_keyMetadataForEvent:(id)arg1;
- (void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;
- (id)conversionEvent;
- (id)initWithFeatureId:(id)arg1 opportunityEvent:(id)arg2 conversionEvent:(id)arg3 registerProperties:(id)arg4;
- (id)initWithFeatureId:(id)arg1 opportunityEvent:(id)arg2 conversionEvent:(id)arg3 registerProperties:(id)arg4 propertySubsets:(id)arg5;
- (id)opportunityEvent;
- (void)trackGoalConversionEventWithPropertyValues:(id)arg1;
- (void)trackGoalOpportunityEventWithConversion:(bool)arg1 propertyValues:(id)arg2;
- (void)trackGoalOpportunityEventWithPropertyValues:(id)arg1;

@end
