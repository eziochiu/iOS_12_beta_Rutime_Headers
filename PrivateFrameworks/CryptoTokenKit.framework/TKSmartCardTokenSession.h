/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardTokenSession : TKTokenSession {
    TKSmartCard * _errorCard;
    bool  _hasSession;
    TKSmartCard * _smartCard;
}

@property (readonly) TKSmartCard *smartCard;

- (void).cxx_destruct;
- (bool)beginRequest:(long long)arg1 error:(id*)arg2;
- (void)endRequest;
- (id)initWithToken:(id)arg1;
- (id)name;
- (id)smartCard;

@end
