/* made by EzioChiu.
 */

@protocol NFCallbackRegistration <NSObject>

@required

- (void)whenResolvingClass:(void *)arg1 scope:(void *)arg2 callbackBlock:(void *)arg3; // needs 3 arg types, found 19: Class, NFCallbackScope *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, void*, inout void*, void*, void*, short, out long, void, void*, const void*, void*, void*
- (void)whenResolvingProtocol:(void *)arg1 scope:(void *)arg2 callbackBlock:(void *)arg3; // needs 3 arg types, found 19: Protocol *, NFCallbackScope *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, void*, inout void*, void*, void*, short, out long, void, void*, const void*, void*, void*
- (void)whenUnsafeResolvingWithKey:(void *)arg1 scope:(void *)arg2 callbackBlock:(void *)arg3; // needs 3 arg types, found 19: NSString *, NFCallbackScope *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, void*, inout void*, void*, void*, short, out long, void, void*, const void*, void*, void*

@end
