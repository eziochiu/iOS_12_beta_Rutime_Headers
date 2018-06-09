/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGExplanatoryView : UIView {
    UIImageView * _glyphView;
    UILabel * _label;
    UITapGestureRecognizer * _tapGesture;
}

- (void).cxx_destruct;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)_configureExplanationLabelWithExplanation:(id)arg1;
- (void)_configureGlyphViewWithGlyph:(id)arg1;
- (void)_updateStyleForGlyphView;
- (void)_updateStyleForLabel;
- (id)_vibrantStyling;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (id)initWithGlyph:(id)arg1 andExplanation:(id)arg2;
- (void)layoutSubviews;

@end
