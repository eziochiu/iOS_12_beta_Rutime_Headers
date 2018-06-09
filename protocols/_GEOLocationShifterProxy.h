/* made by EzioChiu.
 */

@protocol _GEOLocationShifterProxy <NSObject>

@required

- (bool)isLocationShiftEnabled;
- (bool)isLocationShiftRequiredForCoordinate:(struct { double x1; double x2; })arg1;
- (unsigned int)locationShiftFunctionVersion;
- (void)shiftLatLng:(void *)arg1 auditToken:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: GEOLatLng *, GEOApplicationAuditToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOLocationShiftFunctionResponse *, bool, NSError *, void*

@end
