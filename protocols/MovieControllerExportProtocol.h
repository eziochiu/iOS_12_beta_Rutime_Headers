/* made by EzioChiu.
 */

@protocol MovieControllerExportProtocol <NSObject>

@required

- (AVMutableComposition *)AVComposition;
- (AVMutableAudioMix *)audioMix;
- (CALayer *)compositionLayer;
- (CALayer *)playerLayer;
- (id /* block */)progressUpdateBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, double, void*, id, SEL
- (Project *)project;
- (void)setPlayerLayer:(CALayer *)arg1;
- (void)setProgressUpdateBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, void*
- (void)setProject:(Project *)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSupportArbitraryAspectRatio:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (bool)supportArbitraryAspectRatio;
- (void)updateComposition;
- (AVMutableVideoComposition *)videoComposition;

@optional

- (bool)playAltClips;
- (void)setPlayAltClips:(bool)arg1;
- (void)tearDownProjectDisplay;

@end
