/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface BadPasswordProxyAuthenticationURLDelegate : ProxyAuthenticationURLDelegate {
    long long  _failureCount;
}

@property long long failureCount;

- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (long long)failureCount;
- (void)setFailureCount:(long long)arg1;

@end
