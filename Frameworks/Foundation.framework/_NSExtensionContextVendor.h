/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSExtensionContextVendor : NSObject <NSXPCListenerDelegate, _NSExtensionContextVending> {
    NSMutableDictionary * __extensionContexts;
    NSMutableDictionary * __extensionPrincipalObjects;
    NSMutableDictionary * __extensionServiceConnections;
}

@property (setter=_setExtensionContexts:, nonatomic, retain) NSMutableDictionary *_extensionContexts;
@property (setter=_setExtensionPrincipalObjects:, nonatomic, retain) NSMutableDictionary *_extensionPrincipalObjects;
@property (setter=_setExtensionServiceConnections:, nonatomic, retain) NSMutableDictionary *_extensionServiceConnections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_completionConcurrentQueue;
+ (id)_expirationConcurrentQueue;
+ (Class)_extensionContextClass;
+ (id)_extensionDictionary;
+ (id)_extensionMainStoryboard;
+ (Class)_extensionPrincipalClass;
+ (id)_sharedExtensionContextVendor;
+ (void)_startListening;
+ (void)_startListening:(bool)arg1;

- (void)_beginRequestWithExtensionItems:(id)arg1 listenerEndpoint:(id)arg2 withContextUUID:(id)arg3 completion:(id /* block */)arg4;
- (id)_extensionContextForUUID:(id)arg1;
- (id)_extensionContexts;
- (id)_extensionPrincipalObjects;
- (id)_extensionServiceConnections;
- (void)_hostDidBecomeActiveForContextUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)_hostDidEnterBackgroundForContextUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)_hostWillEnterForegroundForContextUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)_hostWillResignActiveForContextUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)_setExtensionContexts:(id)arg1;
- (void)_setExtensionPrincipalObjects:(id)arg1;
- (void)_setExtensionServiceConnections:(id)arg1;
- (void)_setPrincipalObject:(id)arg1 forUUID:(id)arg2;
- (bool)_shouldCreatePrincipalObject;
- (void)_tearDownContextWithUUID:(id)arg1;
- (void)dealloc;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
