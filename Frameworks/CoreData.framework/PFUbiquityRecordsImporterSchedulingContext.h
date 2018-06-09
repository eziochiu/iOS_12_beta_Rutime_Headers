/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityRecordsImporterSchedulingContext : NSObject {
    NSMutableSet * _failedLogLocations;
    NSMutableSet * _ignoredLogLocations;
    int  _lock;
    NSMutableDictionary * _logLocationsToEncounteredErrors;
    NSMutableSet * _pendingLogLocations;
    NSMutableSet * _scheduledLogLocations;
}

@property (nonatomic, readonly) NSSet *failedLogLocations;
@property (nonatomic, readonly) NSSet *ignoredLogLocations;
@property (nonatomic, readonly) NSDictionary *logLocationsToEncounteredErrors;
@property (nonatomic, readonly) NSSet *pendingLogLocations;
@property (nonatomic, readonly) NSSet *scheduledLogLocations;

- (void)addPendingLogLocation:(id)arg1;
- (void)addPendingLogLocations:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)failedLogLocations;
- (void)failedTransactionLogAtLocationRecovered:(id)arg1;
- (id)ignoredLogLocations;
- (id)init;
- (id)initWithPendingLogLocations:(id)arg1;
- (id)logLocationsToEncounteredErrors;
- (id)pendingLogLocations;
- (id)scheduledLogLocations;
- (void)transactionLogAtLocation:(id)arg1 failedToOpenWithError:(id)arg2;
- (void)transactionLogAtLocationWasIgnored:(id)arg1;
- (void)transactionLogAtLocationWasScheduled:(id)arg1;
- (void)unionWithSchedulingContext:(id)arg1;

@end
