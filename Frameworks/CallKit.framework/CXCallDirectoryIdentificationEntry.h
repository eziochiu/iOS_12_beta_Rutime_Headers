/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryIdentificationEntry : NSObject <NSSecureCoding> {
    NSString * _extensionIdentifier;
    NSString * _localizedExtensionContainingAppName;
    NSString * _localizedExtensionName;
    NSString * _localizedLabel;
}

@property (nonatomic, copy) NSString *extensionIdentifier;
@property (nonatomic, copy) NSString *localizedExtensionContainingAppName;
@property (nonatomic, copy) NSString *localizedExtensionName;
@property (nonatomic, copy) NSString *localizedLabel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)localizedExtensionContainingAppName;
- (id)localizedExtensionName;
- (id)localizedLabel;
- (void)setExtensionIdentifier:(id)arg1;
- (void)setLocalizedExtensionContainingAppName:(id)arg1;
- (void)setLocalizedExtensionName:(id)arg1;
- (void)setLocalizedLabel:(id)arg1;

@end
