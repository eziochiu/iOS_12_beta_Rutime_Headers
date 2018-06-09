/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationPlaceholderProgress : NSObject <BSDescriptionProviding, BSInvalidatable, FBApplicationPlaceholderProgress> {
    long long  _cancellationAllowed;
    unsigned long long  _installPhase;
    unsigned long long  _installState;
    int  _invalidated;
    double  _percentComplete;
    FBApplicationPlaceholder * _placeholder;
    NSProgress * _progress;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long installPhase;
@property (nonatomic, readonly) unsigned long long installState;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) FBApplicationPlaceholder *placeholder;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_queue_updateFromProgress;
- (void)_startObservingProgress:(id)arg1 withContext:(void*)arg2;
- (void)_stopObservingProgress:(id)arg1 withContext:(void*)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithPlaceholder:(id)arg1 queue:(id)arg2;
- (unsigned long long)installPhase;
- (unsigned long long)installState;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)percentComplete;
- (id)placeholder;
- (bool)queue_canPerformAction:(unsigned long long)arg1;
- (bool)queue_isCancellationAllowed;
- (bool)queue_isValid;
- (unsigned long long)queue_supportedActions;
- (bool)queue_updateProxy:(id)arg1;
- (long long)state;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
