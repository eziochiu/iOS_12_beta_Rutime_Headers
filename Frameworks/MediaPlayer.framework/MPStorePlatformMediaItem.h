/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStorePlatformMediaItem : MPNondurableMediaItem {
    MPStoreItemMetadata * _storeItemMetadata;
}

@property (nonatomic, retain) MPStoreItemMetadata *storeItemMetadata;

+ (id)defaultPropertyValues;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_valueFromMetadataForProperty:(id)arg1;
- (id)artworkCatalog;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreItemMetadata:(id)arg1;
- (void)setStoreItemMetadata:(id)arg1;
- (id)storeItemMetadata;
- (id)valueForProperty:(id)arg1;

@end
