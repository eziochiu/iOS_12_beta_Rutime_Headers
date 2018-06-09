/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDragManager : NSObject <UIDragInteractionDelegate> {
    <SXDragManagerDataSource> * _dataSource;
    UIDragInteraction * _dragInteraction;
    bool  _enabled;
    unsigned long long  _sharingPolicy;
}

@property (nonatomic) <SXDragManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIDragInteraction *dragInteraction;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long sharingPolicy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (void)dealloc;
- (id)dragInteraction;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (id)dragItemForObject:(id)arg1 withSession:(id)arg2;
- (bool)dragSession:(id)arg1 containsDragItemWithIdentifier:(id)arg2;
- (bool)enabled;
- (id)initWithSharingPolicy:(unsigned long long)arg1 dataSource:(id)arg2;
- (id)itemsForSession:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)setDataSource:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (unsigned long long)sharingPolicy;
- (void)updateAccessibilityDragSourceDescriptorsForDraggableElement:(id)arg1;

@end
