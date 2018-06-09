/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewPlaceholderContext : NSObject <UICollectionViewPlaceholderContext, _UICollectionViewDropPlaceholderContext> {
    _UIDropAnimationHandlers * _animationHandlers;
    id /* block */  _cellUpdateHandler;
    <_UICollectionViewPlaceholderContextDelegate> * _delegate;
    UIDragItem * _dragItem;
    NSIndexPath * _originalInsertionIndexPath;
    NSString * _reuseIdentifier;
    NSUUID * _shadowUpdateIdentifier;
}

@property (nonatomic, retain) _UIDropAnimationHandlers *animationHandlers;
@property (nonatomic, copy) id /* block */ cellUpdateHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UICollectionViewPlaceholderContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDragItem *dragItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *originalInsertionIndexPath;
@property (nonatomic, retain) NSString *reuseIdentifier;
@property (nonatomic, retain) NSUUID *shadowUpdateIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id)animationHandlers;
- (id /* block */)cellUpdateHandler;
- (bool)commitInsertionWithDataSourceUpdates:(id /* block */)arg1;
- (id)delegate;
- (bool)deletePlaceholder;
- (id)description;
- (id)dragItem;
- (id)initWithOriginalInsertionIndexPath:(id)arg1 dragItem:(id)arg2 reuseIdentifier:(id)arg3 delegate:(id)arg4 cellUpdateHandler:(id /* block */)arg5;
- (id)originalInsertionIndexPath;
- (id)reuseIdentifier;
- (void)setAnimationHandlers:(id)arg1;
- (void)setCellUpdateHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragItem:(id)arg1;
- (void)setNeedsCellUpdate;
- (void)setOriginalInsertionIndexPath:(id)arg1;
- (void)setReuseIdentifier:(id)arg1;
- (void)setShadowUpdateIdentifier:(id)arg1;
- (id)shadowUpdateIdentifier;

@end
