/* made by EzioChiu.
 */

@protocol PHMediaRequestContextDelegate <NSObject>

@required

- (void)mediaRequestContext:(void *)arg1 isQueryingCacheForRequest:(void *)arg2 didWait:(void *)arg3 didFindImage:(void *)arg4 resultHandler:(void *)arg5; // needs 5 arg types, found 12: PDMediaRequestContext *, PDImageRequest *, bool*, bool*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGImage { }*, bool, NSError *, void*
- (void)mediaRequestContext:(PDMediaRequestContext *)arg1 spawnedNewRequest:(PHMediaRequest *)arg2;
- (void)mediaRequestContextDidFinish:(PDMediaRequestContext *)arg1;

@end
