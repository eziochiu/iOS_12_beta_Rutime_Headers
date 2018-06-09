/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEEvaluateConnectionRule : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    long long  _action;
    NSArray * _matchDomains;
    NSURL * _probeURL;
    NSArray * _useDNSServers;
}

@property (readonly) long long action;
@property (readonly) NSArray *matchDomains;
@property (copy) NSURL *probeURL;
@property (copy) NSArray *useDNSServers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchDomains:(id)arg1 andAction:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)matchDomains;
- (id)probeURL;
- (void)setProbeURL:(id)arg1;
- (void)setUseDNSServers:(id)arg1;
- (id)useDNSServers;

@end
