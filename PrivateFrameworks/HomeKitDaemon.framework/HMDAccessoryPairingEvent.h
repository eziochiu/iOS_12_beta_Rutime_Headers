/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryPairingEvent : HMDLogEvent <HMDAWDLogEvent> {
    bool  _addOperation;
    bool  _addViaWAC;
    unsigned long long  _authMethod;
    long long  _certificationStatus;
    long long  _linkType;
    AWDHomeKitVendorInformation * _vendorInfo;
    bool  _wacLegacy;
}

@property (getter=isAddOperation, nonatomic, readonly) bool addOperation;
@property (getter=isAddViaWAC, nonatomic) bool addViaWAC;
@property (nonatomic) unsigned long long authMethod;
@property (nonatomic) long long certificationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long linkType;
@property (readonly) Class superclass;
@property (nonatomic, retain) AWDHomeKitVendorInformation *vendorInfo;
@property (getter=isWacLegacy, nonatomic) bool wacLegacy;

+ (void)initialize;
+ (id)pairingAccessory:(id)arg1;
+ (id)pairingAccessoryWithDescription:(id)arg1;
+ (id)removingAccessory:(id)arg1 hapAccessory:(id)arg2;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (unsigned long long)authMethod;
- (long long)certificationStatus;
- (id)initWithAccessoryDescription:(id)arg1;
- (id)initWithUnpairedAccessory:(id)arg1 pairedAccessory:(id)arg2 hapAccessory:(id)arg3 isAddOperation:(bool)arg4;
- (bool)isAddOperation;
- (bool)isAddViaWAC;
- (bool)isWacLegacy;
- (long long)linkType;
- (id)metricForAWD;
- (void)pairedAccessory:(id)arg1;
- (void)pairedToServer:(id)arg1 certificationStatus:(long long)arg2;
- (void)setAddViaWAC:(bool)arg1;
- (void)setAddedViaWAC:(bool)arg1;
- (void)setAuthMethod:(unsigned long long)arg1;
- (void)setAuthenticationMethod:(unsigned long long)arg1;
- (void)setCertificationStatus:(long long)arg1;
- (void)setLinkType:(long long)arg1;
- (void)setVendorInfo:(id)arg1;
- (void)setWacLegacy:(bool)arg1;
- (void)setcertificationStatus:(long long)arg1;
- (id)vendorInfo;

@end
