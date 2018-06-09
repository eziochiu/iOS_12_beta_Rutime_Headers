/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKRendererVSyncController : NSObject {
    struct __IOMobileFramebuffer { } * _ioMobileFramebuffer;
    NSHashTable * _rendererControllers;
    NSObject<OS_dispatch_queue> * _vSyncQueue;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (void)addRendererController:(id)arg1;
- (void)createVSyncNotifications;
- (id)init;
- (void)removeRendererController:(id)arg1;
- (void)removeVSyncNotifications;
- (void)signalVSyncSemaphore:(double)arg1;

@end
