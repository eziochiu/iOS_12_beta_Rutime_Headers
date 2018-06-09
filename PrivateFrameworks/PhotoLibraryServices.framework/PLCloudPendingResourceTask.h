/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudPendingResourceTask : NSObject {
    bool  _completed;
    bool  _highPriority;
    float  _lastReportedProgress;
    NSDate * _lastUpdated;
    NSMutableDictionary * _pendingTasks;
    bool  _transferStarted;
    CPLResourceTransferTask * _transferTask;
    bool  _transferTaskRemoved;
}

@property (getter=isHighPriority, nonatomic, readonly) bool highPriority;
@property (nonatomic, readonly) float lastReportedProgress;
@property (nonatomic, readonly) bool transferStarted;

- (void)addProgressBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2 withTaskIdentifier:(id)arg3;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithProgressBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2 forTaskIdentifier:(id)arg3 highPriority:(bool)arg4;
- (bool)isHighPriority;
- (void)keepAlive;
- (float)lastReportedProgress;
- (id)lastUpdated;
- (void)reportCompletionWithError:(id)arg1;
- (void)reportProgress:(float)arg1;
- (void)setTransferTask:(id)arg1;
- (id)taskIDs;
- (bool)transferStarted;

@end
