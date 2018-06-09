/* made by EzioChiu.
 */

@protocol TVAuxiliaryViewSelecting <NSObject>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })selectionMarginsForSize:(struct CGSize { double x1; double x2; })arg1;

@optional

- (void)animateWithAuxiliarySelectionState:(void *)arg1 animations:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
