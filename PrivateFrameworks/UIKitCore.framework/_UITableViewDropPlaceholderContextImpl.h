/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITableViewDropPlaceholderContextImpl : NSObject <_UITableViewPlaceholderContext> {
    <UIDragAnimating> * _animator;
    id /* block */  _cellUpdateHandler;
    <_UITableViewPlaceholderContextDelegate> * _delegate;
    UIDragItem * _dragItem;
    NSString * _reuseIdentifier;
    double  _rowHeight;
    NSUUID * _shadowUpdateIdentifier;
}

@property (getter=_animator, setter=_setAnimator:, nonatomic, retain) <UIDragAnimating> *animator;
@property (nonatomic, copy) id /* block */ cellUpdateHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UITableViewPlaceholderContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDragItem *dragItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *reuseIdentifier;
@property (nonatomic) double rowHeight;
@property (getter=_shadowUpdateIdentifier, setter=_setShadowUpdateIdentifier:, nonatomic, retain) NSUUID *shadowUpdateIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_animator;
- (void)_setAnimator:(id)arg1;
- (void)_setShadowUpdateIdentifier:(id)arg1;
- (id)_shadowUpdateIdentifier;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id /* block */)cellUpdateHandler;
- (bool)commitInsertionWithDataSourceUpdates:(id /* block */)arg1;
- (id)delegate;
- (bool)deletePlaceholder;
- (id)dragItem;
- (id)initWithDelegate:(id)arg1 dragItem:(id)arg2 reuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(id /* block */)arg5;
- (id)reuseIdentifier;
- (double)rowHeight;
- (void)setCellUpdateHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDragItem:(id)arg1;
- (void)setReuseIdentifier:(id)arg1;
- (void)setRowHeight:(double)arg1;

@end
