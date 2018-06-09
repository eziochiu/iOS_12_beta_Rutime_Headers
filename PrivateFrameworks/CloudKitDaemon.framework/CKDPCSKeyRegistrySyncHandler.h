/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSKeyRegistrySyncHandler : NSObject {
    NSMutableDictionary * _keyRegistrySyncMetadataByServiceName;
    NSObject<OS_dispatch_queue> * _keyRegistrySyncQueue;
    NSMutableDictionary * _lastSuccessfulKeyRegistrySyncByServiceName;
}

@property (nonatomic, retain) NSMutableDictionary *keyRegistrySyncMetadataByServiceName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *keyRegistrySyncQueue;
@property (nonatomic, retain) NSMutableDictionary *lastSuccessfulKeyRegistrySyncByServiceName;

+ (id)sharedHandler;

- (void).cxx_destruct;
- (void)_registerAndPerformKeyRegistrySyncForService:(id)arg1 shouldThrottle:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)keyRegistrySyncMetadataByServiceName;
- (id)keyRegistrySyncQueue;
- (id)lastSuccessfulKeyRegistrySyncByServiceName;
- (id)serviceKeyForServiceName:(id)arg1;
- (void)setKeyRegistrySyncMetadataByServiceName:(id)arg1;
- (void)setKeyRegistrySyncQueue:(id)arg1;
- (void)setLastSuccessfulKeyRegistrySyncByServiceName:(id)arg1;
- (void)synchronizeUserKeyRegistryForService:(id)arg1 shouldThrottle:(bool)arg2 onBehalfOfContext:(id)arg3 completionHandler:(id /* block */)arg4;

@end
