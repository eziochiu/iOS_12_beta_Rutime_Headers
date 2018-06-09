/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsTransportStackView : UIView {
    bool  _empty;
    MediaControlsTransportButton * _leftButton;
    NSBundle * _mediaControlsBundle;
    MediaControlsTransportButton * _middleButton;
    <MediaControlsRatingActionSheet> * _ratingActionSheetDelegate;
    MPCPlayerResponse * _response;
    MediaControlsTransportButton * _rightButton;
    long long  _style;
    UIColor * _tintColorForCurrentStyle;
}

@property (getter=isEmpty, nonatomic) bool empty;
@property (nonatomic, retain) MediaControlsTransportButton *leftButton;
@property (nonatomic, retain) NSBundle *mediaControlsBundle;
@property (nonatomic, retain) MediaControlsTransportButton *middleButton;
@property (nonatomic) <MediaControlsRatingActionSheet> *ratingActionSheetDelegate;
@property (nonatomic, retain) MPCPlayerResponse *response;
@property (nonatomic, retain) MediaControlsTransportButton *rightButton;
@property (nonatomic) long long style;
@property (nonatomic, retain) UIColor *tintColorForCurrentStyle;

- (void).cxx_destruct;
- (void)_resetTransportButton:(id)arg1;
- (void)_updateButtonBlendMode:(id)arg1;
- (void)_updateButtonImage:(id)arg1 button:(id)arg2;
- (void)buttonHoldBegan:(id)arg1;
- (void)buttonHoldReleased:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEmpty;
- (void)layoutSubviews;
- (id)leftButton;
- (id)mediaControlsBundle;
- (id)middleButton;
- (id)ratingActionSheetDelegate;
- (id)response;
- (id)rightButton;
- (void)setEmpty:(bool)arg1;
- (void)setLeftButton:(id)arg1;
- (void)setMediaControlsBundle:(id)arg1;
- (void)setMiddleButton:(id)arg1;
- (void)setRatingActionSheetDelegate:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setRightButton:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTintColorForCurrentStyle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (id)tintColorForCurrentStyle;
- (void)touchUpInsideLeftButton:(id)arg1;
- (void)touchUpInsideMiddleButton:(id)arg1;
- (void)touchUpInsideRightButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
