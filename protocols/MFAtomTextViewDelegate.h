/* made by EzioChiu.
 */

@protocol MFAtomTextViewDelegate <NSObject>

@required

- (UIView<MFAtomTextViewAtomLayout> *)atomTextView:(MFAtomTextView *)arg1 atomViewForRepresentedObject:(id)arg2;

@optional

- (NSArray *)atomTextView:(MFAtomTextView *)arg1 representedObjectsFromPasteboard:(UIPasteboard *)arg2;
- (bool)atomTextView:(MFAtomTextView *)arg1 storeRepresentedObjects:(NSArray *)arg2 onPasteboard:(UIPasteboard *)arg3;
- (void)atomTextViewDidChangeSelection:(MFAtomTextView *)arg1;
- (NSArray *)supportedPasteboardTypesForAtomTextView:(MFAtomTextView *)arg1;

@end
