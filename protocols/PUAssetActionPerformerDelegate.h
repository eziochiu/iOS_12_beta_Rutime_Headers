/* made by EzioChiu.
 */

@protocol PUAssetActionPerformerDelegate <NSObject>

@optional

- (void)assetActionPerformer:(PUAssetActionPerformer *)arg1 didChangeState:(unsigned long long)arg2;
- (bool)assetActionPerformer:(void *)arg1 dismissViewController:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: PUAssetActionPerformer *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)assetActionPerformer:(PUAssetActionPerformer *)arg1 presentViewController:(UIViewController *)arg2;

@end
