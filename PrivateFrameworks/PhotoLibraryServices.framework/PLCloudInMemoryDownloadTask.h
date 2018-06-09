/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudInMemoryDownloadTask : NSObject {
    bool  _completed;
    NSString * _resourceID;
    NSMapTable * _taskIDsToCompletionHandlers;
    CPLResourceTransferTask * _transferTask;
}

@property (getter=isCompleted, nonatomic, readonly) bool completed;
@property (nonatomic, readonly, copy) NSString *resourceID;
@property (nonatomic, readonly) NSArray *taskIDs;
@property (nonatomic, retain) CPLResourceTransferTask *transferTask;

- (void)addClientWithTaskID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelClientWithTaskID:(id)arg1;
- (void)dealloc;
- (id)initWithResourceID:(id)arg1 taskID:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)isCompleted;
- (void)reportCompletionWithData:(id)arg1 error:(id)arg2;
- (id)resourceID;
- (void)setTransferTask:(id)arg1;
- (id)taskIDs;
- (id)transferTask;

@end
