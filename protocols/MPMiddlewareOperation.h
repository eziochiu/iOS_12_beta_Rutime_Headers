/* made by EzioChiu.
 */

@protocol MPMiddlewareOperation <NSObject>

@required

- (NSError *)error;
- (id /* block */)invalidationHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSString *, void*, id, SEL
- (NSArray *)invalidationObservers;
- (void)setInvalidationHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*

@optional

- (NSString *)timeoutDescription;

@end
