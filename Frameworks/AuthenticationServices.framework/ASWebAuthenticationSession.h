/* made by EzioChiu
   Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
 */

@interface ASWebAuthenticationSession : NSObject {
    SFAuthenticationSession * _authenticationSession;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithURL:(id)arg1 callbackURLScheme:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)start;

@end
