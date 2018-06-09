/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NULivePhotoRenderResult : _NURenderResult <NULivePhotoRenderResult> {
    struct CGImage { } * _photo;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _photoTime;
    AVAsset * _video;
    AVVideoComposition * _videoComposition;
    NUImageGeometry * _videoGeometry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) struct CGImage { }*photo;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } photoTime;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;
@property (retain) AVAsset *video;
@property (retain) AVVideoComposition *videoComposition;
@property (retain) NUImageGeometry *videoGeometry;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CGImage { }*)photo;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoTime;
- (void)setPhoto:(struct CGImage { }*)arg1;
- (void)setPhotoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideo:(id)arg1;
- (void)setVideoComposition:(id)arg1;
- (void)setVideoGeometry:(id)arg1;
- (id)video;
- (id)videoComposition;
- (id)videoGeometry;

@end
