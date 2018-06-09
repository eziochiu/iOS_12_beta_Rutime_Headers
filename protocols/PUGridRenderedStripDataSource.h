/* made by EzioChiu.
 */

@protocol PUGridRenderedStripDataSource <NSObject>

@required

- (void)renderedStrip:(void *)arg1 enumerateAssetsForVisualSection:(void *)arg2 inVisualItemRange:(void *)arg3 usingBlock:(void *)arg4; // needs 4 arg types, found 11: PUGridRenderedStrip *, long long, struct _NSRange { unsigned long long x1; unsigned long long x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, PHAsset *, bool*, void*
- (NSData *)renderedStrip:(PUGridRenderedStrip *)arg1 imageDataForAsset:(PHAsset *)arg2 imageWidth:(int*)arg3 imageHeight:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;

@end
