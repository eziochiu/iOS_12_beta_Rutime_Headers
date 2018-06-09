/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

@interface _DASBudgetModulator : NSObject {
    NSArray * _budgets;
    NSDate * _lastModulationDate;
    NSDate * _lastUsageTimelineUpdate;
    NSObject<OS_os_log> * _log;
    <_DASBudgetPersisting> * _persistence;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _timer;
    _DKPredictionTimeline * _usage;
}

@property (nonatomic, retain) NSArray *budgets;
@property (nonatomic, retain) NSDate *lastModulationDate;
@property (nonatomic, retain) NSDate *lastUsageTimelineUpdate;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) <_DASBudgetPersisting> *persistence;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, retain) _DKPredictionTimeline *usage;

+ (id)modulatorWithBudgets:(id)arg1 persistence:(id)arg2;

- (void).cxx_destruct;
- (void)_queue_modulateBudgets;
- (id)budgets;
- (id)initWithBudgets:(id)arg1 persistence:(id)arg2;
- (id)lastModulationDate;
- (id)lastUsageTimelineUpdate;
- (id)log;
- (int)numberOfModulationFromDate:(id)arg1 toDate:(id)arg2;
- (id)persistence;
- (id)queue;
- (double)relativeUsageAtDate:(id)arg1 withTimeline:(id)arg2;
- (void)setBudgets:(id)arg1;
- (void)setLastModulationDate:(id)arg1;
- (void)setLastUsageTimelineUpdate:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setUsage:(id)arg1;
- (id)timer;
- (id)usage;
- (id)usageTimeline;

@end
