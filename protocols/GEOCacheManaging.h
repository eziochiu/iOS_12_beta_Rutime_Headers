/* made by EzioChiu.
 */

@protocol GEOCacheManaging <NSObject>

@required

- (void)checkHasExpiredWithInvalidationDatas:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (long long)invalidationStateForComponent:(GEOPDComponent *)arg1;
- (long long)invalidationStateForPlace:(GEOPDPlace *)arg1;
- (void)snapshotWithFilePathArray:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)versionsForDomains:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

@end
