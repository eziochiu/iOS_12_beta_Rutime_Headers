/* made by EzioChiu.
 */

@protocol ATStatusObserverConnectionProtocol <NSObject>

@required

- (void)fetchAllStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)resume;

@end
