/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest {
    NSURL * _customForYouURL;
    long long  _filteringPolicy;
}

@property (nonatomic, copy) NSURL *customForYouURL;
@property (nonatomic) long long filteringPolicy;

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customForYouURL;
- (void)encodeWithCoder:(id)arg1;
- (long long)filteringPolicy;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setCustomForYouURL:(id)arg1;
- (void)setFilteringPolicy:(long long)arg1;

@end
