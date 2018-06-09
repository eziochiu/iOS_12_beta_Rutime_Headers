/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask {
    NSString * _activeQueuesStatusAtEnqueingTime;
    id /* block */  _cancelHandler;
    bool  _cancelledByEngine;
    NSString * _clientBundleID;
    CPLResource * _cloudResource;
    id /* block */  _completionHandler;
    id /* block */  _didStartHandler;
    id /* block */  _launchHandler;
    unsigned long long  _preemptingCount;
    id /* block */  _progressHandler;
    NSMutableArray * _stateProgressDates;
    unsigned long long  _taskIdentifierForQueue;
    NSString * _transportIdentifier;
    NSData * _transportScope;
    <CPLEngineTransportResourcesDownloadTask> * _transportTask;
}

@property (nonatomic, readonly) id /* block */ cancelHandler;
@property (getter=isCancelledByEngine, nonatomic) bool cancelledByEngine;
@property (nonatomic, retain) NSString *clientBundleID;
@property (nonatomic, retain) CPLResource *cloudResource;
@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly) id /* block */ didStartHandler;
@property (nonatomic, readonly) id /* block */ launchHandler;
@property (nonatomic, readonly) id /* block */ progressHandler;
@property (nonatomic) unsigned long long taskIdentifierForQueue;
@property (nonatomic, copy) NSString *transportIdentifier;
@property (nonatomic, retain) NSData *transportScope;
@property (nonatomic) <CPLEngineTransportResourcesDownloadTask> *transportTask;
@property (nonatomic, readonly) bool willGenerateReport;

+ (void)initialize;
+ (unsigned long long)maximumResourceDownloadSizeForResourceType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id /* block */)cancelHandler;
- (void)cancelTask;
- (id)clientBundleID;
- (id)cloudResource;
- (id /* block */)completionHandler;
- (id /* block */)didStartHandler;
- (id)initWithLaunchHandler:(id /* block */)arg1 cancelHandler:(id /* block */)arg2 didStartHandler:(id /* block */)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (bool)isCancelledByEngine;
- (void)launch;
- (id /* block */)launchHandler;
- (void)noteActiveQueuesStatusAtEnqueingTime:(id)arg1;
- (void)noteStateDidProgress:(unsigned long long)arg1;
- (void)noteTaskHasBeenPreempted;
- (id /* block */)progressHandler;
- (void)setCancelledByEngine:(bool)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setCloudResource:(id)arg1;
- (void)setTaskIdentifierForQueue:(unsigned long long)arg1;
- (void)setTransportIdentifier:(id)arg1;
- (void)setTransportScope:(id)arg1;
- (void)setTransportTask:(id)arg1;
- (unsigned long long)taskIdentifierForQueue;
- (id)transportIdentifier;
- (id)transportScope;
- (id)transportTask;
- (bool)willGenerateReport;

@end