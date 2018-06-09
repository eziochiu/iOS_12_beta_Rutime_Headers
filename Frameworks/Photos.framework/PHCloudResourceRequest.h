/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCloudResourceRequest : NSOperation {
    unsigned long long  _cloudResourceType;
    bool  _completed;
    PLCPLDownloadContext * _downloadContext;
    NSObject<OS_dispatch_semaphore> * _downloadFinishedSemaphore;
    bool  _downloadIsTransient;
    NSError * _error;
    double  _lastProgress;
    NSManagedObjectID * _objectID;
    id /* block */  _progressHandler;
    NSString * _proposedTaskIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    int  _requestID;
    NSData * _transientResourceData;
}

@property (nonatomic, readonly) unsigned long long cloudResourceType;
@property (nonatomic, readonly) NSString *cplTaskIdentifier;
@property (nonatomic, readonly) bool downloadIsTransient;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly) int requestID;
@property (nonatomic, readonly) NSData *transientResourceData;

- (void).cxx_destruct;
- (void)_onQueueAsync:(id /* block */)arg1;
- (void)_onQueueSync:(id /* block */)arg1;
- (void)_updateResourceRequestStatusForStatusChangeWithUserInfo:(id)arg1 connectionWasLost:(bool)arg2;
- (void)cancel;
- (unsigned long long)cloudResourceType;
- (id)cplTaskIdentifier;
- (bool)downloadIsTransient;
- (id)error;
- (id)initWithRequestID:(int)arg1 cloudResourceType:(unsigned long long)arg2 managedObjectID:(id)arg3 downloadIsTransient:(bool)arg4 progressHandler:(id /* block */)arg5;
- (void)main;
- (id)objectID;
- (int)requestID;
- (id)transientResourceData;
- (void)updateResourceRequestStatusForLostConnection;
- (void)updateResourceRequestStatusForStatusChangeWithUserInfo:(id)arg1;

@end
