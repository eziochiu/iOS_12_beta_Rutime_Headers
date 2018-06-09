/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerPathCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMutableDictionary * _observers;
    NSMutableDictionary * _playerPathResolutions;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, readonly) NSMutableDictionary *observers;
@property (nonatomic, readonly) NSMutableDictionary *playerPathResolutions;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)_init;
- (void)_onQueue_registerForInvalidationWithUnresolvedPlayerPath:(id)arg1 invalidationPlayerPath:(void*)arg2;
- (id)accessQueue;
- (id)calloutQueue;
- (void)dealloc;
- (id)observers;
- (id)playerPathResolutions;
- (id)resolvedPlayerPathForPlayerPath:(id)arg1;

@end
