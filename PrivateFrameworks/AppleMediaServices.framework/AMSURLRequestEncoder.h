/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLRequestEncoder : NSObject <AMSRequestEncoding> {
    ACAccount * _account;
    NSDictionary * _additionalMetrics;
    long long  _anisetteType;
    <AMSURLBagContract> * _bagContract;
    AMSProcessInfo * _clientInfo;
    bool  _compressRequestBody;
    long long  _dataEncoding;
    long long  _dialogOptions;
    NSString * _logUUID;
    long long  _mescalType;
    <AMSResponseDecoding> * _responseDecoder;
    bool  _urlKnownToBeTrusted;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSDictionary *additionalMetrics;
@property (nonatomic) long long anisetteType;
@property (nonatomic, retain) <AMSURLBagContract> *bagContract;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic) bool compressRequestBody;
@property (nonatomic) long long dataEncoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dialogOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *logUUID;
@property (nonatomic) long long mescalType;
@property (nonatomic, retain) <AMSResponseDecoding> *responseDecoder;
@property (readonly) Class superclass;
@property (nonatomic) bool urlKnownToBeTrusted;

- (void).cxx_destruct;
- (id)_methodStringFromMethod:(long long)arg1;
- (id)account;
- (id)additionalMetrics;
- (long long)anisetteType;
- (id)bagContract;
- (id)clientInfo;
- (bool)compressRequestBody;
- (long long)dataEncoding;
- (long long)dialogOptions;
- (id)init;
- (id)initWithBagContract:(id)arg1;
- (id)logUUID;
- (long long)mescalType;
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 error:(id*)arg3;
- (id)requestWithMethod:(long long)arg1 URL:(id)arg2 error:(id*)arg3;
- (id)requestWithMethod:(long long)arg1 URL:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (id)requestWithMethod:(long long)arg1 URLString:(id)arg2 error:(id*)arg3;
- (id)requestWithMethod:(long long)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 error:(id*)arg3;
- (id)requestWithMethod:(long long)arg1 bagURL:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (id)responseDecoder;
- (void)setAccount:(id)arg1;
- (void)setAdditionalMetrics:(id)arg1;
- (void)setAnisetteType:(long long)arg1;
- (void)setBagContract:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setCompressRequestBody:(bool)arg1;
- (void)setDataEncoding:(long long)arg1;
- (void)setDialogOptions:(long long)arg1;
- (void)setLogUUID:(id)arg1;
- (void)setMescalType:(long long)arg1;
- (void)setResponseDecoder:(id)arg1;
- (void)setUrlKnownToBeTrusted:(bool)arg1;
- (bool)urlKnownToBeTrusted;

@end
