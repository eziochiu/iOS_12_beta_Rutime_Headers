/* made by EzioChiu.
 */

@protocol JTCompositionClipsDataSource <NSObject>

@required

- (JTAudioClip *)backgroundAudioClip;
- (JTClip *)clipAtIndex:(long long)arg1;
- (long long)clipCount;
- (JTClip *)currentClip;
- (bool)dontRenderLiveTitles;
- (bool)duckAllAudioClips;
- (int)duration;
- (int)frameRate;
- (bool)fullScreenPlaybackOnExternalDisplay;
- (double)imageScale;
- (long long)indexOfClip:(JTClip *)arg1;
- (bool)isExporting;
- (bool)isFullScreen;
- (struct CGSize { double x1; double x2; })naturalSize;
- (bool)screenCanShow2160P;
- (bool)supportsDeepColor;
- (int)timeScale;
- (bool)use2160Pcontent:(bool)arg1;

@end
