/* made by EzioChiu.
 */

@protocol WBSURLCompletionDataSource <NSObject>

@required

- (void)enumerateMatchDataForTypedStringHint:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 13: WBSURLCompletionUserTypedString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, id /* block */, void*, <WBSURLCompletionMatchData> *, id /* block */, void*, void*
- (<WBSURLCompletionMatchData> *)fakeBookmarkMatchDataWithURLString:(NSString *)arg1 title:(NSString *)arg2;

@end
