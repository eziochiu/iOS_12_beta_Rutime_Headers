/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDZonePCSData : CKDPCSData {
    CKRecordZoneID * _zoneID;
    struct _OpaquePCSShareProtection { } * _zoneishPCS;
    NSData * _zoneishPCSData;
    NSData * _zoneishPublicKeyID;
}

@property (nonatomic, retain) CKRecordZoneID *zoneID;
@property (nonatomic) struct _OpaquePCSShareProtection { }*zoneishPCS;
@property (nonatomic, copy) NSData *zoneishPCSData;
@property (nonatomic, retain) NSData *zoneishPublicKeyID;

+ (id)dataWithZone:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZone:(id)arg1;
- (id)itemID;
- (void)setZoneID:(id)arg1;
- (void)setZoneishPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setZoneishPCSData:(id)arg1;
- (void)setZoneishPublicKeyID:(id)arg1;
- (id)zoneID;
- (struct _OpaquePCSShareProtection { }*)zoneishPCS;
- (id)zoneishPCSData;
- (id)zoneishPublicKeyID;

@end
