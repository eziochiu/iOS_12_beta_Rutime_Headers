/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface SAMLAssertion : SAMLBaseElement

@property (nonatomic, readonly) SAMLAdvice *advice;
@property (nonatomic, readonly) SAMLAuthNStatement *authentication;
@property (nonatomic, readonly) NSArray *authorizations;
@property (nonatomic, readonly) SAMLConditions *conditions;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *issueInstant;
@property (nonatomic, readonly) NSString *issuer;
@property (nonatomic, readonly) NSArray *samlAttributes;
@property (nonatomic, readonly) SAMLSignature *signature;
@property (nonatomic, readonly) SAMLSubject *subject;

+ (id)createElement:(id*)arg1;

- (id)advice;
- (id)authentication;
- (id)authorizationForResource:(id)arg1;
- (id)authorizations;
- (id)conditions;
- (id)identifier;
- (bool)isValid:(id*)arg1;
- (bool)isValidForRequestor:(id)arg1;
- (id)issueInstant;
- (id)issuer;
- (bool)meetsConditions:(id*)arg1;
- (id)samlAttributes;
- (id)signature;
- (id)subject;

@end
