/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMAskForTimeClient : NSObject <RMAskForTimeInterface> {
    bool  _cachedIsRestrictionsPasscodeSet;
    bool  _cachedShouldRequestMoreTime;
    NSXPCConnection * _xpcConnection;
}

@property bool cachedIsRestrictionsPasscodeSet;
@property bool cachedShouldRequestMoreTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_asynchronousProxyWithHandler:(id /* block */)arg1;
- (void)_synchronousProxyWithHandler:(id /* block */)arg1;
- (bool)cachedIsRestrictionsPasscodeSet;
- (bool)cachedShouldRequestMoreTime;
- (void)dealloc;
- (void)fetchAskForTimeFromMeWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (bool)isRestrictionsPasscodeSet;
- (void)isRestrictionsPasscodeSet:(id /* block */)arg1;
- (void)sendAskForTimeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setCachedIsRestrictionsPasscodeSet:(bool)arg1;
- (void)setCachedShouldRequestMoreTime:(bool)arg1;
- (bool)shouldRequestMoreTime;
- (void)shouldRequestMoreTime:(id /* block */)arg1;
- (id)xpcConnection;

@end
