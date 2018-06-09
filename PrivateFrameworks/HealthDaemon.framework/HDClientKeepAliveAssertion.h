/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDClientKeepAliveAssertion : HDAssertion {
    NSString * _clientBundleIdentifier;
    id /* block */  _clientResumeDidFailHandler;
    NSDate * _lastLaunchAttempt;
    long long  _launchCount;
    NSDictionary * _payloadOptions;
}

@property (nonatomic, readonly, copy) NSString *clientBundleIdentifier;
@property (nonatomic, copy) id /* block */ clientResumeDidFailHandler;
@property (nonatomic, copy) NSDate *lastLaunchAttempt;
@property (nonatomic) long long launchCount;
@property (nonatomic, readonly, copy) NSDictionary *payloadOptions;

- (void).cxx_destruct;
- (id)clientBundleIdentifier;
- (id /* block */)clientResumeDidFailHandler;
- (id)initWithOwnerIdentifier:(id)arg1 clientBundleIdentifier:(id)arg2 payloadOptions:(id)arg3;
- (id)lastLaunchAttempt;
- (long long)launchCount;
- (id)payloadOptions;
- (void)setClientResumeDidFailHandler:(id /* block */)arg1;
- (void)setLastLaunchAttempt:(id)arg1;
- (void)setLaunchCount:(long long)arg1;

@end
