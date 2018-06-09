/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVInspectorHighlightView : UIView {
    UIColor * _borderColor;
    UIView * _highlightView;
    _TVInspectorHighlightMetadataView * _metadataView;
    UIWindow * _targetWindow;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic, retain) UIColor *contentColor;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic) UIWindow *targetWindow;

- (void).cxx_destruct;
- (id)borderColor;
- (id)contentColor;
- (id)descriptionLabel;
- (void)highlightView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBorderColor:(id)arg1;
- (void)setContentColor:(id)arg1;
- (void)setTargetWindow:(id)arg1;
- (id)targetWindow;

@end
