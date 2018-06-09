/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLTilesManagerClient : NSObject {
    CLTilesManagerClientInternal * _internal;
}

+ (void)initialize;
+ (id)sharedClient;

- (void)dealloc;
- (bool)executeAsynchronousQuery:(id)arg1 onQueue:(id)arg2 responseBlock:(id /* block */)arg3;
- (id)init;
- (void)onNotificationReceived:(id)arg1;
- (bool)precacheHint:(id)arg1 onQueue:(id)arg2 responseBlock:(id /* block */)arg3;
- (void)reconnect;
- (bool)registerTo:(id)arg1 onQueue:(id)arg2 block:(id /* block */)arg3;
- (void)sendNotificationRegistrationMessage:(id)arg1 isRegister:(bool)arg2;
- (bool)unregisterFrom:(id)arg1;

@end
