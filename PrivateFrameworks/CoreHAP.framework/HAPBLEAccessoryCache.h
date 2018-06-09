/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBLEAccessoryCache : HMFObject <NSSecureCoding> {
    NSMutableArray * _cachedServices;
    NSString * _pairingIdentifier;
    HAPBLEPeripheralInfo * _peripheralInfo;
}

@property (nonatomic, readonly) NSMutableArray *cachedServices;
@property (nonatomic, readonly) NSString *pairingIdentifier;
@property (nonatomic, retain) HAPBLEPeripheralInfo *peripheralInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cachedServices;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getCachedServiceWithUUID:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPairingIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pairingIdentifier;
- (id)peripheralInfo;
- (void)setPeripheralInfo:(id)arg1;
- (void)updateWithPeripheralInfo:(id)arg1;
- (void)updateWithService:(id)arg1;

@end
