/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMZoomButton : UIControl {
    UIImageView * __backgroundImageView;
    UIImageView * __circleImageView;
    UIView * __contentContainerView;
    UILabel * __zoomFactorLabel;
    NSString * _contentSizeCategory;
    <CAMZoomButtonDelegate> * _delegate;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _highlightingTransform;
    long long  _orientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
    double  _zoomFactor;
}

@property (nonatomic, readonly) UIImageView *_backgroundImageView;
@property (nonatomic, readonly) UIImageView *_circleImageView;
@property (nonatomic, readonly) UIView *_contentContainerView;
@property (nonatomic, readonly) UILabel *_zoomFactorLabel;
@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic) <CAMZoomButtonDelegate> *delegate;
@property (setter=_setHighlightingTransform:, nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } highlightingTransform;
@property (nonatomic) long long orientation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;
@property (nonatomic) double zoomFactor;

+ (bool)_shouldUseLargeButtonSizeForContentSize:(id)arg1;
+ (double)circleDiameterForContentSize:(id)arg1;
+ (double)fontSizeForContentSize:(id)arg1;
+ (id)textForZoomFactor:(double)arg1;

- (void).cxx_destruct;
- (double)_backgroundImageDiameterForContentSize:(id)arg1;
- (id)_backgroundImageView;
- (id)_circleImageView;
- (double)_circleLineWidthForContentSize:(id)arg1;
- (void)_commonCAMZoomButtonInitialization;
- (id)_contentContainerView;
- (id)_createBackgroundImageForContentSize:(id)arg1;
- (id)_createCircleImageForContentSize:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_highlightingTransformForHighlighted:(bool)arg1;
- (void)_performHighlightAnimation;
- (void)_setHighlightingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_targetTransformForHighlighted:(bool)arg1 orientation:(long long)arg2;
- (void)_updateForContentSize;
- (void)_updateZoomFactorLabel;
- (id)_zoomFactorLabel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)contentSizeCategory;
- (id)delegate;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })highlightingTransform;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (long long)orientation;
- (void)setContentSizeCategory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setZoomFactor:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;
- (void)tintColorDidChange;
- (double)zoomFactor;

@end
