/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoControlsLockManager : NSObject <SVVideoControlsLockManager, SVVideoTransitionObserver> {
    NSHashTable * _controls;
    <SVVideoSkipLockObserving> * _skipLockObserver;
    <SVVideoSkipLockObserverFactory> * _skipLockObserverFactory;
    <SVVideoViewControllerProviding> * _videoViewControllerProvider;
}

@property (nonatomic, readonly) NSHashTable *controls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SVVideoSkipLockObserving> *skipLockObserver;
@property (nonatomic, readonly) <SVVideoSkipLockObserverFactory> *skipLockObserverFactory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SVVideoViewControllerProviding> *videoViewControllerProvider;

- (void).cxx_destruct;
- (void)addControl:(id)arg1;
- (id)controls;
- (id)initWithSkipLockObserverFactory:(id)arg1 videoViewControllerProvider:(id)arg2;
- (void)removeControl:(id)arg1;
- (void)setSkipLockObserver:(id)arg1;
- (id)skipLockObserver;
- (id)skipLockObserverFactory;
- (void)updateControl:(id)arg1 withLockObserver:(id)arg2;
- (id)videoViewControllerProvider;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
