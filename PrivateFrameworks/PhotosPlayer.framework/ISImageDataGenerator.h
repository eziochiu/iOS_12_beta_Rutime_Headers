/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISImageDataGenerator : NSObject {
    AVAsset * _asset;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _preferredTransform;
    AVVideoComposition * _videoComposition;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;

- (void).cxx_destruct;
- (id)asset;
- (id)error;
- (id)init;
- (id)initWithAsset:(id)arg1 videoComposition:(id)arg2 error:(id*)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (long long)status;
- (id)videoComposition;

@end
