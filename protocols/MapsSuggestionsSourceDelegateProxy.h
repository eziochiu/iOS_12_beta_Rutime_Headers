/* made by EzioChiu.
 */

@protocol MapsSuggestionsSourceDelegateProxy <NSObject>

@required

- (void)addOrUpdateSuggestionEntriesData:(void *)arg1 sourceNameData:(void *)arg2 deleteMissing:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 8: NSData *, NSData *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)deleteEntriesData:(void *)arg1 sourceNameData:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 7: NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
