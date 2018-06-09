/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAML.framework/SAML
 */

@interface SAMLAuthNRequest : XMLWrapperDoc {
    SAMLAuthNRequestElement * _requestElement;
    NSData * _schemaData;
}

@property (nonatomic, retain) NSString *issuer;
@property (nonatomic, retain) SAMLAuthNRequestElement *requestElement;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3;
- (id)issuer;
- (id)requestElement;
- (void)setForceAuthN:(bool)arg1;
- (void)setIsPassive:(bool)arg1;
- (void)setIssuer:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setRequestElement:(id)arg1;
- (void)setSubjectFromResponse:(id)arg1;

@end
