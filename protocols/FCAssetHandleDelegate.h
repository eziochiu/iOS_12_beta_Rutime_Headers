/* made by EzioChiu.
 */

@protocol FCAssetHandleDelegate <NSObject>

@required

- (FCOperation *)operationToFetchFileForAssetHandle:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: FCAssetHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, NSError *, void*

@end
