/* made by EzioChiu.
 */

@protocol UIKeyboardCandidateGridLayoutDelegate <UICollectionViewDelegate>

@required

- (struct CGSize { double x1; double x2; })rowSizeForGridLayout;

@end
