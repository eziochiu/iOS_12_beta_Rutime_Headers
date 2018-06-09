/* made by EzioChiu.
 */

@protocol _UIAtomTextViewDelegate <NSObject>

@required

- (UIView<_UIAtomTextViewAtomLayout> *)atomTextView:(_UIAtomTextView *)arg1 atomViewForRepresentedObject:(id)arg2;

@optional

- (NSArray *)atomTextView:(_UIAtomTextView *)arg1 representedObjectsFromPasteboard:(UIPasteboard *)arg2;
- (bool)atomTextView:(_UIAtomTextView *)arg1 storeRepresentedObjects:(NSArray *)arg2 onPasteboard:(UIPasteboard *)arg3;
- (void)atomTextViewDidChangeSelection:(_UIAtomTextView *)arg1;
- (NSArray *)supportedPasteboardTypesForAtomTextView:(_UIAtomTextView *)arg1;

@end
