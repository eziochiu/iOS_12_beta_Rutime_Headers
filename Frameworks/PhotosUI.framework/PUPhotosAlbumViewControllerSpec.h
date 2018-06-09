/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosAlbumViewControllerSpec : PULegacyViewControllerSpec {
    long long  _fullMomentsSectionHeaderStyle;
}

@property (nonatomic, readonly) double contentCornerRadius;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } fullMomentsLevelSectionHeaderHighlightInset;
@property (nonatomic, readonly) unsigned long long fullMomentsSectionHeaderBackgroundStyle;
@property (nonatomic, readonly) long long fullMomentsSectionHeaderStyle;
@property (nonatomic, readonly) bool shouldUseAspectItems;

+ (id)padSpec;
+ (id)phoneSpec;

- (long long)cellFillMode;
- (void)configureCollectionViewGridLayout:(id)arg1;
- (double)contentCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fullMomentsLevelSectionHeaderHighlightInset;
- (unsigned long long)fullMomentsSectionHeaderBackgroundStyle;
- (long long)fullMomentsSectionHeaderStyle;
- (id)gridSpec;
- (bool)shouldUseAspectItems;

@end
