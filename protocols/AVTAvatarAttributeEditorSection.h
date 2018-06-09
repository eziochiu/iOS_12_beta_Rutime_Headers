/* made by EzioChiu.
 */

@protocol AVTAvatarAttributeEditorSection <NSObject>

@required

- (NSString *)identifier;
- (NSString *)localizedName;
- (NSArray *)sectionItems;
- (bool)shouldDisplaySeparatorBeforeSection:(id <AVTAvatarAttributeEditorSection>)arg1;
- (bool)shouldDisplayTitle;

@end
