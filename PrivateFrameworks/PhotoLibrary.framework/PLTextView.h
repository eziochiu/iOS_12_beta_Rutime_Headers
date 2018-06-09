/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTextView : UITextView {
    UILabel * _placeholder;
    bool  _showingPlaceholder;
}

- (id)_placeholder;
- (void)dealloc;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updatePlaceholder;

@end
