/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardToken : TKToken {
    NSData * _AID;
    TKSmartCard * _smartCard;
}

@property (readonly) NSData *AID;
@property (readonly) TKSmartCard *smartCard;

- (void).cxx_destruct;
- (id)AID;
- (void)dealloc;
- (id)initWithSmartCard:(id)arg1 AID:(id)arg2 instanceID:(id)arg3 tokenDriver:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)smartCard;
- (bool)valid;

@end
