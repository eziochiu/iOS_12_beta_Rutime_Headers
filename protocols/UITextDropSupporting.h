/* made by EzioChiu.
 */

@protocol UITextDropSupporting <UITextDroppable, UITextPasteConfigurationSupporting>

@required

- (bool)allowsEditingTextAttributes;
- (void)becomeDropResponder;
- (bool)canBecomeDropResponder;
- (void)droppingFinished;
- (void)droppingStarted;
- (void)resignDropResponderWithDropPerformed:(bool)arg1;

@optional

- (struct CGPoint { double x1; double x2; })contentOffsetForSameViewDrops;
- (void)sanitizeAttributedText:(NSMutableAttributedString *)arg1;
- (void)setContentOffsetForSameViewDrops:(struct CGPoint { double x1; double x2; })arg1;

@end
