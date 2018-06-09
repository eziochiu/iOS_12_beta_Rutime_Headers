/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBDomainInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _domainName;
    bool  _enabled;
    unsigned long long  _localSize;
    unsigned long long  _remoteSize;
    bool  _restricted;
    bool  _systemApp;
}

@property (getter=isAppDomain, nonatomic, readonly) bool appDomain;
@property (nonatomic, readonly) NSString *bundleID;
@property (getter=isCameraRollDomain, nonatomic, readonly) bool cameraRollDomain;
@property (nonatomic, retain) NSString *domainName;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) unsigned long long localSize;
@property (nonatomic) unsigned long long remoteSize;
@property (getter=isRestricted, nonatomic) bool restricted;
@property (nonatomic, readonly) unsigned long long size;
@property (getter=isSystemApp, nonatomic) bool systemApp;

+ (id)domainInfoWithName:(id)arg1 systemApp:(bool)arg2 remoteSize:(unsigned long long)arg3 localSize:(unsigned long long)arg4 enabled:(bool)arg5 restricted:(bool)arg6;
+ (id)domainNameForBundleID:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainName:(id)arg1 systemApp:(bool)arg2 remoteSize:(unsigned long long)arg3 localSize:(unsigned long long)arg4 enabled:(bool)arg5 restricted:(bool)arg6;
- (bool)isAppDomain;
- (bool)isCameraRollDomain;
- (bool)isEnabled;
- (bool)isRestricted;
- (bool)isSystemApp;
- (unsigned long long)localSize;
- (unsigned long long)remoteSize;
- (void)setDomainName:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLocalSize:(unsigned long long)arg1;
- (void)setRemoteSize:(unsigned long long)arg1;
- (void)setRestricted:(bool)arg1;
- (void)setSystemApp:(bool)arg1;
- (unsigned long long)size;

@end
