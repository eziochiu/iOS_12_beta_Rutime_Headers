/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookRegistrationRequest : SLFacebookRequest {
    SLFacebookRegistrationInfo * _registrationInfo;
}

- (void).cxx_destruct;
- (void)_prepareRequestForValidation;
- (id)_sha1HashForString:(id)arg1;
- (id)_tokenSecret;
- (id)_urlEncodedString:(id)arg1;
- (id)initWithRegistrationInfo:(id)arg1;
- (void)performRequestWithHandler:(id /* block */)arg1;

@end
