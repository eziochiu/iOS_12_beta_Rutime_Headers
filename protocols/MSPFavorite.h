/* made by EzioChiu.
 */

@protocol MSPFavorite <MSPImmutableObject, MSPIdentifiableFavorite>

@required

- (void)ifPlace:(void *)arg1 ifRoute:(void *)arg2 ifRegion:(void *)arg3 ifTransitLine:(void *)arg4; // needs 4 arg types, found 24: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MSPFavoritePlace> *, void*, id /* block */, void*, void, id /* block */, <MSPFavoriteRoute> *, void*, id /* block */, void*, void, id /* block */, <MSPFavoriteRegion> *, void*, id /* block */, void*, void, id /* block */, <MSPFavoriteTransitLine> *, void*

@end
