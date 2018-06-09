/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAppInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appVersion;
    NSString * _bundleID;
    NSData * _cdHash;
    int  _pid;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSData *cdHash;
@property (nonatomic) int pid;
@property (nonatomic, copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appVersion;
- (id)bundleID;
- (id)cdHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isComplete;
- (int)pid;
- (void)setAppVersion:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCdHash:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
