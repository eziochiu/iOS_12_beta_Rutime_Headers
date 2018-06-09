/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDTransportControlView : UIView {
    UIImage * _defaultFastForwardButtonImage;
    UIImage * _defaultLeftButtonImage;
    UIButton * _fastForwardButton;
    UIButton * _leftButton;
    UIImage * _pauseImage;
    UIImage * _playImage;
    UIButton * _playPauseButton;
    bool  _progressActive;
}

@property (nonatomic, retain) UIImage *defaultFastForwardButtonImage;
@property (nonatomic, retain) UIImage *defaultLeftButtonImage;
@property (nonatomic, readonly) UIButton *fastForwardButton;
@property (nonatomic, readonly) UIButton *leftButton;
@property (nonatomic, retain) UIImage *pauseImage;
@property (nonatomic, retain) UIImage *playImage;
@property (nonatomic, readonly) UIButton *playPauseButton;
@property (nonatomic) bool progressActive;

- (void).cxx_destruct;
- (void)_addConstraints;
- (void)_createSubviews;
- (id)_defaultImageForIdentifier:(id)arg1;
- (void)_updateProgressActive;
- (id)defaultFastForwardButtonImage;
- (id)defaultLeftButtonImage;
- (id)fastForwardButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)leftButton;
- (id)pauseImage;
- (id)playImage;
- (id)playPauseButton;
- (bool)progressActive;
- (void)setDefaultFastForwardButtonImage:(id)arg1;
- (void)setDefaultLeftButtonImage:(id)arg1;
- (void)setPauseImage:(id)arg1;
- (void)setPlayImage:(id)arg1;
- (void)setProgressActive:(bool)arg1;

@end
