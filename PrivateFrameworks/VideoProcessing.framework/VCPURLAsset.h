/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPURLAsset : VCPAsset {
    NSDictionary * _cachedExif;
    NSURL * _imageURL;
    unsigned long long  _mediaSubtypes;
    long long  _mediaType;
    AVURLAsset * _movie;
    bool  _onceExif;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
}

+ (id)imageAssetWithURL:(id)arg1;
+ (id)livePhotoAssetWithImageURL:(id)arg1 andMovieURL:(id)arg2;
+ (id)movieAssetWithURL:(id)arg1;

- (void).cxx_destruct;
- (double)duration;
- (id)exif;
- (struct __CVBuffer { }*)imageWithPreferredDimension:(unsigned long long)arg1;
- (id)initWithImageURL:(id)arg1;
- (id)initWithImageURL:(id)arg1 andMovieURL:(id)arg2;
- (id)initWithMovieURL:(id)arg1;
- (id)mainFileURL;
- (unsigned long long)mediaSubtypes;
- (long long)mediaType;
- (id)modificationDate;
- (id)movie;
- (id)originalMovie;
- (float)photoOffsetSeconds;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (float)slowmoRate;

@end
