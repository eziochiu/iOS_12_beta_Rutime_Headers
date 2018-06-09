/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUVideoRenderResult : _NURenderResult <NUVideoRenderResult> {
    AVAudioMix * _audioMix;
    NUImageGeometry * _geometry;
    AVAsset * _video;
    AVVideoComposition * _videoComposition;
}

@property (retain) AVAudioMix *audioMix;
@property (readonly) AVComposition *avAsset;
@property (readonly) AVVideoComposition *avVideoComposition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NUImageGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;
@property (retain) AVAsset *video;
@property (retain) AVVideoComposition *videoComposition;

- (void).cxx_destruct;
- (id)audioMix;
- (id)avAsset;
- (id)avVideoComposition;
- (id)description;
- (id)geometry;
- (void)setAudioMix:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setVideo:(id)arg1;
- (void)setVideoComposition:(id)arg1;
- (id)video;
- (id)videoComposition;

@end
