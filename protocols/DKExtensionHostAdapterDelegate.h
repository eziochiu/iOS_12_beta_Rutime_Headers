/* made by EzioChiu.
 */

@protocol DKExtensionHostAdapterDelegate <NSObject>

@required

- (void)cancelExtensionRequest;
- (void)completeWithPayload:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: <NSSecureCoding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (id)hostServicesDelegate;
- (void)setHostServicesDelegate:(id)arg1;

@end
