/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDPowerBudget : NSObject {
    <NSObject> * _batteryObserver;
    bool  _discretionaryWorkInProgress;
    NSDate * _lastPlugInTime;
    NSObject<OS_os_log> * _log;
    _DASScheduler * _scheduler;
    SGDPowerBudgetThrottlingState * _throttlingState;
}

+ (id)defaultBudget;

- (void).cxx_destruct;
- (void)_endDuetBudgetedWork;
- (void)_endThrottleBudgetedWork;
- (void)_endWork;
- (bool)_hasDuetBudgetRemaining;
- (bool)_hasThrottleBudgetRemaining;
- (void)_startDuetBudgetedWork;
- (void)_startThrottleBudgetedWork;
- (void)_startWork;
- (bool)canDoDiscretionaryWork;
- (void)dealloc;
- (void)doDiscretionaryWork:(id /* block */)arg1 orElse:(id /* block */)arg2;
- (id)init;

@end
