/* made by EzioChiu.
 */

@protocol SXWebContentErrorProvider <NSObject>

@required

- (id /* block */)block:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSError *, void*, id, SEL
- (NSError *)error;
- (void)onError:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
