/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCIntentDefinitionSyncState : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appBundleID;
    NSString * _checksum;
    NSNumber * _lastModifiedDate;
    NSString * _serviceID;
}

@property (nonatomic, retain) NSString *appBundleID;
@property (nonatomic, retain) NSString *checksum;
@property (nonatomic, retain) NSNumber *lastModifiedDate;
@property (nonatomic, retain) NSString *serviceID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleID;
- (id)checksum;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lastModifiedDate;
- (id)serviceID;
- (void)setAppBundleID:(id)arg1;
- (void)setChecksum:(id)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setServiceID:(id)arg1;

@end
