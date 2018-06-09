/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIPagedLabel : UIView {
    UIView * _instructionContainerLeft;
    UIView * _instructionContainerRight;
    UILabel * _instructionLabelLeft;
    UILabel * _instructionLabelRight;
    bool  _isProximity;
    UIScrollView * _scrollView;
}

- (void).cxx_destruct;
- (void)clear;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isProximity:(bool)arg2;
- (void)setText:(id)arg1;
- (void)setupViews;
- (void)slideInText:(id)arg1 afterDelay:(double)arg2 completion:(id /* block */)arg3;

@end
