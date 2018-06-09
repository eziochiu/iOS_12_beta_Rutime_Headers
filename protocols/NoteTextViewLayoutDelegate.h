/* made by EzioChiu.
 */

@protocol NoteTextViewLayoutDelegate

@required

- (bool)isNoteTextViewVisible:(NoteTextView *)arg1;
- (void)noteTextView:(NoteTextView *)arg1 didChangeContentSize:(struct CGSize { double x1; double x2; })arg2;

@end
