/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICAuthorizeMachineURLRequest : ICStoreURLRequest {
    NSString * _keybagPath;
    NSString * _reason;
    NSData * _tokenData;
}

@property (nonatomic, copy) NSString *keybagPath;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSData *tokenData;

- (void).cxx_destruct;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)keybagPath;
- (id)reason;
- (void)setKeybagPath:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setTokenData:(id)arg1;
- (id)tokenData;

@end
