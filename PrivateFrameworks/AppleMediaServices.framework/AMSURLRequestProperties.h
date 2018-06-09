/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLRequestProperties : NSObject <NSCopying, NSMutableCopying> {
    ACAccount * _account;
    NSDictionary * _additionalMetrics;
    long long  _anisetteType;
    <AMSURLBagContract> * _bagContract;
    AMSProcessInfo * _clientInfo;
    long long  _dialogOptions;
    bool  _knownToBeTrusted;
    NSString * _logUUID;
    long long  _mescalType;
    <AMSResponseDecoding> * _responseDecoder;
    long long  _reversePushType;
    bool  _shouldSetCookiesFromResponse;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSDictionary *additionalMetrics;
@property (nonatomic) long long anisetteType;
@property (nonatomic, retain) <AMSURLBagContract> *bagContract;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic) long long dialogOptions;
@property (nonatomic) bool knownToBeTrusted;
@property (nonatomic, retain) NSString *logUUID;
@property (nonatomic) long long mescalType;
@property (nonatomic, retain) <AMSResponseDecoding> *responseDecoder;
@property (nonatomic) long long reversePushType;
@property (nonatomic) bool shouldSetCookiesFromResponse;

- (void).cxx_destruct;
- (id)account;
- (id)additionalMetrics;
- (long long)anisetteType;
- (id)bagContract;
- (id)clientInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dialogOptions;
- (id)init;
- (bool)knownToBeTrusted;
- (id)logUUID;
- (long long)mescalType;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)responseDecoder;
- (long long)reversePushType;
- (void)setAccount:(id)arg1;
- (void)setAdditionalMetrics:(id)arg1;
- (void)setAnisetteType:(long long)arg1;
- (void)setBagContract:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDialogOptions:(long long)arg1;
- (void)setKnownToBeTrusted:(bool)arg1;
- (void)setLogUUID:(id)arg1;
- (void)setMescalType:(long long)arg1;
- (void)setResponseDecoder:(id)arg1;
- (void)setReversePushType:(long long)arg1;
- (void)setShouldSetCookiesFromResponse:(bool)arg1;
- (bool)shouldSetCookiesFromResponse;

@end
