/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoPlaybackQueue : NSObject <SXVideoPlaybackObserver> {
    NSMutableArray * _queue;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableArray *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)advance;
- (void)appendItem:(id)arg1;
- (unsigned long long)count;
- (id)init;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (void)playbackCoordinator:(id)arg1 loadingProgressed:(double)arg2;
- (void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)prefetchItemAfterCoordinatorIfPossible:(id)arg1;
- (void)prependItem:(id)arg1;
- (id)queue;

@end
