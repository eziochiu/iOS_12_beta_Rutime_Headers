/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileProviderProxy : NSFileReactorProxy {
    NSFileProviderXPCMessenger * _forwardedMessenger;
    <NSFileProviderXPCInterface><NSXPCProxyCreating> * _remoteProvider;
    NSString * _secureID;
    NSUUID * _uniqueID;
    bool  _wantsWriteNotifications;
}

@property (readonly) <NSFileProviderXPCInterface><NSXPCProxyCreating> *remoteProvider;
@property (readonly) NSString *secureID;
@property (readonly) NSUUID *uniqueID;
@property bool wantsWriteNotifications;

- (id)_clientProxy;
- (bool)allowedForURL:(id)arg1;
- (void)dealloc;
- (void)forwardUsingProxy:(id)arg1;
- (id)initWithClient:(id)arg1 remoteProvider:(id)arg2 reactorID:(id)arg3 secureID:(id)arg4 uniqueID:(id)arg5;
- (void)invalidate;
- (void)observeEndOfWriteAtLocation:(id)arg1 forAccessClaim:(id)arg2;
- (void)observePresentationChangeOfKind:(id)arg1 withPresenter:(id)arg2 url:(id)arg3 newURL:(id)arg4;
- (id /* block */)provideItemAtURL:(id)arg1 withOptions:(unsigned long long)arg2 forAccessClaim:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)provideLogicalURLForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)providePhysicalURLForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)remoteProvider;
- (id)secureID;
- (void)setItemLocation:(id)arg1;
- (void)setWantsWriteNotifications:(bool)arg1;
- (id)uniqueID;
- (bool)wantsWriteNotifications;

@end
