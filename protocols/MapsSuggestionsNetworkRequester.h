/* made by EzioChiu.
 */

@protocol MapsSuggestionsNetworkRequester <MapsSuggestionsObject>

@required

- (bool)ETAsFromHereWaypoint:(void *)arg1 destinationWaypoints:(void *)arg2 transportType:(void *)arg3 automobileOptions:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 12: GEOComposedWaypoint *, struct NSArray { Class x1; }*, int, GEOAutomobileOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*
- (bool)composedWaypointForAddressString:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOComposedWaypoint *, NSError *, void*
- (bool)composedWaypointForLocation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: GEOLocation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOComposedWaypoint *, NSError *, void*
- (bool)composedWaypointForMapItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: <GEOMapItem> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOComposedWaypoint *, NSError *, void*
- (bool)forwardGeocodeAddressString:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct NSArray { Class x1; }*, NSError *, void*
- (bool)reverseGeocodeCoordinate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: struct { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct NSArray { Class x1; }*, NSError *, void*

@end
