/* made by EzioChiu.
 */

@protocol JTTextEffectEditorViewDelegate <NSObject>

@required

- (bool)textEffectEditorView:(JTTextEffectEditorView *)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(NSString *)arg3;
- (void)textEffectEditorView:(JTTextEffectEditorView *)arg1 textChanged:(NSString *)arg2 shouldUpdateTextEditingProperties:(bool)arg3;

@end
