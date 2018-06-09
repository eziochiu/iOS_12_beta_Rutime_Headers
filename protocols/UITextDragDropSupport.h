/* made by EzioChiu.
 */

@protocol UITextDragDropSupport <NSObject>

@required

- (bool)accessibilityCanDrag;
- (UIDragInteraction *)dragInteraction;
- (UIDropInteraction *)dropInteraction;
- (bool)isDragActive;
- (bool)isDropActive;
- (void)notifyTextInteraction;

@end
