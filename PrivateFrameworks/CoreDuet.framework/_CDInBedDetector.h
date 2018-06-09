/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDInBedDetector : NSObject {
    <_DKKnowledgeQuerying> * _knowledge;
    unsigned long long  _method;
}

@property (retain) <_DKKnowledgeQuerying> *knowledge;
@property unsigned long long method;

+ (id)inBedDetector;
+ (id)inBedDetectorWithKnowledge:(id)arg1;
+ (id)inBedDetectorWithKnowledge:(id)arg1 method:(unsigned long long)arg2;
+ (id)simpleLockBasedInBedDetector;

- (void).cxx_destruct;
- (struct NSArray { Class x1; }*)detectInBedBetweenBedtimeDate:(id)arg1 wakupDate:(id)arg2 error:(id*)arg3;
- (struct NSArray { Class x1; }*)detectInBedWithPolicyV1BetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (id)findDateIntervalOfEventInStream:(id)arg1 datePredicate:(id)arg2 valuePredicate:(id)arg3 sortDescriptor:(id)arg4 error:(id*)arg5;
- (id)findLastTimeDeviceWasLockedBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (id)findLastTimeDeviceWasPluggedInBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (id)findLatestEndOfWalkingActivityBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (id)initWithKnowledge:(id)arg1 method:(unsigned long long)arg2;
- (id)knowledge;
- (struct NSArray { Class x1; }*)lockedTimesBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (unsigned long long)method;
- (void)setKnowledge:(id)arg1;
- (void)setMethod:(unsigned long long)arg1;

@end
