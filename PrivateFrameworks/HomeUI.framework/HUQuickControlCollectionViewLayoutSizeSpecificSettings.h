/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlCollectionViewLayoutSizeSpecificSettings : NSObject {
    HUQuickControlCollectionViewLayoutGridSectionSettings * _gridSectionSettings;
    HUQuickControlCollectionViewLayoutSupplementarySectionSettings * _supplementarySectionSettings;
}

@property (nonatomic, copy) HUQuickControlCollectionViewLayoutGridSectionSettings *gridSectionSettings;
@property (nonatomic, copy) HUQuickControlCollectionViewLayoutSupplementarySectionSettings *supplementarySectionSettings;

- (void).cxx_destruct;
- (id)gridSectionSettings;
- (id)init;
- (void)setGridSectionSettings:(id)arg1;
- (void)setSupplementarySectionSettings:(id)arg1;
- (id)supplementarySectionSettings;

@end
