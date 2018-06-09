/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISFrameProcessingRequest : NSObject {
    CIImage * _image;
    double  _renderScale;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    long long  _type;
}

@property (nonatomic, retain) CIImage *image;
@property (nonatomic) double renderScale;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)image;
- (double)renderScale;
- (void)setImage:(id)arg1;
- (void)setRenderScale:(double)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setType:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (long long)type;

@end
