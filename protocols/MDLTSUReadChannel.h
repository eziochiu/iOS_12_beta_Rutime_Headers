/* made by EzioChiu.
 */

@protocol MDLTSUReadChannel <MDLTSUIOChannel, MDLTSUStreamReadChannel>

@required

- (void)readFromOffset:(void *)arg1 length:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 10: long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSObject<OS_dispatch_data> *, NSError *, void*

@end
