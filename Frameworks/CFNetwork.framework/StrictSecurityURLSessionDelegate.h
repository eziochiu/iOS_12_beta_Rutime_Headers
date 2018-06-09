/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface StrictSecurityURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    bool  _cancelTrustChallenge;
    bool  _challengedForServerTrust;
    bool  _expectSchemeUpgradeDueToDynamicHSTS;
    bool  _redirected;
    bool  _setIgnoreHSTSInRedirect;
    id /* block */  _xctAssert;
}

@property bool cancelTrustChallenge;
@property bool challengedForServerTrust;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool expectSchemeUpgradeDueToDynamicHSTS;
@property (readonly) unsigned long long hash;
@property bool redirected;
@property bool setIgnoreHSTSInRedirect;
@property (readonly) Class superclass;
@property (copy) id /* block */ xctAssert;

- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)cancelTrustChallenge;
- (bool)challengedForServerTrust;
- (void)dealloc;
- (bool)expectSchemeUpgradeDueToDynamicHSTS;
- (id)initWithXCTAssertBlock:(id /* block */)arg1;
- (bool)redirected;
- (void)setCancelTrustChallenge:(bool)arg1;
- (void)setChallengedForServerTrust:(bool)arg1;
- (void)setExpectSchemeUpgradeDueToDynamicHSTS:(bool)arg1;
- (bool)setIgnoreHSTSInRedirect;
- (void)setRedirected:(bool)arg1;
- (void)setSetIgnoreHSTSInRedirect:(bool)arg1;
- (void)setXctAssert:(id /* block */)arg1;
- (id /* block */)xctAssert;

@end
