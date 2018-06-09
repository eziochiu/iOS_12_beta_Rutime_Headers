/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISScrollViewVitalityController : NSObject {
    bool  __isPerformingChanges;
    NSHashTable * __playerViews;
    UIScrollView * __scrollView;
    bool  _decelerating;
    NSDate * _estimatedScrollEndDate;
    bool  _hasTargetContentOffset;
    bool  _scrolling;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetContentOffset;
    ISVisibilityOffsetHelper * _visibilityOffsetHelper;
}

@property (setter=_setPerformingChanges:, nonatomic) bool _isPerformingChanges;
@property (nonatomic, readonly) NSHashTable *_playerViews;
@property (setter=_setScrollView:, nonatomic) UIScrollView *_scrollView;
@property (nonatomic, readonly) bool canPerformVitality;
@property (getter=isDecelerating, nonatomic) bool decelerating;
@property (nonatomic, retain) NSDate *estimatedScrollEndDate;
@property (nonatomic) bool hasTargetContentOffset;
@property (getter=isScrolling, nonatomic) bool scrolling;
@property (nonatomic) struct CGPoint { double x1; double x2; } targetContentOffset;
@property (nonatomic, readonly) ISVisibilityOffsetHelper *visibilityOffsetHelper;

- (void).cxx_destruct;
- (bool)_isPerformingChanges;
- (id)_newVitalityFilter;
- (id)_playerViews;
- (id)_scrollView;
- (void)_setPerformingChanges:(bool)arg1;
- (void)_setScrollView:(id)arg1;
- (void)_updateVitalityFilters;
- (void)addPlayerView:(id)arg1;
- (bool)canPerformVitality;
- (void)canPerformVitalityDidChange;
- (void)didLayoutPlayerViews;
- (id)estimatedScrollEndDate;
- (bool)hasTargetContentOffset;
- (id)init;
- (bool)isDecelerating;
- (bool)isScrolling;
- (void)performChanges:(id /* block */)arg1;
- (void)removePlayerView:(id)arg1;
- (void)setDecelerating:(bool)arg1;
- (void)setEstimatedScrollEndDate:(id)arg1;
- (void)setHasTargetContentOffset:(bool)arg1;
- (void)setScrolling:(bool)arg1;
- (void)setTargetContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffset;
- (id)visibilityOffsetHelper;

@end
