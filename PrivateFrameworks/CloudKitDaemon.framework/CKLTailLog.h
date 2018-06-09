/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKLTailLog : OSActivityStream <OSActivityStreamDelegate, OSLogPersistenceDelegate> {
    OSActivityStream * _activityStream;
    bool  _continueToReturnResults;
    OSLogPersistence * _logPersistence;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _results;
    bool  _stillReadingFromArchive;
}

@property (nonatomic, retain) OSActivityStream *activityStream;
@property (nonatomic) bool continueToReturnResults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) OSLogPersistence *logPersistence;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic) bool stillReadingFromArchive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityStream;
- (bool)activityStream:(id)arg1 results:(id)arg2;
- (bool)continueToReturnResults;
- (void)fetchFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (id)init;
- (id)logPersistence;
- (bool)persistence:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)persistenceDidFinishReadingForStartDate:(id)arg1 endDate:(id)arg2;
- (id)queue;
- (id)results;
- (void)setActivityStream:(id)arg1;
- (void)setContinueToReturnResults:(bool)arg1;
- (void)setLogPersistence:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setStillReadingFromArchive:(bool)arg1;
- (void)start;
- (void)startFromStartDate:(id)arg1;
- (bool)stillReadingFromArchive;
- (void)stop;
- (void)streamDidFail:(id)arg1 error:(id)arg2;
- (void)streamDidStop:(id)arg1;

@end
