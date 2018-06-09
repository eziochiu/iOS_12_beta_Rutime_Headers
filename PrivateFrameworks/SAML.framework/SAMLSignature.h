/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface SAMLSignature : SAMLBaseElement

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) SAMLKeyInfo *keyInfo;
@property (nonatomic, readonly) NSData *signatureValue;
@property (nonatomic, readonly) NSString *signatureValueId;
@property (nonatomic, readonly) SAMLSignedInfo *signedInfo;

+ (id)createElement:(id*)arg1;

- (id)identifier;
- (bool)isValid;
- (id)keyInfo;
- (id)signatureValue;
- (id)signatureValueId;
- (id)signedInfo;

@end
