/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUnassociatedAirPlayAccessory : HMDUnassociatedMediaAccessory <HMDAccessoryAssociation, HMFLogging> {
    HMFPairingIdentity * _pairingIdentity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) HMFPairingIdentity *pairingIdentity;
@property (readonly) Class superclass;
@property (readonly) bool supportsAssociation;

+ (id)logCategory;
+ (Class)modelClass;

- (void).cxx_destruct;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
- (void)associateToHome:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)logIdentifier;
- (id)pairingIdentity;
- (void)setPairingIdentity:(id)arg1;
- (bool)supportsAssociation;

@end
