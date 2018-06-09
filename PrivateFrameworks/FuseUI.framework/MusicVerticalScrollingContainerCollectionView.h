/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicVerticalScrollingContainerCollectionView : UICollectionView {
    struct { 
        unsigned int didLayoutSubviews : 1; 
        unsigned int contentSizeDidChange : 1; 
    }  _delegateRespondsToSelector;
    bool  _performingLayout;
}

@property (nonatomic) <MusicVerticalScrollingContainerCollectionViewDelegate> *delegate;
@property (getter=isPerformingLayout, nonatomic, readonly) bool performingLayout;

- (bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (bool)isPerformingLayout;
- (void)layoutSubviews;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;

@end
