/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCWaveformScrollView : UIScrollView {
    unsigned long long  _ignoreContentOffsetChangesCount;
}

- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)beginIgnoringContentOffsetChanges;
- (struct CGPoint { double x1; double x2; })contentOffsetInPresentationLayer:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2 usingCurrentAnimatedPosition:(bool)arg3;
- (void)endIgnoringContentOffsetChanges;
- (bool)isAccessibilityElement;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;

@end
