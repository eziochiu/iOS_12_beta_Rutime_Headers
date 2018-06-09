/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSpeechBalloonBackgroundView : UIView {
    _GKCustomDrawnSpeechBalloonBackgroundView * _customDrawnView;
    unsigned char  _drawStyle;
    _GKImageSpeechBalloonBackgroundView * _strokedImageView;
    unsigned char  _tipDirection;
}

@property (nonatomic, retain) _GKCustomDrawnSpeechBalloonBackgroundView *customDrawnView;
@property (nonatomic) unsigned char drawStyle;
@property (nonatomic, retain) _GKImageSpeechBalloonBackgroundView *strokedImageView;
@property (nonatomic) unsigned char tipDirection;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)customDrawnView;
- (void)dealloc;
- (unsigned char)drawStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCustomDrawnView:(id)arg1;
- (void)setDrawStyle:(unsigned char)arg1;
- (void)setStrokedImageView:(id)arg1;
- (void)setTipDirection:(unsigned char)arg1;
- (id)strokedImageView;
- (unsigned char)tipDirection;

@end
