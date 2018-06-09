/* made by EzioChiu.
 */

@protocol PHImageRequestDelegate <PHMediaRequestDelegate>

@required

- (void)imageRequest:(PDImageRequest *)arg1 didFinishLoadingImageResult:(PHImageResult *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)imageRequest:(PDImageRequest *)arg1 didProcessHintsWithLocallyAvailable:(bool)arg2 isDegraded:(bool)arg3;
- (void)imageRequest:(void *)arg1 isQueryingCacheAndDidWait:(void *)arg2 didFindImage:(void *)arg3 resultHandler:(void *)arg4; // needs 4 arg types, found 11: PDImageRequest *, bool*, bool*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGImage { }*, bool, NSError *, void*
- (void)imageRequest:(void *)arg1 isRequestingScheduledWorkBlock:(void *)arg2; // needs 2 arg types, found 7: PDImageRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PDImageRequest *, void*
- (bool)imageRequestIsInitialRequestOfMultistageRequest:(PDImageRequest *)arg1;

@end
