/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKCancelSwipeToEditGestureRecognizer : UITapGestureRecognizer {
    GKCollectionViewCell * _currentEditingCell;
}

@property (nonatomic, retain) GKCollectionViewCell *currentEditingCell;

- (id)currentEditingCell;
- (void)dealloc;
- (void)setCurrentEditingCell:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
