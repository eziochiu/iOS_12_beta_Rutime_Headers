/* made by EzioChiu.
 */

@protocol NTTodayContext <NTTodayResultsSource, NTTodayEventTracker>

@required

- (id /* block */)newResultsHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)setNewResultsHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
