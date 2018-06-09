/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLResourceAvailabilityManager : NSObject {
    NSManagedObjectContext * _context;
    NSMutableArray * _currentBatch;
    unsigned long long  _currentWorkingMode;
    <PLResourceAvailabilityManagerDelegate> * _delegate;
    NSNumber * _localFootprintBytes;
    long long  _maxConcurrentOperations;
    float  _maxPercentFreeBeforePruneStops;
    float  _minPercentFreeBeforeBeforePrefetchStops;
    float  _minPercentFreeBeforePruneStarts;
    long long  _outstandingOperationsCount;
    unsigned long long  _policy;
}

@property (nonatomic, retain) NSManagedObjectContext *context;
@property (nonatomic, retain) NSMutableArray *currentBatch;
@property (nonatomic) unsigned long long currentWorkingMode;
@property (nonatomic) <PLResourceAvailabilityManagerDelegate> *delegate;
@property (nonatomic, copy) NSNumber *localFootprintBytes;
@property (nonatomic) long long maxConcurrentOperations;
@property (nonatomic) float maxPercentFreeBeforePruneStops;
@property (nonatomic) float minPercentFreeBeforeBeforePrefetchStops;
@property (nonatomic) float minPercentFreeBeforePruneStarts;
@property (nonatomic) long long outstandingOperationsCount;
@property (nonatomic, readonly) float percentFree;
@property (nonatomic) unsigned long long policy;

- (void).cxx_destruct;
- (id)_calculateLocalFootprintBytes;
- (void)_continueWithCurrentBatch;
- (void)_handleCurrentBatchFinished;
- (id)_inc_getNextBatchForLocation:(unsigned long long)arg1 workingMode:(unsigned long long)arg2 limit:(long long)arg3;
- (id)_inc_getNextBatchForWorkingMode:(unsigned long long)arg1;
- (void)_inc_processResource:(id)arg1 forLocation:(unsigned long long)arg2 workingMode:(unsigned long long)arg3;
- (void)_inc_processResource:(id)arg1 workingMode:(unsigned long long)arg2;
- (unsigned long long)_nextValidWorkingModeFromMode:(unsigned long long)arg1;
- (id)context;
- (void)continueWorking;
- (id)currentBatch;
- (unsigned long long)currentWorkingMode;
- (id)delegate;
- (id)initWithContext:(id)arg1;
- (id)localFootprintBytes;
- (long long)maxConcurrentOperations;
- (float)maxPercentFreeBeforePruneStops;
- (float)minPercentFreeBeforeBeforePrefetchStops;
- (float)minPercentFreeBeforePruneStarts;
- (long long)outstandingOperationsCount;
- (float)percentFree;
- (unsigned long long)policy;
- (void)setContext:(id)arg1;
- (void)setCurrentBatch:(id)arg1;
- (void)setCurrentWorkingMode:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalFootprintBytes:(id)arg1;
- (void)setMaxConcurrentOperations:(long long)arg1;
- (void)setMaxPercentFreeBeforePruneStops:(float)arg1;
- (void)setMinPercentFreeBeforeBeforePrefetchStops:(float)arg1;
- (void)setMinPercentFreeBeforePruneStarts:(float)arg1;
- (void)setOutstandingOperationsCount:(long long)arg1;
- (void)setPolicy:(unsigned long long)arg1;

@end
