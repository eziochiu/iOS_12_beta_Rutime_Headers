/* made by EzioChiu.
 */

@protocol CATXPCInterface <NSObject>

@required

- (void)processMessage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: CATMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
