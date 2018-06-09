/* made by EzioChiu.
 */

@protocol PGSuggester <NSObject>

@required

+ (id)suggesterWithSession:(PGSuggestionSession *)arg1;
+ (NSIndexSet *)suggestionSubtypes;
+ (NSIndexSet *)suggestionTypes;

- (id)init;
- (id)initWithSession:(PGSuggestionSession *)arg1;
- (NSArray *)suggestionsWithOptions:(void *)arg1 progress:(void *)arg2; // needs 2 arg types, found 8: PGSuggestionOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*

@end
