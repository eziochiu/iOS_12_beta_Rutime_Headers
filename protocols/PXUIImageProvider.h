/* made by EzioChiu.
 */

@protocol PXUIImageProvider <NSObject>

@required

- (void)cancelImageRequest:(long long)arg1;
- (long long)requestImageForAsset:(void *)arg1 targetSize:(void *)arg2 contentMode:(void *)arg3 options:(void *)arg4 resultHandler:(void *)arg5; // needs 5 arg types, found 11: <PXDisplayAsset> *, struct CGSize { double x1; double x2; }, long long, PHImageRequestOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSDictionary *, void*

@end
