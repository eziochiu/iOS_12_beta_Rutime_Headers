/* made by EzioChiu.
 */

@protocol UISelectionInteractionAssistant

@required

- (void)configureForHighlightMode;
- (void)configureForSelectionMode;
- (void)rangedMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)scrollSelectionToVisible:(bool)arg1;
- (void)showSelectionCommands;
- (void)updateSelectionRects:(bool)arg1;

@end
