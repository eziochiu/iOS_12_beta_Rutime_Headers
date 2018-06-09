/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MovieController : NSObject <MovieControllerExportProtocol> {
    Composition * _composition;
    AVAssetImageGenerator * _customImageGen;
    long long  _customImageGenCount;
    bool  _forExport;
    id /* block */  _playerReadyCompletionBlock;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    CALayer * compositionLayer;
    float  m_rate;
    CALayer * playerLayer;
    id /* block */  progressUpdateBlock;
    Project * project;
    bool  supportArbitraryAspectRatio;
}

@property (nonatomic, readonly) AVMutableComposition *AVComposition;
@property (nonatomic, readonly) AVMutableAudioMix *audioMix;
@property (retain) Composition *composition;
@property (nonatomic, readonly) CALayer *compositionLayer;
@property (retain) AVAssetImageGenerator *customImageGen;
@property long long customImageGenCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool forExport;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool playAltClips;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic, retain) CALayer *playerLayer;
@property (copy) id /* block */ playerReadyCompletionBlock;
@property (nonatomic, copy) id /* block */ progressUpdateBlock;
@property (retain) Project *project;
@property struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic) bool supportArbitraryAspectRatio;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } temporarySize;
@property (nonatomic, readonly) AVMutableVideoComposition *videoComposition;

+ (id)controllerWithProject:(id)arg1 forExport:(bool)arg2 supportsArbitraryAspectRatio:(bool)arg3;
+ (id)imageFromProject:(id)arg1 atTime:(int)arg2 withSize:(struct CGSize { double x1; double x2; })arg3;

- (void).cxx_destruct;
- (id)AVComposition;
- (void)adjustFadeToBlackTime;
- (void)applyPlayerItemProperties;
- (id)audioMix;
- (void)cancelAllUIImageGeneration;
- (void)clearPlayerItemProperties;
- (id)composition;
- (id)compositionLayer;
- (id)customImageGen;
- (long long)customImageGenCount;
- (void)dealloc;
- (bool)forExport;
- (void)generateOrigUIImagesAsynchronouslyForSize:(struct CGSize { double x1; double x2; })arg1 atTimes:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateUIImagesAsynchronouslyForSize:(struct CGSize { double x1; double x2; })arg1 atTimes:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)imageAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)playAltClips;
- (id)playerItem;
- (id)playerLayer;
- (id /* block */)playerReadyCompletionBlock;
- (id /* block */)progressUpdateBlock;
- (id)project;
- (void)renderBothOrientationsOfFirstFrameAtSize:(struct CGSize { double x1; double x2; })arg1 withCompletion:(id /* block */)arg2;
- (void)setComposition:(id)arg1;
- (void)setCustomImageGen:(id)arg1;
- (void)setCustomImageGenCount:(long long)arg1;
- (void)setFadeToBlackStartTime:(double)arg1 duration:(double)arg2;
- (void)setForExport:(bool)arg1;
- (void)setPlayAltClips:(bool)arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)setPlayerReadyCompletionBlock:(id /* block */)arg1;
- (void)setProgressUpdateBlock:(id /* block */)arg1;
- (void)setProject:(id)arg1;
- (void)setProjectOnComposition;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSupportArbitraryAspectRatio:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)supportArbitraryAspectRatio;
- (void)tearDownProjectDisplay;
- (struct CGSize { double x1; double x2; })temporarySize;
- (void)updateComposition;
- (void)updateForProjectTimeInSeconds:(double)arg1 asynchronous:(bool)arg2 allowUnloading:(bool)arg3;
- (id)videoComposition;

@end
