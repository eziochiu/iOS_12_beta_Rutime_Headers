/* made by EzioChiu.
 */

@protocol LAContextCallbackXPC

@required

- (void)invalidatedWithError:(NSError *)arg1;
- (void)tccPreflightWithService:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*

@end
