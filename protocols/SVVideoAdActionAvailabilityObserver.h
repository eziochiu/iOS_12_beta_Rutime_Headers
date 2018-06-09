/* made by EzioChiu.
 */

@protocol SVVideoAdActionAvailabilityObserver <NSObject>

@required

- (id /* block */)availabilityChangedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoAdActionAvailabilityObserver> *, void*, id, SEL
- (bool)hasActionAvailable;
- (void)onAvailabilityChanged:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoAdActionAvailabilityObserver> *, void*

@end
