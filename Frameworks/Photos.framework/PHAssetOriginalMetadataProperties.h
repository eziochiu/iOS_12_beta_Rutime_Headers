/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetOriginalMetadataProperties : PHAssetPropertySet {
    NSString * _originalAssetsUUID;
    short  _originalExifOrientation;
    NSString * _originalFilename;
    unsigned long long  _originalFilesize;
    long long  _originalHeight;
    long long  _originalWidth;
}

@property (nonatomic, readonly) NSString *originalAssetsUUID;
@property (nonatomic, readonly) short originalExifOrientation;
@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic, readonly) unsigned long long originalFilesize;
@property (nonatomic, readonly) long long originalHeight;
@property (nonatomic, readonly) long long originalWidth;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)originalAssetsUUID;
- (short)originalExifOrientation;
- (id)originalFilename;
- (unsigned long long)originalFilesize;
- (long long)originalHeight;
- (long long)originalWidth;

@end
