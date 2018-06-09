/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKAccountInfo : NSObject <NSSecureCoding> {
    long long  _accountPartition;
    long long  _accountStatus;
    bool  _hasEncryptionIdentity;
    bool  _hasValidCredentials;
    NSError * _manateeError;
    bool  _supportsDeviceToDeviceEncryption;
}

@property (nonatomic) long long accountPartition;
@property (nonatomic) long long accountStatus;
@property (nonatomic, retain) NSError *deviceToDeviceEncryptionAvailabilityError;
@property (nonatomic) bool hasEncryptionIdentity;
@property (nonatomic) bool hasValidCredentials;
@property (nonatomic, retain) NSError *manateeError;
@property (nonatomic) bool supportsDeviceToDeviceEncryption;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (long long)accountPartition;
- (long long)accountStatus;
- (id)description;
- (id)deviceToDeviceEncryptionAvailabilityError;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEncryptionIdentity;
- (bool)hasValidCredentials;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)manateeError;
- (void)setAccountPartition:(long long)arg1;
- (void)setAccountStatus:(long long)arg1;
- (void)setDeviceToDeviceEncryptionAvailabilityError:(id)arg1;
- (void)setHasEncryptionIdentity:(bool)arg1;
- (void)setHasValidCredentials:(bool)arg1;
- (void)setManateeError:(id)arg1;
- (void)setSupportsDeviceToDeviceEncryption:(bool)arg1;
- (bool)supportsDeviceToDeviceEncryption;

@end
