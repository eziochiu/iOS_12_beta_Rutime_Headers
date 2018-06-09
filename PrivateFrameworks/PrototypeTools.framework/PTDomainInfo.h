/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTDomainInfo : NSObject <NSSecureCoding> {
    NSString * _domainGroupName;
    NSString * _domainName;
    NSString * _settingsBundlePath;
    NSString * _settingsClassName;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) NSString *domainGroupName;
@property (nonatomic, readonly) NSString *domainName;
@property (nonatomic, readonly) NSString *settingsBundlePath;
@property (nonatomic, readonly) NSString *settingsClassName;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)domainGroupName;
- (id)domainName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)settingsBundlePath;
- (id)settingsClassName;
- (id)uniqueIdentifier;

@end
