/* made by EzioChiu.
 */

@protocol CKPermanentReadableEventStore

@required

- (void)historicEventWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, CKHistoricEvent *, void*
- (void)historicEventsWithSourceBundleIdentifier:(void *)arg1 andIntent:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSDictionary *, void*

@end
