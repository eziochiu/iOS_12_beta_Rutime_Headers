/* made by EzioChiu.
 */

@protocol _UIDruidSourceConnection <NSObject>

@required

- (PBItemCollection *)addItems:(NSArray *)arg1 withOldItemCollection:(PBItemCollection *)arg2;
- (void)beginDragWithTouches:(void *)arg1 touchRoutingPolicy:(void *)arg2 items:(void *)arg3 sourceDataOwner:(void *)arg4 accessibilityEndpoint:(void *)arg5 centroid:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 13: NSSet *, _DUITouchRoutingPolicy *, NSArray *, long long, NSXPCListenerEndpoint *, struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, PBItemCollection *, void*
- (id /* block */)canHandOffCancelledItemsBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)cancelDrag;
- (id /* block */)dataTransferFinishedBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)dirtyItems:(NSArray *)arg1;
- (id /* block */)dragCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, long long, unsigned long long, void*, id, SEL
- (void)dragDidExitApp;
- (id /* block */)handOffCancelledItemsBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSArray *, BKSAnimationFenceHandle *, void*, id, SEL
- (bool)isCancelled;
- (id /* block */)itemDetailProviderBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, unsigned long long, void*, id, SEL
- (id /* block */)itemImageProviderBlock:(void *)arg1; // needs 1 arg types, found 13: id /* block */, unsigned long long, id /* block */, void*, void, id /* block */, NSArray *, _DUIPreview *, BKSAnimationFenceHandle *, void*, void*, id, SEL
- (id /* block */)itemUpdateBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, unsigned long long, _DUIItemDetail *, void*, id, SEL
- (void)setCanHandOffCancelledItemsBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, void*
- (void)setDataTransferFinishedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDragCompletionBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, unsigned long long, void*
- (void)setHandOffCancelledItemsBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, BKSAnimationFenceHandle *, void*
- (void)setItemDetailProviderBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, _DUIItemDetail *, id /* block */, unsigned long long, void*
- (void)setItemImageProviderBlock:(void *)arg1; // needs 1 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, id /* block */, void*, void, id /* block */, NSArray *, _DUIPreview *, BKSAnimationFenceHandle *, void*, void*
- (void)setItemUpdateBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, _DUIItemDetail *, void*
- (void)takeOperationMasksInsideApp:(unsigned long long)arg1 outsideApp:(unsigned long long)arg2 prefersFullSizePreview:(bool)arg3;

@end
