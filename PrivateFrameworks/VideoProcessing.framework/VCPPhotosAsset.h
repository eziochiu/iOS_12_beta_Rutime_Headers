/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPPhotosAsset : VCPAsset {
    PHAsset * _asset;
    NSDictionary * _cachedExif;
    NSArray * _cachedResources;
    bool  _onceExif;
}

@property (nonatomic, readonly) NSArray *resources;

+ (id)assetWithPHAsset:(id)arg1;

- (void).cxx_destruct;
- (double)duration;
- (id)exif;
- (id)fingerprint;
- (struct __CVBuffer { }*)imageWithPreferredDimension:(unsigned long long)arg1;
- (id)initWithPHAsset:(id)arg1;
- (id)localIdentifier;
- (id)mainFileURL;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)modificationDate;
- (id)movie;
- (id)originalMovie;
- (float)photoOffsetSeconds;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (id)resources;
- (float)slowmoRate;

@end
