/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNAppRuleExecutable : NSObject <NSCopying, NSSecureCoding> {
    NSString * _matchDesignatedRequirement;
    NSString * _matchPath;
    NSString * _matchSigningIdentifier;
}

@property (readonly) NSString *matchDesignatedRequirement;
@property (copy) NSString *matchPath;
@property (readonly) NSString *matchSigningIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)matchDesignatedRequirement;
- (id)matchPath;
- (id)matchSigningIdentifier;
- (void)setMatchPath:(id)arg1;

@end
