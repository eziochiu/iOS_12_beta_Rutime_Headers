/* made by EzioChiu.
 */

@protocol SXBlueprintAnalyzer <NSObject>

@required

- (void)analyzeBlueprint:(void *)arg1 layoutDataProvider:(void *)arg2 onMarkerFound:(void *)arg3 then:(void *)arg4 onEndReached:(void *)arg5; // needs 5 arg types, found 20: SXLayoutBlueprint *, SXLayoutDataProvider *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, unsigned long long, id /* block */, <SXBlueprintMarker> *, unsigned long long, void*, id /* block */, void*, unsigned long long, id /* block */, unsigned long long, void*, id /* block */, void*, unsigned long long, id /* block */, void*

@end
