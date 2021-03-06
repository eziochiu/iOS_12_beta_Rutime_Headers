/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInlineAudioTransportControls : MPTransportControls {
    long long  _style;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })availableProgressControlAreaFrame;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)layoutSubviews;
- (id)newVolumeSlider;
- (id)pauseButtonImage;
- (id)playButtonImage;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(bool)arg3;

@end
