/* made by EzioChiu.
 */

@protocol DNDRemoteServiceServerModeAssertionProtocol <NSObject>

@required

- (void)getActiveModeAssertionWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDModeAssertion *, NSError *, void*
- (void)invalidateActiveModeAssertionWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDModeAssertionInvalidation *, NSError *, void*
- (void)invalidateAllActiveModeAssertionsWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)registerForAssertionUpdatesWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)takeModeAssertionWithDetails:(void *)arg1 requestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: DNDModeAssertionDetails *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDModeAssertion *, DNDModeAssertionInvalidation *, NSError *, void*

@end
