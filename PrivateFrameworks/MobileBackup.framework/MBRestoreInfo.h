/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBRestoreInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _backupBuildVersion;
    NSDate * _date;
    NSString * _deviceBuildVersion;
    bool  _wasCloudRestore;
}

@property (readonly) NSString *backupBuildVersion;
@property (readonly) NSDate *date;
@property (readonly) NSString *deviceBuildVersion;
@property (readonly) bool wasCloudRestore;

+ (bool)supportsSecureCoding;

- (id)backupBuildVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)deviceBuildVersion;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)setBackupBuildVersion:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDeviceBuildVersion:(id)arg1;
- (void)setWasCloudRestore:(bool)arg1;
- (bool)wasCloudRestore;

@end
