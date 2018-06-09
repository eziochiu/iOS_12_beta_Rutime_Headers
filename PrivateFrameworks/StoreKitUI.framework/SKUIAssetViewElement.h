/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAssetViewElement : SKUIViewElement {
    bool  _ITunesStream;
    double  _initialPlaybackTime;
    long long  _itemIdentifier;
    NSURL * _keyCertificateURL;
    NSURL * _keyServerURL;
    double  _playbackDuration;
    NSString * _secureKeyDeliveryType;
    NSURL * _url;
}

@property (getter=isITunesStream, nonatomic, readonly) bool ITunesStream;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic) double initialPlaybackTime;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly, retain) NSURL *keyCertificateURL;
@property (nonatomic, readonly, retain) NSURL *keyServerURL;
@property (nonatomic, readonly) double playbackDuration;
@property (nonatomic, readonly, copy) NSString *secureKeyDeliveryType;

- (void).cxx_destruct;
- (id)URL;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (double)initialPlaybackTime;
- (bool)isITunesStream;
- (long long)itemIdentifier;
- (id)keyCertificateURL;
- (id)keyServerURL;
- (double)playbackDuration;
- (id)secureKeyDeliveryType;
- (void)setInitialPlaybackTime:(double)arg1;

@end
