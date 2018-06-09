/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFlowControlManager : NSObject {
    unsigned long long  _defaultBudget;
    double  _defaultRegeneration;
    double  _maximumThrottleTime;
    NSMutableDictionary * _operationFlowControls;
}

@property (nonatomic) unsigned long long defaultBudget;
@property (nonatomic) double defaultRegeneration;
@property double maximumThrottleTime;
@property (nonatomic, retain) NSMutableDictionary *operationFlowControls;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)CKStatusReportArray;
- (id)_flowControlForOperation:(id)arg1;
- (id)_flowControlForOperation:(id)arg1 createIfNecessary:(bool)arg2;
- (bool)checkFlowControlIsLimited:(id)arg1 outReportableError:(id*)arg2;
- (double)currentBudget:(id)arg1;
- (unsigned long long)currentBudgetCap:(id)arg1;
- (double)currentRegeneration:(id)arg1;
- (unsigned long long)defaultBudget;
- (double)defaultRegeneration;
- (id)description;
- (bool)hasStatusToReport;
- (id)initWithDefaultBudget:(unsigned long long)arg1 maximumThrottleTime:(double)arg2 andDefaultRegeneration:(double)arg3;
- (double)maximumThrottleTime;
- (id)operationFlowControls;
- (double)secondsUntilFlowControlNotLimited:(id)arg1;
- (void)setDefaultBudget:(unsigned long long)arg1;
- (void)setDefaultRegeneration:(double)arg1;
- (void)setMaximumThrottleTime:(double)arg1;
- (void)setOperationFlowControls:(id)arg1;
- (void)updateFlowControl:(id)arg1 withCost:(unsigned long long)arg2 reportableError:(id)arg3;
- (void)updateFlowControl:(id)arg1 withRetryAfter:(unsigned long long)arg2 reportableError:(id)arg3;
- (void)updateFlowControlForOperation:(id)arg1 reportableError:(id)arg2;

@end
