/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFDiscoveredAccessory : NSObject <HFHomeKitObject> {
    HMAccessory * _accessory;
    NSString * _accessoryName;
    NSUUID * _accessoryUUID;
    unsigned long long  _certificationStatus;
    NSDate * _discoveryDate;
    NSError * _error;
    NSString * _manufacturerName;
    SFDevice * _sharingDevice;
    unsigned long long  _status;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, copy) NSString *accessoryName;
@property (nonatomic, readonly) NSUUID *accessoryUUID;
@property (nonatomic) unsigned long long certificationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *discoveryDate;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *manufacturerName;
@property (nonatomic, readonly) bool requiresSetupCode;
@property (nonatomic, readonly) SFDevice *sharingDevice;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_descriptionForStatus:(unsigned long long)arg1;
- (id)accessory;
- (id)accessoryName;
- (id)accessoryUUID;
- (unsigned long long)certificationStatus;
- (id)description;
- (id)discoveryDate;
- (id)error;
- (id)identify;
- (id)init;
- (id)initWithAccessory:(id)arg1;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2;
- (id)initWithSharingDevice:(id)arg1;
- (id)manufacturerName;
- (bool)requiresSetupCode;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryName:(id)arg1;
- (void)setCertificationStatus:(unsigned long long)arg1;
- (void)setManufacturerName:(id)arg1;
- (id)sharingDevice;
- (unsigned long long)status;
- (id)uniqueIdentifier;
- (void)updateStatus:(unsigned long long)arg1 error:(id)arg2;

@end
