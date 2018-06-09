/* made by EzioChiu.
 */

@protocol _UIDruidDestinationConnection

@required

- (id /* block */)connectionBlock:(void *)arg1; // needs 1 arg types, found 9: id /* block */, PBItemCollection *, NSArray *, NSArray *, unsigned long long, bool, void*, id, SEL
- (void)dirtyItems:(NSArray *)arg1;
- (id /* block */)dragEndBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (id /* block */)dropPerformBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, PBItemCollection *, NSArray *, NSArray *, void*, id, SEL
- (void)enableKeyboardIfNeeded;
- (id /* block */)handOffDroppedItemsBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSArray *, BKSAnimationFenceHandle *, void*, id, SEL
- (id /* block */)itemDetailProviderBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, unsigned long long, void*, id, SEL
- (id /* block */)itemImageProviderBlock:(void *)arg1; // needs 1 arg types, found 13: id /* block */, unsigned long long, id /* block */, void*, void, id /* block */, NSArray *, _DUIPreview *, BKSAnimationFenceHandle *, void*, void*, id, SEL
- (id /* block */)itemUpdateBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, unsigned long long, _DUIItemDetail *, void*, id, SEL
- (id /* block */)itemsAddedBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSArray *, PBItemCollection *, void*, id, SEL
- (void)requestDropWithOperation:(unsigned long long)arg1;
- (void)sawDragEndEvent;
- (unsigned int)sessionIdentifier;
- (void)setConnectionBlock:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PBItemCollection *, NSArray *, NSArray *, unsigned long long, bool, void*
- (void)setDragEndBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDropPerformBlock:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PBItemCollection *, NSArray *, NSArray *, void*
- (void)setHandOffDroppedItemsBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, BKSAnimationFenceHandle *, void*
- (void)setItemDetailProviderBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, _DUIItemDetail *, id /* block */, unsigned long long, void*
- (void)setItemImageProviderBlock:(void *)arg1; // needs 1 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, id /* block */, void*, void, id /* block */, NSArray *, _DUIPreview *, BKSAnimationFenceHandle *, void*, void*
- (void)setItemUpdateBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, _DUIItemDetail *, void*
- (void)setItemsAddedBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, PBItemCollection *, void*
- (void)takePotentialDrop:(_DUIPotentialDrop *)arg1;

@end
