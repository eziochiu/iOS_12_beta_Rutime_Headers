/* made by EzioChiu.
 */

@protocol MDLTSUStreamReadChannel <NSObject>

@required

- (void)close;
- (void)readWithHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSObject<OS_dispatch_data> *, NSError *, void*

@end
