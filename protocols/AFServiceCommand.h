/* made by EzioChiu.
 */

@protocol AFServiceCommand <NSObject>

@optional

- (id)initWithDictionary:(NSDictionary *)arg1;
- (void)performWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)performWithCompletion:(void *)arg1 serviceHelper:(void *)arg2; // needs 2 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*, <AFServiceHelper> *

@end
