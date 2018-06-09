/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetCreationRequestPlaceholderSupportNotificationManager : NSObject {
    NSMutableDictionary * _assetAvailabilityHandlers;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_onQueueSync:(id /* block */)arg1;
- (void)assetAvailableNotification:(id)arg1;
- (void)callCompletionHandlerForAssetUUID:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (id)init;
- (void)registerAssetAvailabilityHandler:(id /* block */)arg1 forAssetUUID:(id)arg2;
- (void)unregisterAssetAvailabilityHandlerForAssetUUID:(id)arg1;

@end
