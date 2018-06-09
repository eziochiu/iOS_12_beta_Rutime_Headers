/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKAllowDrawingWhilePresentingPopoverView : UIView {
    bool  _isHitTesting;
    PKInlineInkPicker * _weakInkPicker;
}

@property (nonatomic) bool isHitTesting;
@property (nonatomic) PKInlineInkPicker *weakInkPicker;

- (void).cxx_destruct;
- (id)_rootAncestorViewOfDimmmingView:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)isHitTesting;
- (void)setIsHitTesting:(bool)arg1;
- (void)setWeakInkPicker:(id)arg1;
- (id)weakInkPicker;

@end
