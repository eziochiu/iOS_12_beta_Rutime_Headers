/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICUserCredentialRequest : NSObject <NSCopying> {
    ICClientInfo * _clientInfo;
    ICUserIdentity * _identity;
    ICUserIdentityStore * _identityStore;
    long long  _qualityOfService;
    double  _timeoutInterval;
}

@property (nonatomic, readonly, copy) ICClientInfo *clientInfo;
@property (nonatomic, readonly, copy) ICUserIdentity *identity;
@property (nonatomic, readonly) ICUserIdentityStore *identityStore;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) double timeoutInterval;

- (void).cxx_destruct;
- (id)clientInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identity;
- (id)identityStore;
- (id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3;
- (long long)qualityOfService;
- (void)setQualityOfService:(long long)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (double)timeoutInterval;

@end
