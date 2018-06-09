/* made by EzioChiu.
 */

@protocol MTTimerServer <NSObject>

@required

- (void)addTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTTimer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)checkIn;
- (void)dismissTimerWithIdentifier:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)getTimersWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, MTTimer *, NSError *, void*
- (void)removeTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTTimer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)repeatTimerWithIdentifier:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTTimer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
