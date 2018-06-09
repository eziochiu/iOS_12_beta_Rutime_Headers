/* made by EzioChiu.
 */

@protocol AVTAvatarAttributeEditorControllerSubSelectionDelegate <NSObject>

@optional

- (void)attributeEditorSectionController:(id <AVTAvatarAttributeEditorSectionController>)arg1 didSelectSectionItem:(id <AVTAvatarAttributeEditorSectionItem>)arg2;
- (void)attributeEditorSectionController:(id <AVTAvatarAttributeEditorSectionController>)arg1 didUpdateSectionItem:(id <AVTAvatarAttributeEditorSectionItem>)arg2;
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id <AVTAvatarAttributeEditorSectionController>)arg1;

@end
