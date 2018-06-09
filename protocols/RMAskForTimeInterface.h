/* made by EzioChiu.
 */

@protocol RMAskForTimeInterface <NSObject>

@required

- (void)fetchAskForTimeFromMeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSDictionary *, NSError *, void*
- (void)isRestrictionsPasscodeSet:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)sendAskForTimeRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: RMAskForTimeRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)shouldRequestMoreTime:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
