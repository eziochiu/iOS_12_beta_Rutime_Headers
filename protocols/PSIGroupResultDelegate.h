/* made by EzioChiu.
 */

@protocol PSIGroupResultDelegate <NSObject>

@required

- (void)group:(void *)arg1 fetchOwningContentString:(void *)arg2 assetIdRange:(void *)arg3 collectionIdRange:(void *)arg4 tripIdRange:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 14: PSIGroupResult *, bool, struct _NSRange { unsigned long long x1; unsigned long long x2; }, struct _NSRange { unsigned long long x1; unsigned long long x2; }, struct _NSRange { unsigned long long x1; unsigned long long x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSArray *, NSArray *, NSArray *, void*

@end
