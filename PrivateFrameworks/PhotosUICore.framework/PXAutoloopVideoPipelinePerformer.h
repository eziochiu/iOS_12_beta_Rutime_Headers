/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAutoloopVideoPipelinePerformer : NSObject <PXAutoloopVideoTaskDelegate> {
    id /* block */  __internalQueue_currentResultHandler;
    PXAutoloopVideoTask * __internalQueue_currentTask;
    long long  __internalQueue_currentTaskIndex;
    PXAutoloopVideoInput * __internalQueue_input;
    PXAutoloopVideoRecipe * __internalQueue_outputRecipe;
    AVAsset * __internalQueue_outputVideo;
    NSArray * __internalQueue_taskQueue;
    AVAsset * _asset;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    void * _ivarQueueIdentifier;
    <PXAutoloopVideoPipelinePerformerDelegate> * _ivarQueue_delegate;
    struct { 
        bool respondsToProgressDidChange; 
        bool respondsToStatusDidChange; 
    }  _ivarQueue_delegateFlags;
    double  _ivarQueue_progress;
    long long  _ivarQueue_status;
    PXAutoloopVideoRecipe * _recipe;
}

@property (setter=_internalQueue_setCurrentResultHandler:, nonatomic, copy) id /* block */ _internalQueue_currentResultHandler;
@property (setter=_internalQueue_setCurrentTask:, nonatomic, retain) PXAutoloopVideoTask *_internalQueue_currentTask;
@property (setter=_internalQueue_setCurrentTaskIndex:, nonatomic) long long _internalQueue_currentTaskIndex;
@property (setter=_internalQueue_setInput:, nonatomic, retain) PXAutoloopVideoInput *_internalQueue_input;
@property (setter=_internalQueue_setOutputRecipe:, nonatomic, retain) PXAutoloopVideoRecipe *_internalQueue_outputRecipe;
@property (setter=_internalQueue_setOutputVideo:, nonatomic, copy) AVAsset *_internalQueue_outputVideo;
@property (setter=_internalQueue_setTaskQueue:, nonatomic, copy) NSArray *_internalQueue_taskQueue;
@property (nonatomic, readonly, copy) AVAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXAutoloopVideoPipelinePerformerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setProgress:, nonatomic) double progress;
@property (nonatomic, readonly) PXAutoloopVideoRecipe *recipe;
@property (setter=_setStatus:, nonatomic) long long status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel;
- (id /* block */)_internalQueue_currentResultHandler;
- (id)_internalQueue_currentTask;
- (long long)_internalQueue_currentTaskIndex;
- (id)_internalQueue_input;
- (id)_internalQueue_outputRecipe;
- (id)_internalQueue_outputVideo;
- (void)_internalQueue_setCurrentResultHandler:(id /* block */)arg1;
- (void)_internalQueue_setCurrentTask:(id)arg1;
- (void)_internalQueue_setCurrentTaskIndex:(long long)arg1;
- (void)_internalQueue_setInput:(id)arg1;
- (void)_internalQueue_setOutputRecipe:(id)arg1;
- (void)_internalQueue_setOutputVideo:(id)arg1;
- (void)_internalQueue_setTaskQueue:(id)arg1;
- (id)_internalQueue_taskQueue;
- (bool)_isOnIvarQueue;
- (bool)_isRunning;
- (void)_performIvarRead:(id /* block */)arg1;
- (void)_performIvarWrite:(id /* block */)arg1;
- (void)_performNextTask;
- (void)_setProgress:(double)arg1;
- (void)_setStatus:(long long)arg1;
- (void)_updateProgress;
- (void)_updateStatus;
- (id)asset;
- (void)autoloopVideoTaskProgressDidChange:(id)arg1;
- (void)autoloopVideoTaskStatusDidChange:(id)arg1;
- (void)cancel;
- (id)delegate;
- (id)initWithAsset:(id)arg1 recipe:(id)arg2;
- (double)progress;
- (id)recipe;
- (void)runWithRenderer:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)runWithResultHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (long long)status;

@end
