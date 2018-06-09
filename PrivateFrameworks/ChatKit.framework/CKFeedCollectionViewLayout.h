/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFeedCollectionViewLayout : UICollectionViewLayout {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _captionPadding;
    unsigned long long  _compositeLayoutSection;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    <CKFeedCollectionViewLayoutDatasource> * _feedDatasource;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _floatPadding;
    double  _floatingBottomDecorationHeight;
    long long  _flowDirection;
    struct CGSize { 
        double width; 
        double height; 
    }  _interTileSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _noCaptionSpacing;
    double  _sectionHeaderBackgroundHeight;
    NSMutableArray * _sectionLayoutInfos;
    struct CGSize { 
        double width; 
        double height; 
    }  _sectionReferenceSize;
    bool  _shouldDisplayCaptionsBelowBatches;
    bool  _shouldDisplaySectionHeadersBelowSections;
    bool  _shouldFloatOverShortDistances;
    bool  _shouldFloatSectionHeaders;
    bool  _shouldFloatThumbnails;
    bool  _shouldFloatWithEase;
    double  _thumbnailSpacing;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } captionPadding;
@property (nonatomic) unsigned long long compositeLayoutSection;
@property (nonatomic) <CKFeedCollectionViewLayoutDatasource> *feedDatasource;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } floatPadding;
@property (nonatomic) double floatingBottomDecorationHeight;
@property (nonatomic) long long flowDirection;
@property (nonatomic, readonly) unsigned int flowDirectionEdge;
@property (nonatomic) struct CGSize { double x1; double x2; } interTileSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } noCaptionSpacing;
@property (nonatomic) double sectionHeaderBackgroundHeight;
@property (nonatomic) struct CGSize { double x1; double x2; } sectionReferenceSize;
@property (nonatomic) bool shouldDisplayCaptionsBelowBatches;
@property (nonatomic) bool shouldDisplaySectionHeadersBelowSections;
@property (nonatomic) bool shouldFloatOverShortDistances;
@property (nonatomic) bool shouldFloatSectionHeaders;
@property (nonatomic) bool shouldFloatThumbnails;
@property (nonatomic) bool shouldFloatWithEase;
@property (nonatomic) double thumbnailSpacing;

- (void).cxx_destruct;
- (void)_adjustFloatingLayoutAttributes:(id)arg1 inSection:(long long)arg2;
- (id)_delegate;
- (void)_enumerateSectionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withBlock:(id /* block */)arg2;
- (void)_getSize:(out struct CGSize { double x1; double x2; }*)arg1 headerSize:(out struct CGSize { double x1; double x2; }*)arg2 footerSize:(out struct CGSize { double x1; double x2; }*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long*)arg7 forSection:(long long)arg8 isJoined:(bool)arg9;
- (void)_getSizeForHorizontalFlowDirection:(out struct CGSize { double x1; double x2; }*)arg1 headerSize:(out struct CGSize { double x1; double x2; }*)arg2 footerSize:(out struct CGSize { double x1; double x2; }*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long*)arg7 forSection:(long long)arg8 isJoined:(bool)arg9;
- (void)_getSizeForVerticalFlowDirection:(out struct CGSize { double x1; double x2; }*)arg1 headerSize:(out struct CGSize { double x1; double x2; }*)arg2 footerSize:(out struct CGSize { double x1; double x2; }*)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long*)arg7 forSection:(long long)arg8 isJoined:(bool)arg9;
- (void)_sectionAtIndex:(long long)arg1 sizeDidChangeFrom:(struct CGSize { double x1; double x2; })arg2 to:(struct CGSize { double x1; double x2; })arg3;
- (void)_updateGlobalLayoutInfoWithOptions:(long long)arg1 sectionsWithUpdatedGroupIDs:(out id*)arg2;
- (void)_updateLayoutInfoForSection:(long long)arg1 ignoreSizeChange:(bool)arg2;
- (void)_updateSectionLayoutInfosIfNecessary;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })captionPadding;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (unsigned long long)compositeLayoutSection;
- (void)enumerateImageElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)feedDatasource;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })floatPadding;
- (double)floatingBottomDecorationHeight;
- (long long)flowDirection;
- (unsigned int)flowDirectionEdge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSection:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForTileAtIndexPath:(id)arg1;
- (id)indexPathForImageElementAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })interTileSpacing;
- (void)invalidateLayoutAndCache;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })noCaptionSpacing;
- (long long)numberOfTilesOmittedInSection:(long long)arg1;
- (void)prepareLayout;
- (double)sectionHeaderBackgroundHeight;
- (struct CGSize { double x1; double x2; })sectionReferenceSize;
- (id)sectionsJoinedWithSection:(long long)arg1;
- (void)setCaptionPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCompositeLayoutSection:(unsigned long long)arg1;
- (void)setFeedDatasource:(id)arg1;
- (void)setFloatPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFloatingBottomDecorationHeight:(double)arg1;
- (void)setFlowDirection:(long long)arg1;
- (void)setInterTileSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setNoCaptionSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setSectionHeaderBackgroundHeight:(double)arg1;
- (void)setSectionReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldDisplayCaptionsBelowBatches:(bool)arg1;
- (void)setShouldDisplaySectionHeadersBelowSections:(bool)arg1;
- (void)setShouldFloatOverShortDistances:(bool)arg1;
- (void)setShouldFloatSectionHeaders:(bool)arg1;
- (void)setShouldFloatThumbnails:(bool)arg1;
- (void)setShouldFloatWithEase:(bool)arg1;
- (void)setThumbnailSpacing:(double)arg1;
- (bool)shouldDisplayCaptionsBelowBatches;
- (bool)shouldDisplaySectionHeadersBelowSections;
- (bool)shouldFloatOverShortDistances;
- (bool)shouldFloatSectionHeaders;
- (bool)shouldFloatThumbnails;
- (bool)shouldFloatWithEase;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)thumbnailSpacing;
- (void)updateCollectionViewWithDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3;

@end
