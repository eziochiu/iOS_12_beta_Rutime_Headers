/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateGridLayout : UICollectionViewLayout {
    NSArray * _candidateGroups;
    int  _candidatesVisualStyle;
    NSMutableArray * _cellAttributes;
    unsigned long long  _columnsCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSMutableArray * _dummyAttributes;
    NSSet * _emphasizedCandidates;
    bool  _expanded;
    bool  _forceJustifiedAlignment;
    bool  _hasExtensionCandidates;
    bool  _hasSecondaryCandidates;
    double  _headerViewHeight;
    bool  _needsLayout;
    bool  _needsPaddingForIndexScrubber;
    bool  _padInlineFloatingCanExpand;
    NSMutableDictionary * _supplementaryAttributes;
    bool  _supportsNumberKeySelection;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 8; 
        unsigned int padding : 8; 
    }  _visualStyling;
}

@property (nonatomic, retain) NSArray *candidateGroups;
@property (nonatomic) int candidatesVisualStyle;
@property (nonatomic, retain) NSMutableArray *cellAttributes;
@property (nonatomic) unsigned long long columnsCount;
@property (nonatomic, retain) NSMutableArray *dummyAttributes;
@property (nonatomic, retain) NSSet *emphasizedCandidates;
@property (nonatomic) bool expanded;
@property (nonatomic) bool forceJustifiedAlignment;
@property (nonatomic, readonly) double groupBarWidth;
@property (nonatomic) bool hasExtensionCandidates;
@property (nonatomic) bool hasSecondaryCandidates;
@property (nonatomic) double headerViewHeight;
@property (nonatomic) bool needsLayout;
@property (nonatomic) bool needsPaddingForIndexScrubber;
@property (nonatomic) bool padInlineFloatingCanExpand;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } rowSize;
@property (nonatomic, retain) NSMutableDictionary *supplementaryAttributes;
@property (nonatomic) bool supportsNumberKeySelection;
@property (nonatomic) struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; } visualStyling;

+ (void)deemphasizeLastItemIfNeeded:(id)arg1;
+ (id)layout;
+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)attributesWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)candidateGroups;
- (int)candidatesVisualStyle;
- (id)cellAttributes;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (unsigned long long)columnsCount;
- (id)dummyAttributes;
- (id)emphasizedCandidates;
- (bool)expanded;
- (void)finishLayoutForRowWithAttributes:(id)arg1 minimumCellWidth:(double)arg2 remainingWidth:(double)arg3 rowOrigin:(struct CGPoint { double x1; double x2; })arg4 isFirstRow:(bool)arg5 isLastRow:(bool)arg6 zIndex:(long long)arg7;
- (bool)forceJustifiedAlignment;
- (void)getGroupBarWidth:(double*)arg1 headerAttributes:(id*)arg2;
- (double)groupBarWidth;
- (bool)hasExtensionCandidates;
- (bool)hasSecondaryCandidates;
- (double)headerViewHeight;
- (id)init;
- (void)invalidateLayout;
- (id)layoutAttributesForCandidateIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (bool)needsLayout;
- (bool)needsPaddingForIndexScrubber;
- (id)nextCandidateIndexPathFromIndexPath:(id)arg1;
- (unsigned long long)numberOfCandidateSections;
- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (unsigned long long)numberOfSections;
- (bool)padInlineFloatingCanExpand;
- (void)prepareLayout;
- (id)previousCandidateIndexPathFromIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })rowSize;
- (void)setCandidateGroups:(id)arg1;
- (void)setCandidatesVisualStyle:(int)arg1;
- (void)setCellAttributes:(id)arg1;
- (void)setColumnsCount:(unsigned long long)arg1;
- (void)setDummyAttributes:(id)arg1;
- (void)setEmphasizedCandidates:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setForceJustifiedAlignment:(bool)arg1;
- (void)setHasExtensionCandidates:(bool)arg1;
- (void)setHasSecondaryCandidates:(bool)arg1;
- (void)setHeaderViewHeight:(double)arg1;
- (void)setNeedsLayout:(bool)arg1;
- (void)setNeedsPaddingForIndexScrubber:(bool)arg1;
- (void)setPadInlineFloatingCanExpand:(bool)arg1;
- (void)setSupplementaryAttributes:(id)arg1;
- (void)setSupportsNumberKeySelection:(bool)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldShowGroupHeaderForGroup:(id)arg1;
- (id)supplementaryAttributes;
- (bool)supportsNumberKeySelection;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })visualStyling;

@end
