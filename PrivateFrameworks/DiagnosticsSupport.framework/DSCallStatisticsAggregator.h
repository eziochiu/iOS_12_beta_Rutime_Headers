/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSCallStatisticsAggregator : NSObject {
    struct { 
        int droppedCallCount; 
        int droppedWiFiCallCount; 
        int droppedVoLTECallCount; 
        int placedCallCount; 
        int deviceDroppedCallCount; 
    }  _accumulated;
    NSMutableArray * _callLog;
    bool  _cancelled;
    bool  _futureDateDetected;
    bool  _generationComplete;
    NSCondition * _generationLock;
    long long  _missingDaysRemaining;
    bool  _outOfOrderDateDetected;
    NSDate * _referenceDate;
    struct { 
        int droppedCallCount; 
        int droppedWiFiCallCount; 
        int droppedVoLTECallCount; 
        int placedCallCount; 
        int deviceDroppedCallCount; 
    }  _totals;
}

@property (nonatomic, retain) NSMutableArray *callLog;
@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic) bool futureDateDetected;
@property (nonatomic) bool generationComplete;
@property (nonatomic, retain) NSCondition *generationLock;
@property (nonatomic) long long missingDaysRemaining;
@property (nonatomic) bool outOfOrderDateDetected;
@property (nonatomic, readonly) NSDate *referenceDate;

- (void).cxx_destruct;
- (void)_fillCallLogWithMissingDays:(long long)arg1 fromDate:(id)arg2;
- (void)_flushAccumulatedLogDataWithDate:(id)arg1;
- (id)_getAndValidateDateFromLogLine:(id)arg1;
- (long long)_getDaysBetween:(id)arg1 and:(id)arg2;
- (bool)_isDateInRange:(id)arg1;
- (void)_resetAccumulator;
- (void)beginAggregation;
- (id)callLog;
- (void)cancel;
- (bool)futureDateDetected;
- (bool)generationComplete;
- (id)generationLock;
- (id)getSynchronousResult;
- (id)init;
- (bool)isCancelled;
- (long long)missingDaysRemaining;
- (bool)outOfOrderDateDetected;
- (id)referenceDate;
- (void)setCallLog:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setFutureDateDetected:(bool)arg1;
- (void)setGenerationComplete:(bool)arg1;
- (void)setGenerationLock:(id)arg1;
- (void)setMissingDaysRemaining:(long long)arg1;
- (void)setOutOfOrderDateDetected:(bool)arg1;

@end
