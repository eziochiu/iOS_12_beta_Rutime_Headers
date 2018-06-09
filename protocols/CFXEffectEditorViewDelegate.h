/* made by EzioChiu.
 */

@protocol CFXEffectEditorViewDelegate <NSObject>

@required

- (struct CGPoint { double x1; double x2; })effectEditorView:(CFXEffectEditorView *)arg1 cornerAttachmentPositionForEffect:(CFXEffect *)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didBeginEditingTextForEffect:(CFXEffect *)arg2;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didEditTextForEffect:(CFXEffect *)arg2 newText:(NSString *)arg3;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didEndEditingTextForEffect:(CFXEffect *)arg2 wasCancelled:(bool)arg3;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didRemoveEffect:(CFXEffect *)arg2;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didTransformEffect:(CFXEffect *)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (CFXEffect *)effectEditorView:(CFXEffectEditorView *)arg1 effectAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectEditorView:(CFXEffectEditorView *)arg1 frameForEffect:(CFXEffect *)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 includeTracking:(bool)arg4;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 isEffectAtPoint:(struct CGPoint { double x1; double x2; })arg2 effect:(CFXEffect *)arg3;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 shouldEditTextForEffect:(CFXEffect *)arg2;
- (JTEffectTextEditingProperties *)effectEditorView:(CFXEffectEditorView *)arg1 textEditingPropertiesForEffect:(CFXEffect *)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 displayScale:(double)arg4;
- (NSString *)effectEditorView:(CFXEffectEditorView *)arg1 textForEffect:(CFXEffect *)arg2;
- (JTEffectFrame *)effectEditorView:(CFXEffectEditorView *)arg1 viewInfoForEffect:(CFXEffect *)arg2 relativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)effectEditorViewDidBeginEditing:(CFXEffectEditorView *)arg1;
- (void)effectEditorViewDidEndEditing:(CFXEffectEditorView *)arg1;

@optional

- (void)effectEditorView:(CFXEffectEditorView *)arg1 didBeginEditingEffect:(CFXEffect *)arg2;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didEndEditingByTappingOutSideEffectAtScreenPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didEndEditingEffect:(CFXEffect *)arg2;
- (void)effectEditorView:(CFXEffectEditorView *)arg1 didMoveEffect:(CFXEffect *)arg2 withTouchPoint:(struct CGPoint { double x1; double x2; })arg3;
- (unsigned long long)effectEditorView:(CFXEffectEditorView *)arg1 maximumTextLengthForEffect:(CFXEffect *)arg2;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 presentCustomTextEditingUI:(CFXEffect *)arg2;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 shouldMoveEffect:(CFXEffect *)arg2;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 shouldRemoveEffect:(CFXEffect *)arg2;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 shouldRotateEffect:(CFXEffect *)arg2;
- (bool)effectEditorView:(CFXEffectEditorView *)arg1 shouldScaleEffect:(CFXEffect *)arg2;
- (void)effectEditorViewDidEndPreviewingEditingEffect:(CFXEffectEditorView *)arg1;
- (bool)effectEditorViewShouldPreviewEditEffect:(CFXEffectEditorView *)arg1;
- (bool)effectEditorViewShouldShowFaceReticle:(CFXEffectEditorView *)arg1;
- (void)effectEditorViewWillBeginPreviewingEditEffect:(CFXEffectEditorView *)arg1;

@end
