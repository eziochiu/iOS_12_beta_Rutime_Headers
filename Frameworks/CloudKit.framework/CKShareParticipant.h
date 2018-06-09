/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKShareParticipant : NSObject <NSCopying, NSSecureCoding> {
    long long  _acceptanceStatus;
    bool  _acceptedInProcess;
    bool  _createdInProcess;
    NSData * _encryptedPersonalInfo;
    NSString * _inviterID;
    bool  _isCurrentUser;
    bool  _isOrgAdminUser;
    long long  _originalAcceptanceStatus;
    long long  _originalParticipantRole;
    long long  _originalPermission;
    NSString * _participantID;
    long long  _permission;
    NSData * _protectionInfo;
    long long  _role;
    CKRecordID * _shareRecordID;
    CKUserIdentity * _userIdentity;
}

@property (nonatomic) long long acceptanceStatus;
@property (nonatomic) bool acceptedInProcess;
@property (nonatomic) bool createdInProcess;
@property (nonatomic, retain) NSData *encryptedPersonalInfo;
@property (nonatomic, retain) NSString *inviterID;
@property (nonatomic) bool isCurrentUser;
@property (nonatomic) bool isOrgAdminUser;
@property (nonatomic) long long originalAcceptanceStatus;
@property (nonatomic) long long originalParticipantRole;
@property (nonatomic) long long originalPermission;
@property (nonatomic, retain) NSString *participantID;
@property (nonatomic) long long permission;
@property (nonatomic, retain) NSData *protectionInfo;
@property (nonatomic) long long role;
@property (nonatomic, retain) CKRecordID *shareRecordID;
@property (nonatomic) long long type;
@property (nonatomic, retain) CKUserIdentity *userIdentity;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)_init;
- (id)_initWithUserIdentity:(id)arg1;
- (void)_stripPersonalInfo;
- (long long)acceptanceStatus;
- (bool)acceptedInProcess;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createdInProcess;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPersonalInfo;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)inviterID;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (bool)isOrgAdminUser;
- (long long)originalAcceptanceStatus;
- (long long)originalParticipantRole;
- (long long)originalPermission;
- (id)participantID;
- (long long)permission;
- (id)protectionInfo;
- (long long)role;
- (void)setAcceptanceStatus:(long long)arg1;
- (void)setAcceptedInProcess:(bool)arg1;
- (void)setCreatedInProcess:(bool)arg1;
- (void)setEncryptedPersonalInfo:(id)arg1;
- (void)setInviterID:(id)arg1;
- (void)setIsCurrentUser:(bool)arg1;
- (void)setIsOrgAdminUser:(bool)arg1;
- (void)setOriginalAcceptanceStatus:(long long)arg1;
- (void)setOriginalParticipantRole:(long long)arg1;
- (void)setOriginalPermission:(long long)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setPermission:(long long)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setRole:(long long)arg1;
- (void)setShareRecordID:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUserIdentity:(id)arg1;
- (id)shareRecordID;
- (long long)type;
- (id)unifiedContactsInStore:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)userIdentity;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_decryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;
- (void)_encryptPersonalInfoWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 inShareWithID:(id)arg2 pcsManager:(id)arg3;
- (bool)hasEncryptedPersonalInfo;

@end
