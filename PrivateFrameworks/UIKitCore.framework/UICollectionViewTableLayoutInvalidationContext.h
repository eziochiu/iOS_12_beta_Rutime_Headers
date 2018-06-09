/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionViewTableLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    bool  _invalidateTableLayoutDelegateMetrics;
}

@property (nonatomic) bool invalidateTableLayoutDelegateMetrics;

- (bool)invalidateTableLayoutDelegateMetrics;
- (void)setInvalidateTableLayoutDelegateMetrics:(bool)arg1;

@end
