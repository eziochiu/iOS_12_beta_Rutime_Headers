/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKTextAttachmentDrawingResizeView : UIView {
    bool  _enabled;
    bool  _highlighted;
    UIImageView * _knobView;
    UIView * _separatorHighlightedView;
    UIView * _separatorView;
    bool  _top;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) UIImageView *knobView;
@property (nonatomic, retain) UIView *separatorHighlightedView;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, readonly) bool shown;
@property (nonatomic) bool top;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (bool)enabled;
- (bool)highlighted;
- (id)init:(bool)arg1;
- (id)knobView;
- (void)layoutSubviews;
- (double)resizeContentInset;
- (id)separatorHighlightedView;
- (id)separatorView;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setKnobView:(id)arg1;
- (void)setSeparatorHighlightedView:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setTop:(bool)arg1;
- (void)show:(bool)arg1 enabled:(bool)arg2 animated:(bool)arg3;
- (bool)shown;
- (bool)top;

@end
