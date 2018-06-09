/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUAdStore : NSObject {
    NSMutableDictionary * _ads;
}

@property (nonatomic, readonly) NSMutableDictionary *ads;

- (void).cxx_destruct;
- (void)addAd:(id)arg1;
- (id)ads;
- (id)adsForState:(unsigned long long)arg1;
- (id)allAds;
- (id)init;
- (void)removeAd:(id)arg1;

@end
