/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICAuthorizeMachineRequest : NSObject <NSCopying> {
    NSString * _keybagPath;
    long long  _qualityOfService;
    NSString * _reason;
    ICStoreRequestContext * _requestContext;
    NSData * _tokenData;
}

@property (nonatomic, copy) NSString *keybagPath;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) ICStoreRequestContext *requestContext;
@property (nonatomic, copy) NSData *tokenData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestContext:(id)arg1;
- (id)keybagPath;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (long long)qualityOfService;
- (id)reason;
- (id)requestContext;
- (void)setKeybagPath:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setReason:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setTokenData:(id)arg1;
- (id)tokenData;

@end
