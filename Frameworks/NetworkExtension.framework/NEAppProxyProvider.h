/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAppProxyProvider : NETunnelProvider

- (void)cancelProxyWithError:(id)arg1;
- (bool)handleNewFlow:(id)arg1;
- (void)startProxyWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopProxyWithReason:(long long)arg1 completionHandler:(id /* block */)arg2;

@end