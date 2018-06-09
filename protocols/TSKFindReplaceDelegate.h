/* made by EzioChiu.
 */

@protocol TSKFindReplaceDelegate <NSObject>

@required

- (void)setSelection:(TSKSelection *)arg1 onModel:(NSObject *)arg2 withFlags:(unsigned long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleRootIndexRange;

@optional

- (void)findReplaceController:(TSKFindReplaceController *)arg1 didWrapInDirection:(unsigned long long)arg2;
- (bool)findReplaceController:(TSKFindReplaceController *)arg1 shouldSkipSearchReference:(id <TSKSearchReference>)arg2;
- (void)findReplaceControllerDidFindNoResults:(TSKFindReplaceController *)arg1;
- (void)willScrollToReference:(id <TSKSearchReference>)arg1;

@end
