/* made by EzioChiu.
 */

@protocol PLNavigableAssetContainerListViewController <NSObject>

@required

- (void)navigateToCollection:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PHCollection *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToRevealAssetCollection:(PHAssetCollection *)arg1 initiallyHidden:(bool)arg2 animated:(bool)arg3;

@end
