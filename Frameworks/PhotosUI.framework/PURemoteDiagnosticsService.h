/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PURemoteDiagnosticsService : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _diagnosticsQueue;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isRunningInPhotosApp;
+ (void)startServerOnInternalDevices;

- (void).cxx_destruct;
- (void)_startListening;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
