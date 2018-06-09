/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKUserIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _contactIdentifiers;
    NSData * _encryptedPersonalInfo;
    NSString * _firstName;
    bool  _hasiCloudAccount;
    bool  _isCached;
    NSString * _lastName;
    CKUserIdentityLookupInfo * _lookupInfo;
    NSPersonNameComponents * _nameComponents;
    NSData * _outOfNetworkPrivateKey;
    unsigned long long  _publicKeyVersion;
    NSData * _publicSharingKey;
    CKRecordID * _userRecordID;
}

@property (nonatomic, copy) NSArray *contactIdentifiers;
@property (nonatomic, retain) NSData *encryptedPersonalInfo;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic) bool hasiCloudAccount;
@property (nonatomic) bool isCached;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, copy) CKUserIdentityLookupInfo *lookupInfo;
@property (nonatomic, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, retain) NSData *outOfNetworkPrivateKey;
@property (nonatomic) unsigned long long publicKeyVersion;
@property (nonatomic, retain) NSData *publicSharingKey;
@property (nonatomic, copy) CKRecordID *userRecordID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)_init;
- (id)ckShortDescription;
- (id)contactIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPersonalInfo;
- (id)firstName;
- (unsigned long long)hash;
- (bool)hasiCloudAccount;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (bool)isCached;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToUserIdentity:(id)arg1;
- (bool)isEquivalentToUserIdentityOrPublicKey:(id)arg1;
- (bool)isOutOfNetwork;
- (id)lastName;
- (id)lookupInfo;
- (id)nameComponents;
- (id)outOfNetworkPrivateKey;
- (unsigned long long)publicKeyVersion;
- (id)publicSharingKey;
- (void)setContactIdentifiers:(id)arg1;
- (void)setEncryptedPersonalInfo:(id)arg1;
- (void)setHasiCloudAccount:(bool)arg1;
- (void)setIsCached:(bool)arg1;
- (void)setLookupInfo:(id)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setOutOfNetworkPrivateKey:(id)arg1;
- (void)setPublicKeyVersion:(unsigned long long)arg1;
- (void)setPublicSharingKey:(id)arg1;
- (void)setUserRecordID:(id)arg1;
- (id)userRecordID;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 participantID:(id)arg2 inShareWithID:(id)arg3 pcsManager:(id)arg4;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 participantID:(id)arg2 inShareWithID:(id)arg3 pcsManager:(id)arg4;
- (bool)hasEncryptedPersonalInfo;

@end
