/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface _CPLScheduledOverride : NSObject {
    unsigned long long  _budget;
    <_CPLScheduledOverrideDelegate> * _delegate;
    NSDate * _endDate;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _storageKey;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) unsigned long long budget;
@property (nonatomic) <_CPLScheduledOverrideDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSString *status;

+ (unsigned long long)_systemBudgetForBudgetKey:(id)arg1;

- (void).cxx_destruct;
- (void)_scheduleEndWithTimeInterval:(double)arg1;
- (unsigned long long)budget;
- (void)cancel;
- (id)delegate;
- (id)initWithBudget:(unsigned long long)arg1 queue:(id)arg2;
- (id)queue;
- (bool)scheduleEndFromPersistedOverride;
- (bool)scheduleEndOfOverride;
- (void)setDelegate:(id)arg1;
- (id)status;

@end
