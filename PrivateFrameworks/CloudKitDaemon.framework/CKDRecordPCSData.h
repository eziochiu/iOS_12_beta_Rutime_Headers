/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRecordPCSData : CKDPCSData {
    CKDChainPCSData * _chainPCSData;
    NSData * _chainParentPublicKeyID;
    CKEncryptedData * _encryptedPublicSharingKey;
    CKRecordID * _parentID;
    CKDRecordPCSData * _parentPCSData;
    CKRecordID * _recordID;
    NSString * _recordType;
    CKRecordID * _shareID;
    CKDSharePCSData * _sharePCSData;
    CKRecordZoneID * _zoneID;
    CKDZonePCSData * _zonePCSData;
    NSData * _zoneishPublicKeyID;
}

@property (nonatomic, retain) CKDChainPCSData *chainPCSData;
@property (nonatomic, retain) NSData *chainParentPublicKeyID;
@property (nonatomic, retain) CKEncryptedData *encryptedPublicSharingKey;
@property (nonatomic, retain) CKRecordID *parentID;
@property (nonatomic, retain) CKDRecordPCSData *parentPCSData;
@property (nonatomic, retain) CKRecordID *recordID;
@property (nonatomic, readonly) NSString *recordType;
@property (nonatomic, retain) CKRecordID *shareID;
@property (nonatomic, retain) CKDSharePCSData *sharePCSData;
@property (nonatomic, retain) CKRecordZoneID *zoneID;
@property (nonatomic, retain) CKDZonePCSData *zonePCSData;
@property (nonatomic, retain) NSData *zoneishPublicKeyID;

+ (id)dataWithRecord:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)chainPCSData;
- (id)chainParentPublicKeyID;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPublicSharingKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithPCSData:(id)arg1 recordID:(id)arg2;
- (id)initWithRecord:(id)arg1;
- (id)itemID;
- (id)parentID;
- (id)parentPCSData;
- (id)recordID;
- (id)recordType;
- (void)setChainPCSData:(id)arg1;
- (void)setChainParentPublicKeyID:(id)arg1;
- (void)setEncryptedPublicSharingKey:(id)arg1;
- (void)setParentID:(id)arg1;
- (void)setParentPCSData:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setSharePCSData:(id)arg1;
- (void)setZoneID:(id)arg1;
- (void)setZonePCSData:(id)arg1;
- (void)setZoneishPublicKeyID:(id)arg1;
- (id)shareID;
- (id)sharePCSData;
- (bool)shouldEncodePCSData;
- (id)zoneID;
- (id)zonePCSData;
- (id)zoneishPublicKeyID;

@end
