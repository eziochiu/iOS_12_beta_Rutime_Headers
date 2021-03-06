/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLYahooWebAuthRequest : NSObject

+ (id)authCodeFromURLRequest:(id)arg1;
+ (void)clearCookiesFromStorage:(id)arg1;
+ (id)requestForURL:(id)arg1;
+ (id)urlForClientID:(id)arg1 redirectURI:(id)arg2 username:(id)arg3;
+ (bool)urlPageWillContainAuthorizationCode:(id)arg1;
+ (id)urlRequestForClientID:(id)arg1 redirectURI:(id)arg2 username:(id)arg3;

@end
