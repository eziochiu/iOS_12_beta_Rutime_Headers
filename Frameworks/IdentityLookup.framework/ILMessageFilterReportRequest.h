/* made by EzioChiu
   Image: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

@interface ILMessageFilterReportRequest : NSObject <NSSecureCoding> {
    NSString * _extensionIdentifier;
    NSString * _messageBody;
    NSString * _sender;
    long long  _suggestedAction;
}

@property (nonatomic, readonly, copy) NSString *extensionIdentifier;
@property (nonatomic, copy) NSString *messageBody;
@property (nonatomic, copy) NSString *sender;
@property (nonatomic) long long suggestedAction;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (id)messageBody;
- (id)sender;
- (void)setMessageBody:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSuggestedAction:(long long)arg1;
- (long long)suggestedAction;

@end
