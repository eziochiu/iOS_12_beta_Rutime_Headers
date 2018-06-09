/* made by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCAuthenticationRequest : NSObject <NSSecureCoding> {
    NSString * _businessIdentifier;
    NSString * _businessName;
    BCOAuth2Parameters * _oauth2;
}

@property (nonatomic, retain) NSString *businessIdentifier;
@property (nonatomic, readonly) NSString *businessName;
@property (nonatomic, retain) BCOAuth2Parameters *oauth2;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)businessIdentifier;
- (id)businessName;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)oauth2;
- (void)setBusinessIdentifier:(id)arg1;
- (void)setOauth2:(id)arg1;

@end
