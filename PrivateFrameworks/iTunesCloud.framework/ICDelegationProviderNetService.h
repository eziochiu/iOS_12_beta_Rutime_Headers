/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationProviderNetService : NSObject <NSNetServiceDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSNetService * _netService;
    NSObject<OS_dispatch_queue> * _netServiceStreamResolutionQueue;
    NSMutableArray * _resolutionCompletionHandlers;
    long long  _state;
    ICDelegationNetServiceTXTRecord * _txtRecord;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSArray *delegationAccountUUIDs;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNetService *netService;
@property (nonatomic, readonly) long long securityMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_resolveWithCompletionHandler:(id /* block */)arg1;
- (void)_setState:(long long)arg1;
- (void)_updateTXTRecordProperties;
- (void)dealloc;
- (id)delegationAccountUUIDs;
- (id)deviceName;
- (void)getResolvedStreamsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithNetService:(id)arg1;
- (id)netService;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (long long)securityMode;

@end
