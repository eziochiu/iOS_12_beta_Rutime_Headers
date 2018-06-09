/* made by EzioChiu.
 */

@protocol MapsSuggestionsSource <MapsSuggestionsObject>

@required

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (bool)canProduceEntriesOfType:(unsigned long long)arg1;
- (<MapsSuggestionsSourceDelegate> *)delegate;
- (id)init;
- (id)initWithDelegate:(id <MapsSuggestionsSourceDelegate>)arg1;
- (bool)removeEntry:(void *)arg1 behavior:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 7: MapsSuggestionsEntry *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDelegate:(id <MapsSuggestionsSourceDelegate>)arg1;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntries;

@end
