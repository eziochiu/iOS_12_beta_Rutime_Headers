/* made by EzioChiu.
 */

@protocol MapsSuggestionsImprover <MapsSuggestionsObject>

@required

+ (bool)isEnabled;

- (bool)improveEntry:(MapsSuggestionsEntry *)arg1;

@end
