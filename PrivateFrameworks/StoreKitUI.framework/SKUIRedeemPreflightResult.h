/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIRedeemPreflightResult : NSObject {
    SSAccount * _account;
    SKUIClientContext * _clientContext;
    SSVRedeemCodeMetadata * _codeMetadata;
    NSError * _error;
    SKUIRedeemConfiguration * _redeemConfiguration;
    long long  _resultType;
}

@property (nonatomic, retain) SSAccount *account;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, retain) SSVRedeemCodeMetadata *codeMetadata;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, retain) SKUIRedeemConfiguration *redeemConfiguration;
@property (nonatomic) long long resultType;

- (void).cxx_destruct;
- (id)account;
- (id)clientContext;
- (id)codeMetadata;
- (id)error;
- (id)redeemConfiguration;
- (long long)resultType;
- (void)setAccount:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setCodeMetadata:(id)arg1;
- (void)setError:(id)arg1;
- (void)setRedeemConfiguration:(id)arg1;
- (void)setResultType:(long long)arg1;

@end
