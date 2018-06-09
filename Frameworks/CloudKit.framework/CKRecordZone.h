/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordZone : NSObject <NSCopying, NSSecureCoding> {
    long long  _assetQuotaUsage;
    unsigned long long  _capabilities;
    NSData * _clientChangeToken;
    CKContainerID * _containerID;
    CKServerChangeToken * _currentServerChangeToken;
    int  _deviceCount;
    CKEncryptedDate * _encryptedLastZoneishPCSRollDate;
    long long  _metadataQuotaUsage;
    bool  _needsZoneishPCSRolled;
    NSData * _pcsKeyID;
    NSString * _previousProtectionEtag;
    NSData * _protectionData;
    NSString * _protectionEtag;
    bool  _serializeProtectionData;
    CKRecordZoneID * _zoneID;
    bool  _zoneKeyRollAllowed;
    NSString * _zonePCSLastModifierDevice;
    NSDate * _zonePCSModificationDate;
    NSData * _zoneishKeyID;
    NSData * _zoneishProtectionData;
}

@property (nonatomic) long long assetQuotaUsage;
@property (nonatomic) unsigned long long capabilities;
@property (nonatomic, retain) NSData *clientChangeToken;
@property (nonatomic, copy) CKContainerID *containerID;
@property (nonatomic, retain) CKServerChangeToken *currentServerChangeToken;
@property (nonatomic, readonly) NSData *currentServerContinuationToken;
@property (nonatomic) int deviceCount;
@property (nonatomic, retain) CKEncryptedDate *encryptedLastZoneishPCSRollDate;
@property (nonatomic) long long metadataQuotaUsage;
@property (nonatomic) bool needsZoneishPCSRolled;
@property (nonatomic, retain) NSData *pcsKeyID;
@property (nonatomic, retain) NSString *previousProtectionEtag;
@property (nonatomic, retain) NSData *protectionData;
@property (nonatomic, retain) NSString *protectionEtag;
@property (nonatomic) bool serializeProtectionData;
@property (nonatomic, retain) CKRecordZoneID *zoneID;
@property (nonatomic) bool zoneKeyRollAllowed;
@property (nonatomic) struct _OpaquePCSShareProtection { }*zonePCS;
@property (nonatomic, retain) NSString *zonePCSLastModifierDevice;
@property (nonatomic, retain) NSDate *zonePCSModificationDate;
@property (nonatomic, retain) NSData *zoneishKeyID;
@property (nonatomic) struct _OpaquePCSShareProtection { }*zoneishPCS;
@property (nonatomic, retain) NSData *zoneishProtectionData;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)defaultRecordZone;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKPropertiesDescription;
- (id)_initZoneWithIdentifier:(id)arg1 capabilities:(unsigned long long)arg2;
- (long long)assetQuotaUsage;
- (unsigned long long)capabilities;
- (id)clientChangeToken;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentServerChangeToken;
- (id)currentServerContinuationToken;
- (id)description;
- (int)deviceCount;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedLastZoneishPCSRollDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1;
- (id)initWithZoneName:(id)arg1;
- (long long)metadataQuotaUsage;
- (bool)needsZoneishPCSRolled;
- (id)pcsKeyID;
- (id)previousProtectionEtag;
- (id)protectionData;
- (id)protectionEtag;
- (bool)serializeProtectionData;
- (void)setAssetQuotaUsage:(long long)arg1;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setClientChangeToken:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setCurrentServerChangeToken:(id)arg1;
- (void)setDeviceCount:(int)arg1;
- (void)setEncryptedLastZoneishPCSRollDate:(id)arg1;
- (void)setMetadataQuotaUsage:(long long)arg1;
- (void)setNeedsZoneishPCSRolled:(bool)arg1;
- (void)setPcsKeyID:(id)arg1;
- (void)setPreviousProtectionEtag:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setProtectionEtag:(id)arg1;
- (void)setSerializeProtectionData:(bool)arg1;
- (void)setZoneID:(id)arg1;
- (void)setZoneKeyRollAllowed:(bool)arg1;
- (void)setZonePCSLastModifierDevice:(id)arg1;
- (void)setZonePCSModificationDate:(id)arg1;
- (void)setZoneishKeyID:(id)arg1;
- (void)setZoneishProtectionData:(id)arg1;
- (id)zoneID;
- (bool)zoneKeyRollAllowed;
- (id)zonePCSLastModifierDevice;
- (id)zonePCSModificationDate;
- (id)zoneishKeyID;
- (id)zoneishProtectionData;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)fillOutPCSMetadataInfo;
- (void)setZonePCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setZoneishPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (struct _OpaquePCSShareProtection { }*)zonePCS;
- (struct _OpaquePCSShareProtection { }*)zoneishPCS;

@end
