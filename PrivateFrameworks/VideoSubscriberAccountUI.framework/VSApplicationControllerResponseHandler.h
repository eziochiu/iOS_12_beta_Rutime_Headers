/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSApplicationControllerResponseHandler : NSObject

- (id)_accountAuthenticationWithJavascriptResponse:(id)arg1 error:(id*)arg2;
- (void)_handleJavascriptResponseInternal:(id)arg1 requestType:(long long)arg2 accountAuthentication:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_parseSAMLResponseString:(id)arg1 error:(id*)arg2;
- (void)handleJavascriptResponse:(id)arg1 requestType:(long long)arg2 completionHandler:(id /* block */)arg3;

@end
