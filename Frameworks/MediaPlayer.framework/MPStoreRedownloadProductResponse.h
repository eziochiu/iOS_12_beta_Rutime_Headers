/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreRedownloadProductResponse : NSObject {
    NSURL * _fallbackStreamingKeyCertificateURL;
    NSURL * _fallbackStreamingKeyServerURL;
    NSDictionary * _responseDictionary;
}

@property (nonatomic, copy) NSURL *fallbackStreamingKeyCertificateURL;
@property (nonatomic, copy) NSURL *fallbackStreamingKeyServerURL;
@property (nonatomic, readonly) MPStoreRedownloadProductItem *item;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (id)fallbackStreamingKeyCertificateURL;
- (id)fallbackStreamingKeyServerURL;
- (id)initWithResponseDictionary:(id)arg1;
- (id)item;
- (id)responseDictionary;
- (void)setFallbackStreamingKeyCertificateURL:(id)arg1;
- (void)setFallbackStreamingKeyServerURL:(id)arg1;

@end
