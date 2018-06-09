/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITableViewDropAnimationToTarget : _UITableViewDropAnimation {
    UITableViewCell * _cell;
    bool  _didSearchForCell;
    UIDragPreviewTarget * _target;
}

@property (nonatomic, retain) UITableViewCell *cell;
@property (nonatomic) bool didSearchForCell;
@property (nonatomic, retain) UIDragPreviewTarget *target;

- (void).cxx_destruct;
- (id)cell;
- (id)cellForTargetContainerInTableView:(id)arg1;
- (bool)didSearchForCell;
- (id)initWithDragItem:(id)arg1 target:(id)arg2;
- (void)setCell:(id)arg1;
- (void)setDidSearchForCell:(bool)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
