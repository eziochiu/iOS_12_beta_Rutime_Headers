/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRemoteNotificationClient : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    int  _notifyToken;
}

+ (id)sharedClient;

- (void)dealloc;
- (id)init;
- (id)popQueuedNotifications;
- (void)registerForRemoteNotifications;
- (void)unregisterForRemoteNotifications;

@end