/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlayButton : SVButton {
    bool  _paused;
}

@property (nonatomic) bool paused;

- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)displayAsPaused;
- (void)displayAsPlaying;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (bool)paused;
- (void)setPaused:(bool)arg1;
- (void)updateBackgroundColor;

@end
