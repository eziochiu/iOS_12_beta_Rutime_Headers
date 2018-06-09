/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListCollectionViewFlowLayout : UICollectionViewFlowLayout {
    NSIndexPath * _animationLeadingNotificationRequestIndexPath;
    unsigned long long  _animationState;
    double  _forcedContentSizeHeight;
    NSMutableArray * _insertedIndexPaths;
    bool  _isChangingBounds;
    NSMutableArray * _removedIndexPaths;
    NSMutableArray * _replacedIndexPaths;
    bool  _showingNotificationsHistory;
}

@property (nonatomic, retain) NSIndexPath *animationLeadingNotificationRequestIndexPath;
@property (nonatomic) unsigned long long animationState;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } effectiveContentSize;
@property (nonatomic) double forcedContentSizeHeight;
@property (nonatomic, retain) NSMutableArray *insertedIndexPaths;
@property (nonatomic, retain) NSMutableArray *removedIndexPaths;
@property (nonatomic, retain) NSMutableArray *replacedIndexPaths;
@property (getter=isShowingNotificationsHistory, nonatomic) bool showingNotificationsHistory;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id /* block */)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (double)_animationScaleForItemWithIndexDifference:(long long)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 leadingNotificationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_configureLayoutAttributesForCoalescing:(id)arg1;
- (void)_configureLayoutAttributesForCoalescingAnimation:(id)arg1;
- (bool)_isCellFrameVisibleForCoalescingAnimation:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)_zIndexForCellAtIndexPath:(id)arg1;
- (id)animationLeadingNotificationRequestIndexPath;
- (unsigned long long)animationState;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGSize { double x1; double x2; })effectiveContentSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (double)forcedContentSizeHeight;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)insertedIndexPaths;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowingNotificationsHistory;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)removedIndexPaths;
- (id)replacedIndexPaths;
- (void)setAnimationLeadingNotificationRequestIndexPath:(id)arg1;
- (void)setAnimationState:(unsigned long long)arg1;
- (void)setAnimationState:(unsigned long long)arg1 forLeadingNotificationRequestAtIndexPath:(id)arg2;
- (void)setForcedContentSizeHeight:(double)arg1;
- (void)setInsertedIndexPaths:(id)arg1;
- (void)setRemovedIndexPaths:(id)arg1;
- (void)setReplacedIndexPaths:(id)arg1;
- (void)setShowingNotificationsHistory:(bool)arg1;

@end
