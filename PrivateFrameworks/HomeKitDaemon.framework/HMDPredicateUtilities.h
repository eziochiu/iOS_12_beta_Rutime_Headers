/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPredicateUtilities : HMFObject <HMFLogging> {
    HMDHome * _home;
    NSString * _logString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHome *home;
@property (nonatomic, readonly) NSString *logString;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)addDeltaToNow:(id)arg1;
- (id)comparePresence:(id)arg1 operatorType:(id)arg2 homePresence:(id)arg3;
- (id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3;
- (bool)containsPresenceEvents:(id)arg1;
- (id)dateTodayMatchingComponents:(id)arg1;
- (void)fillMetric:(id)arg1 forPredicate:(id)arg2;
- (id)home;
- (id)initWithHome:(id)arg1 logIdentifier:(id)arg2;
- (id)logIdentifier;
- (id)logString;
- (id)metricFor:(id)arg1;
- (id)rewriteNowAdjustedForHomeTimeZone:(id)arg1;
- (id)rewritePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 characteristicsToRead:(id)arg3 homePresence:(id)arg4;
- (id)rewritePredicate:(id)arg1 forDaemon:(bool)arg2 message:(id)arg3;
- (id)rewritePredicateForClient:(id)arg1;
- (id)rewritePredicateForDaemon:(id)arg1 message:(id)arg2;
- (id)sunrise;
- (id)sunset;
- (id)updatePredicate:(id)arg1 currentCharacteristicInPredicate:(id*)arg2 conditionModified:(bool*)arg3 removedCharacteristic:(id)arg4 underService:(id)arg5 underAccessory:(id)arg6;
- (id)updatePredicate:(id)arg1 removedUser:(id)arg2 conditionModified:(bool*)arg3;

@end
