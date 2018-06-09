/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoQueueManager : NSObject <SVVideoQueueManager, SVVideoQueueObserving, SVVideoQueueProviding, SVVideoTransitionObserver> {
    NSMutableArray * _modifiers;
    <SVVideoQueue> * _queue;
    NSMutableArray * _updateBlocks;
    <SVVideo> * _video;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *modifiers;
@property (nonatomic, copy) <SVVideoQueue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *updateBlocks;
@property (nonatomic, retain) <SVVideo> *video;

- (void).cxx_destruct;
- (void)addModifier:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)modifiers;
- (void)onUpdate:(id /* block */)arg1;
- (id)queue;
- (void)removeModifier:(id)arg1;
- (void)replaceCurrentQueueWithQueue:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setVideo:(id)arg1;
- (id)updateBlocks;
- (id)video;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
