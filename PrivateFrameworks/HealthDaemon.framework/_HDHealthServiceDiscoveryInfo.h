/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDHealthServiceDiscoveryInfo : NSObject {
    bool  _alwaysNotify;
    id /* block */  _discoveryHandler;
    unsigned long long  _discoveryIdentifier;
    NSMutableSet * _peripheralsUUIDs;
    bool  _requiresActiveScan;
    CBUUID * _serviceUUID;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic, readonly) bool alwaysNotify;
@property (nonatomic, readonly) id /* block */ discoveryHandler;
@property (nonatomic) unsigned long long discoveryIdentifier;
@property (nonatomic, readonly) bool requiresActiveScan;
@property (nonatomic, readonly) CBUUID *serviceUUID;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimer;

- (void).cxx_destruct;
- (bool)_addPeripheralUUID:(id)arg1;
- (bool)alwaysNotify;
- (id /* block */)discoveryHandler;
- (unsigned long long)discoveryIdentifier;
- (id)initWithHandler:(id /* block */)arg1 serviceUUID:(id)arg2 alwaysNotify:(bool)arg3 requiresActiveScan:(bool)arg4;
- (bool)requiresActiveScan;
- (id)serviceUUID;
- (void)setDiscoveryIdentifier:(unsigned long long)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (id)timeoutTimer;

@end
