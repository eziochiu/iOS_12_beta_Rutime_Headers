/* made by EzioChiu.
 */

@protocol AVTAvatarAttributeEditorSectionItem <NSObject>

@required

- (id /* block */)avatarUpdater:(void *)arg1; // needs 1 arg types, found 5: id /* block */, AVTAvatarConfiguration *, void*, id, SEL
- (bool)isSelected;
- (NSString *)localizedName;
- (void)setSelected:(bool)arg1;

@end
