/* made by EzioChiu.
 */

@protocol AVTAvatarAttributeEditorColorSectionProtocol <AVTAvatarAttributeEditorSection>

@required

- (bool)alwaysShowExtended;
- (AVTAvatarColorVariationStore *)colorVariationStore;
- (NSArray *)extendedItems;
- (NSArray *)primaryItems;

@end
