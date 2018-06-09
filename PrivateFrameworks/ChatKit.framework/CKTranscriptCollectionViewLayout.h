/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout {
    double  _anchorYPosition;
    NSArray * _associatedLayoutAttributes;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSArray * _decorationLayoutAttributes;
    CADisplayLink * _displayLink;
    bool  _easingUp;
    NSMutableDictionary * _finalParentVerticalOffsets;
    bool  _hasLoadMore;
    bool  _holdingBoundsInvalidation;
    NSIndexSet * _indicesOfChatItemsToBeInsertedWithoutFading;
    NSIndexSet * _indicesOfChatItemsToBeRemovedWithoutFading;
    NSMutableDictionary * _initialParentLayoutAttributes;
    NSMutableIndexSet * _insertedAssociatedLayoutAttributes;
    bool  _isResting;
    NSArray * _layoutAttributes;
    NSArray * _oldAssociatedLayoutAttributes;
    double  _prevTimestamp;
    bool  _sizeCategoryIsAccessibilitySizeCategory;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetContentOffset;
    bool  _useFastQuanta;
    bool  _useInitialLayoutAttributesForRotation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
}

@property (nonatomic) double anchorYPosition;
@property (nonatomic, copy) NSArray *associatedLayoutAttributes;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, copy) NSArray *decorationLayoutAttributes;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic) bool easingUp;
@property (nonatomic, retain) NSMutableDictionary *finalParentVerticalOffsets;
@property (nonatomic) bool hasLoadMore;
@property (getter=isHoldingBoundsInvalidation, nonatomic) bool holdingBoundsInvalidation;
@property (nonatomic, retain) NSIndexSet *indicesOfChatItemsToBeInsertedWithoutFading;
@property (nonatomic, retain) NSIndexSet *indicesOfChatItemsToBeRemovedWithoutFading;
@property (nonatomic, retain) NSMutableDictionary *initialParentLayoutAttributes;
@property (nonatomic, retain) NSMutableIndexSet *insertedAssociatedLayoutAttributes;
@property (nonatomic) bool isResting;
@property (nonatomic, copy) NSArray *layoutAttributes;
@property (nonatomic, copy) NSArray *oldAssociatedLayoutAttributes;
@property (nonatomic) double prevTimestamp;
@property (nonatomic) bool sizeCategoryIsAccessibilitySizeCategory;
@property (nonatomic) struct CGPoint { double x1; double x2; } targetContentOffset;
@property (nonatomic) bool useFastQuanta;
@property (getter=isUsingInitialLayoutAttributesForRotation, nonatomic) bool useInitialLayoutAttributesForRotation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleBounds;

+ (Class)layoutAttributesClass;
+ (long long)translateLayoutIndexToEffectIndex:(long long)arg1;

- (void).cxx_destruct;
- (void)_dealloc;
- (double)anchorYPosition;
- (id)associatedLayoutAttributes;
- (double)bezierPointForPercentage:(double)arg1 anchor1:(double)arg2 anchor2:(double)arg3 control1:(double)arg4 control2:(double)arg5;
- (void)clearParentInitialIndexesAndFinalOffsets;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (id)decorationLayoutAttributes;
- (id)displayLink;
- (void)displayLinkFired:(id)arg1;
- (bool)easingUp;
- (long long)effectIndexForDecorationViewAtIndex:(long long)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalParentVerticalOffsets;
- (bool)hasLoadMore;
- (id)indicesOfChatItemsToBeInsertedWithoutFading;
- (id)indicesOfChatItemsToBeRemovedWithoutFading;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialParentLayoutAttributes;
- (id)insertedAssociatedLayoutAttributes;
- (void)invalidateDisplayLink;
- (bool)isHoldingBoundsInvalidation;
- (bool)isResting;
- (bool)isUsingInitialLayoutAttributesForRotation;
- (id)layoutAttributes;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)oldAssociatedLayoutAttributes;
- (void)prepareLayout;
- (void)prepareLayoutForRotisserieScrolling;
- (double)prevTimestamp;
- (void)reduceMotionSettingChanged:(id)arg1;
- (void)reloadData;
- (void)setAnchorYPosition:(double)arg1;
- (void)setAssociatedLayoutAttributes:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDecorationLayoutAttributes:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setEasingUp:(bool)arg1;
- (void)setFinalParentVerticalOffsets:(id)arg1;
- (void)setHasLoadMore:(bool)arg1;
- (void)setHoldingBoundsInvalidation:(bool)arg1;
- (void)setIndicesOfChatItemsToBeInsertedWithoutFading:(id)arg1;
- (void)setIndicesOfChatItemsToBeRemovedWithoutFading:(id)arg1;
- (void)setInitialIndex:(unsigned long long)arg1 forParentOfAssociatedItemInsertedAtIndex:(unsigned long long)arg2;
- (void)setInitialParentLayoutAttributes:(id)arg1;
- (void)setInsertedAssociatedLayoutAttributes:(id)arg1;
- (void)setIsResting:(bool)arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setOldAssociatedLayoutAttributes:(id)arg1;
- (void)setPrevTimestamp:(double)arg1;
- (void)setSizeCategoryIsAccessibilitySizeCategory:(bool)arg1;
- (void)setTargetContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setUseFastQuanta:(bool)arg1;
- (void)setUseInitialLayoutAttributesForRotation:(bool)arg1;
- (void)setVerticalOffset:(double)arg1 forParentOfAssociatedItemDeletedAtIndex:(unsigned long long)arg2;
- (void)setVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)sizeCategoryDidChange:(id)arg1;
- (bool)sizeCategoryIsAccessibilitySizeCategory;
- (struct CGPoint { double x1; double x2; })targetContentOffset;
- (void)updateAssociatedLayoutAttributesIfNecessary;
- (void)updateAttributesForAnchorYChangeWithAttributes:(id)arg1;
- (void)updateAttributesForTargetContentOffsetChangeWithAttributes:(id)arg1;
- (void)updateContentSize;
- (void)updateFrames;
- (bool)useFastQuanta;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleBounds;

@end
