/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MPSStateRequest : PBRequest <NSCopying> {
    NSString * _backupDeviceID;
    NSString * _backupDeviceUDID;
    NSString * _backupDeviceUUID;
    NSString * _iCPLDeviceID;
    NSString * _mPSDeviceID;
}

@property (nonatomic, retain) NSString *backupDeviceID;
@property (nonatomic, retain) NSString *backupDeviceUDID;
@property (nonatomic, retain) NSString *backupDeviceUUID;
@property (nonatomic, readonly) bool hasBackupDeviceID;
@property (nonatomic, readonly) bool hasBackupDeviceUDID;
@property (nonatomic, readonly) bool hasBackupDeviceUUID;
@property (nonatomic, readonly) bool hasICPLDeviceID;
@property (nonatomic, readonly) bool hasMPSDeviceID;
@property (nonatomic, retain) NSString *iCPLDeviceID;
@property (nonatomic, retain) NSString *mPSDeviceID;

- (void).cxx_destruct;
- (id)backupDeviceID;
- (id)backupDeviceUDID;
- (id)backupDeviceUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBackupDeviceID;
- (bool)hasBackupDeviceUDID;
- (bool)hasBackupDeviceUUID;
- (bool)hasICPLDeviceID;
- (bool)hasMPSDeviceID;
- (unsigned long long)hash;
- (id)iCPLDeviceID;
- (bool)isEqual:(id)arg1;
- (id)mPSDeviceID;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBackupDeviceID:(id)arg1;
- (void)setBackupDeviceUDID:(id)arg1;
- (void)setBackupDeviceUUID:(id)arg1;
- (void)setICPLDeviceID:(id)arg1;
- (void)setMPSDeviceID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
