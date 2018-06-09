/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBBackup : NSObject <NSCopying, NSSecureCoding> {
    NSString * _backupUDID;
    NSString * _backupUUID;
    NSString * _deviceClass;
    NSString * _hardwareModel;
    bool  _hasBackupEnabledState;
    bool  _isBackupEnabled;
    bool  _isMBSBackup;
    NSString * _marketingName;
    NSString * _productType;
    bool  _restoreSystemFiles;
    NSArray * _snapshots;
}

@property (nonatomic, readonly) NSString *backupUDID;
@property (nonatomic, readonly) NSString *backupUUID;
@property (nonatomic, readonly) NSString *backupUUIDSansPrefix;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) NSString *hardwareModel;
@property (nonatomic, readonly) bool hasBackupEnabledState;
@property (nonatomic, readonly) bool isBackupEnabled;
@property (nonatomic, readonly) bool isMBSBackup;
@property (nonatomic, readonly) NSString *marketingName;
@property (nonatomic, readonly) NSString *productType;
@property (getter=canRestoreSystemFiles, nonatomic, readonly) bool restoreSystemFiles;
@property (nonatomic, readonly) NSArray *snapshots;

+ (bool)supportsSecureCoding;

- (id)backupUDID;
- (id)backupUUID;
- (id)backupUUIDSansPrefix;
- (bool)canRestoreSystemFiles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceClass;
- (void)encodeWithCoder:(id)arg1;
- (id)hardwareModel;
- (bool)hasBackupEnabledState;
- (id)initWithBackupUDID:(id)arg1 backupUUID:(id)arg2 deviceClass:(id)arg3 productType:(id)arg4 hardwareModel:(id)arg5 marketingName:(id)arg6 snapshots:(id)arg7 restoreSystemFiles:(bool)arg8 isMBSBackup:(bool)arg9 isBackupEnabled:(bool)arg10 hasBackupEnabledState:(bool)arg11;
- (id)initWithCoder:(id)arg1;
- (bool)isBackupEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isMBSBackup;
- (id)marketingName;
- (id)productType;
- (id)snapshots;

@end
