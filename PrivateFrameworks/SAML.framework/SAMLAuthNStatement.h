/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface SAMLAuthNStatement : SAMLBaseElement

@property (nonatomic, readonly) NSString *authenticatingAuthority;
@property (nonatomic, readonly) NSString *authnContextClassRef;
@property (nonatomic, readonly) NSString *authnContextDecl;
@property (nonatomic, readonly) NSString *authnContextDeclRef;
@property (nonatomic, readonly) NSDate *authnInstant;
@property (nonatomic, readonly) NSString *sessionIndex;
@property (nonatomic, readonly) NSDate *sessionNotOnOrAfter;
@property (nonatomic, readonly) NSString *subjectAddress;
@property (nonatomic, readonly) NSString *subjectDNSName;

+ (id)createElement:(id*)arg1;

- (id)authenticatingAuthority;
- (id)authnContextClassRef;
- (id)authnContextDecl;
- (id)authnContextDeclRef;
- (id)authnInstant;
- (bool)isValid;
- (id)sessionIndex;
- (id)sessionNotOnOrAfter;
- (id)subjectAddress;
- (id)subjectDNSName;

@end
