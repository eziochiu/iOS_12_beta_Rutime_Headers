/* made by EzioChiu.
 */

@protocol NDAnalyticsService <NSObject>

@optional

- (void)performExternalAnalyticsRequest:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSSExternalAnalyticsRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)submitEnvelopes:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)submitEnvelopes:(void *)arg1 withForegroundUploadCompletion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
