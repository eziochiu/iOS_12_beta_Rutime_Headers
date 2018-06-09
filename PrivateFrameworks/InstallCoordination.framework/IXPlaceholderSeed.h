/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXPlaceholderSeed : IXOwnedDataPromiseSeed <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSString * _bundleName;
    unsigned long long  _installType;
    bool  _isPlugin;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *bundleName;
@property (nonatomic) unsigned long long installType;
@property (nonatomic) bool isPlugin;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)bundleName;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)installType;
- (bool)isPlugin;
- (void)setBundleID:(id)arg1;
- (void)setBundleName:(id)arg1;
- (void)setInstallType:(unsigned long long)arg1;
- (void)setIsPlugin:(bool)arg1;

@end
