/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFlowControl : NSObject {
    double  _budget;
    unsigned long long  _budgetCap;
    NSDate * _lastRegeneration;
    NSError * _lastReportableError;
    double  _maximumThrottleTime;
    double  _regenerationPerSecond;
    double  _totalCost;
    unsigned long long  _totalSamples;
}

@property double budget;
@property unsigned long long budgetCap;
@property (retain) NSDate *lastRegeneration;
@property (nonatomic, retain) NSError *lastReportableError;
@property (nonatomic) double maximumThrottleTime;
@property double regenerationPerSecond;

+ (id)flowControlWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (double)_secondsUntilBudgetLimitationRemovedNoRegen;
- (bool)attemptBudgetedExpenditureWithCost:(double)arg1;
- (double)budget;
- (unsigned long long)budgetCap;
- (id)description;
- (void)expendWithCost:(double)arg1 reportableError:(id)arg2;
- (id)initWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3;
- (bool)isLimited;
- (id)lastRegeneration;
- (id)lastReportableError;
- (double)maximumThrottleTime;
- (void)regenerate;
- (double)regenerationPerSecond;
- (double)secondsUntilBudgetLimitationRemoved;
- (void)setBudget:(double)arg1;
- (void)setBudgetCap:(unsigned long long)arg1;
- (void)setLastRegeneration:(id)arg1;
- (void)setLastReportableError:(id)arg1;
- (void)setMaximumThrottleTime:(double)arg1;
- (void)setRegenerationPerSecond:(double)arg1;

@end
