/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAOVPNException : NSObject <NSCopying, NSSecureCoding> {
    long long  _action;
    NSString * _bundleIdentifier;
    NSString * _serviceName;
}

@property long long action;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSString *serviceName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)bundleIdentifier;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serviceName;
- (void)setAction:(long long)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setServiceName:(id)arg1;

@end
