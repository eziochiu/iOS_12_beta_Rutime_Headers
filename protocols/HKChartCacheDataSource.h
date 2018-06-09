/* made by EzioChiu.
 */

@protocol HKChartCacheDataSource <NSObject>

@required

- (id /* block */)mappingFunctionForContext:(void *)arg1; // needs 1 arg types, found 5: id /* block */, id, id, SEL, id
- (HKChartCacheFetchOperation *)operationForIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 12: <NSCopying> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKChartCacheFetchOperation *, id, void*, inout unsigned short, void*, const const out const void*, void*

@end
