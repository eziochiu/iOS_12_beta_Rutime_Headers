/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMInstructionLabel : UIView {
    UILabel * __label;
    <CAMInstructionLabelDelegate> * _delegate;
    long long  _style;
    NSString * _text;
    bool  _useModeDialFontSize;
}

@property (nonatomic, readonly) double _backgroundAlpha;
@property (nonatomic, readonly) UILabel *_label;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _textInsets;
@property (nonatomic) <CAMInstructionLabelDelegate> *delegate;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) bool useModeDialFontSize;

- (void).cxx_destruct;
- (double)_backgroundAlpha;
- (id)_label;
- (id)_textAttributes;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_textInsets;
- (void)_updateLabel;
- (void)_updateLayer;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setUseModeDialFontSize:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (id)text;
- (void)updateToContentSize:(id)arg1;
- (bool)useModeDialFontSize;

@end
