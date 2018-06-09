/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLYahooOAuth2TokenRequest : NSObject

+ (id)_urlRequestForParams:(id)arg1 clientID:(id)arg2 secret:(id)arg3;
+ (id)urlRequestForClientID:(id)arg1 secret:(id)arg2 redirectURI:(id)arg3 authCode:(id)arg4;
+ (id)urlRequestForClientID:(id)arg1 secret:(id)arg2 refreshToken:(id)arg3;

@end
