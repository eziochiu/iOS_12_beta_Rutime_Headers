/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMediaValueManager : NSObject <HFHomeKitItemProtocol, HFMediaObjectObserver, HFMediaSessionObserver, HFMediaValueSource> {
    NSError * _cachedPlaybackStateWriteError;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    NSMutableArray * _transactionStack;
}

@property (nonatomic, readonly) NSError *cachedPlaybackStateWriteError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPendingWrites;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *transactionStack;

- (void).cxx_destruct;
- (void)_clearCachedPlaybackStateWriteErrorWithReason:(id)arg1 notifyDelegates:(bool)arg2;
- (void)_notifyDelegatesDidUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_notifyDelegatesFailedToUpdatePlaybackStateWithError:(id)arg1 mediaSession:(id)arg2;
- (void)_notifyDelegatesWillUpdatePlaybackState:(long long)arg1 mediaSession:(id)arg2;
- (void)_updateCachedPlaybackStateWriteError:(id)arg1 operationType:(id)arg2 notifyDelegates:(bool)arg3;
- (void)_updateLastPlaybackState:(long long)arg1 sender:(SEL)arg2 notifyWillUpdate:(bool)arg3 notifyDidUpdate:(bool)arg4;
- (id)cachedPlaybackStateWriteError;
- (bool)hasPendingWrites;
- (id)homeKitObject;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1;
- (long long)lastPlaybackStateForProfile;
- (void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2;
- (id)mediaProfileContainer;
- (void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)setTransactionStack:(id)arg1;
- (id)transactionStack;
- (id)writePlaybackState:(long long)arg1;

@end
