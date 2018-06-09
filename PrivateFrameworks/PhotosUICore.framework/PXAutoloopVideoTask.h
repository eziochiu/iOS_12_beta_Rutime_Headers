/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAutoloopVideoTask : NSObject {
    NSObject<OS_dispatch_queue> * _ivarQueue;
    void * _ivarQueueIdentifier;
    <PXAutoloopVideoTaskDelegate> * _ivarQueue_delegate;
    struct { 
        bool respondsToProgressDidChange; 
        bool respondsToStatusDidChange; 
    }  _ivarQueue_delegateFlags;
    NSError * _ivarQueue_error;
    double  _ivarQueue_progress;
    long long  _ivarQueue_status;
    NSObject<OS_dispatch_queue> * _performQueue;
    NSString * _temporaryFilesDirectory;
}

@property (nonatomic) <PXAutoloopVideoTaskDelegate> *delegate;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) double progress;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly, copy) NSString *temporaryFilesDirectory;

- (void).cxx_destruct;
- (bool)_isOnIvarQueue;
- (bool)_isRunning;
- (void)_performIvarRead:(id /* block */)arg1;
- (void)_performIvarWrite:(id /* block */)arg1;
- (void)_reset;
- (void)cancel;
- (id)delegate;
- (id)error;
- (id)init;
- (void)performTaskWithInput:(id)arg1;
- (double)progress;
- (void)runWithInput:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTemporaryFilesDirectory:(id)arg1;
- (long long)status;
- (id)temporaryFilesDirectory;

@end
