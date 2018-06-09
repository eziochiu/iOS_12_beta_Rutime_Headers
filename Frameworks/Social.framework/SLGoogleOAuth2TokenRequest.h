/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLGoogleOAuth2TokenRequest : NSObject

+ (id)_urlRequestForParams:(id)arg1;
+ (id)urlRequestForClientID:(id)arg1 secret:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4;
+ (id)urlRequestForClientID:(id)arg1 secret:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4 codeVerifier:(id)arg5;
+ (id)urlRequestForClientID:(id)arg1 secret:(id)arg2 refreshToken:(id)arg3;

@end
