/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUICollectionView : UICollectionView {
    struct { 
        unsigned int layoutBelowDisabled : 1; 
    }  _flags;
}

- (void)_performWithoutLayoutBelow:(id /* block */)arg1;
- (bool)_shouldFadeCellsForBoundChangeWhileRotating;
- (void)layoutBelowIfNeeded;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
