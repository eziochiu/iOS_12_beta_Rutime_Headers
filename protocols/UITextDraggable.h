/* made by EzioChiu.
 */

@protocol UITextDraggable <UITextInput>

@required

- (bool)isTextDragActive;
- (void)setTextDragDelegate:(id <UITextDragDelegate>)arg1;
- (void)setTextDragOptions:(long long)arg1;
- (<UITextDragDelegate> *)textDragDelegate;
- (UIDragInteraction *)textDragInteraction;
- (long long)textDragOptions;

@end
