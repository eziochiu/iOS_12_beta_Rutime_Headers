/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHLivePhotoEditingContext : NSObject {
    ISEditSession * _editSession;
}

@property float audioVolume;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (copy) id /* block */ frameProcessor;
@property (readonly) CIImage *fullSizeImage;
@property (readonly) unsigned int orientation;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoTime;

+ (id)errorWithUnderlyingError:(id)arg1;

- (void).cxx_destruct;
- (float)audioVolume;
- (void)cancel;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id /* block */)frameProcessor;
- (id)fullSizeImage;
- (id)init;
- (id)initWithLivePhotoEditingInput:(id)arg1;
- (unsigned int)orientation;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoTime;
- (void)prepareLivePhotoForPlaybackWithTargetSize:(struct CGSize { double x1; double x2; })arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveLivePhotoToOutput:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAudioVolume:(float)arg1;
- (void)setFrameProcessor:(id /* block */)arg1;

@end
