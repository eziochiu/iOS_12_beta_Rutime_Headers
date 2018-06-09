/* made by EzioChiu.
 */

@protocol PGCoordinatableSuggester <PGSuggester>

@required

- (<PGSuggestion> *)nextSuggestion;
- (void)reset;
- (void)startSuggestingWithOptions:(PGSuggestionOptions *)arg1;

@end
