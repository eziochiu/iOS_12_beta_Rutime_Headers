/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUDownloadSession : NSObject {
    NSProgress * _NSProgress;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_group> * _completionGroup;
    <TSUDownloadSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _didFinishInitialization;
    NSError * _error;
    NSObject<OS_dispatch_group> * _initializationGroup;
    bool  _isCancelled;
    double  _lastProgressValue;
    NSURLResponse * _lastResponse;
    TSUDownloadManager * _manager;
    OITSUBasicProgress * _progress;
    NSMutableSet * _remainingTasks;
    NSString * _sessionDescription;
    NSMutableDictionary * _taskProgress;
    long long  _totalBytesDownloaded;
    long long  _totalBytesExpectedToBeDownloaded;
}

@property (nonatomic, readonly) NSProgress *NSProgress;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) OITSUProgress *progress;
@property (nonatomic, readonly) NSString *sessionDescription;
@property (nonatomic, readonly) long long totalBytesDownloaded;
@property (nonatomic, readonly) long long totalBytesExpectedToBeDownloaded;

- (void).cxx_destruct;
- (id)NSProgress;
- (void)cancel;
- (void)cancelRemainingTasksNotifyingDelegate:(bool)arg1;
- (void)dealloc;
- (id)description;
- (void)didFinishInitialization;
- (bool)hasActiveTaskWithDescription:(id)arg1;
- (void)headRequestForDownloadItem:(id)arg1 taskProgress:(id)arg2;
- (id)init;
- (id)initWithManager:(id)arg1 downloadItems:(id)arg2 description:(id)arg3 willRequestDownload:(bool)arg4 delegate:(id)arg5;
- (bool)isActive;
- (bool)isCancelled;
- (id)lastResponse;
- (void)notifyCompletionWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)progress;
- (id)sessionDescription;
- (void)task:(id)arg1 withDescription:(id)arg2 didCompleteWithError:(id)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)task:(id)arg1 withDescription:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (long long)totalBytesDownloaded;
- (long long)totalBytesExpectedToBeDownloaded;
- (void)updateProgressAndNotifyDelegate;
- (void)updateTaskProgress:(id)arg1 withTotalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (id)waitUntilTimeout:(unsigned long long)arg1;

@end
