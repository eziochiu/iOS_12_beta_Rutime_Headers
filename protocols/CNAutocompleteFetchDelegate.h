/* made by EzioChiu.
 */

@protocol CNAutocompleteFetchDelegate <NSObject>

@required

- (void)autocompleteFetch:(id <CNCancelable>)arg1 didFailWithError:(NSError *)arg2;
- (void)autocompleteFetch:(id <CNCancelable>)arg1 didReceiveResults:(NSArray *)arg2;

@optional

- (bool)autocompleteFetch:(void *)arg1 shouldExpectSupplementalResultsForRequest:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: <CNCancelable> *, CNAutocompleteFetchRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSDictionary *)autocompleteFetch:(id <CNCancelable>)arg1 willAdjustResults:(NSArray *)arg2;
- (void)autocompleteFetch:(id <CNCancelable>)arg1 willSortResults:(NSArray *)arg2;
- (void)autocompleteFetchDidBeginNetworkActivity:(id <CNCancelable>)arg1;
- (void)autocompleteFetchDidEndNetworkActivity:(id <CNCancelable>)arg1;
- (void)autocompleteFetchDidFinish:(id <CNCancelable>)arg1;
- (id /* block */)resultComparatorForAutocompleteFetch:(void *)arg1; // needs 1 arg types, found 6: id /* block */, id, void*, id, SEL, <CNCancelable> *

@end
