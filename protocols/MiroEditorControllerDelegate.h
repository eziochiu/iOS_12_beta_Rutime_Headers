/* made by EzioChiu.
 */

@protocol MiroEditorControllerDelegate <NSObject>

@optional

- (void)editorControllerDidUpdateClips:(MiroEditorController *)arg1;
- (void)editorControllerWillUpdateClips:(MiroEditorController *)arg1;

@end
