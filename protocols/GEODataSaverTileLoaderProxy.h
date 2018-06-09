/* made by EzioChiu.
 */

@protocol GEODataSaverTileLoaderProxy <NSObject>

@required

- (void)getMapRegionWithCallbackQueue:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 10: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOMapRegion *, NSString *, NSDate *, NSError *, void*
- (bool)isDataSaverEnabled;
- (void)submitMapRegion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: GEOMapRegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
