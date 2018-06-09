/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIRecordButton : UIButton {
    bool  _recording;
    UIView * _redSquare;
    NSLayoutConstraint * _redSquareWidthConstraint;
}

@property (nonatomic) bool recording;
@property (nonatomic) UIView *redSquare;
@property (nonatomic) NSLayoutConstraint *redSquareWidthConstraint;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)recording;
- (id)redSquare;
- (id)redSquareWidthConstraint;
- (void)setHighlighted:(bool)arg1;
- (void)setRecording:(bool)arg1;
- (void)setRedSquare:(id)arg1;
- (void)setRedSquareWidthConstraint:(id)arg1;

@end
