/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface _PULivePhotoTrimScrubberLoupeViewImageRequest : NSObject {
    AVAsset * _asset;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sourceTime;
    AVVideoComposition * _videoComposition;
}

@property (nonatomic, retain) AVAsset *asset;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } sourceTime;
@property (nonatomic, retain) AVVideoComposition *videoComposition;

- (void).cxx_destruct;
- (id)asset;
- (struct CGSize { double x1; double x2; })imageSize;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (void)setAsset:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoComposition:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sourceTime;
- (id)videoComposition;

@end
