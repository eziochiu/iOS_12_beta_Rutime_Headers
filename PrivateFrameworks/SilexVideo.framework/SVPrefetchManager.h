/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPrefetchManager : NSObject <SVVideoTransitionObserver> {
    <SVPrefetcherFactory> * _prefetcherFactory;
    NSMutableDictionary * _prefetchers;
    <SVVideoQueueObserving> * _queueObserver;
    <SVVideoQueueProviding> * _queueProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPrefetcherFactory> *prefetcherFactory;
@property (nonatomic, readonly) NSMutableDictionary *prefetchers;
@property (nonatomic, readonly) <SVVideoQueueObserving> *queueObserver;
@property (nonatomic, readonly) <SVVideoQueueProviding> *queueProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2;
- (id)initWithPrefetcherFactory:(id)arg1 queueProvider:(id)arg2 queueObserver:(id)arg3;
- (id)prefetcherFactory;
- (id)prefetchers;
- (id)queueObserver;
- (id)queueProvider;
- (void)updatePrefetchersWithCurrentVideo:(id)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
