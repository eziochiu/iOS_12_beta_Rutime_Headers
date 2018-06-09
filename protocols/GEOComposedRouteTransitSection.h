/* made by EzioChiu.
 */

@protocol GEOComposedRouteTransitSection <NSObject>

@required

- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })fromNodeID;
- (bool)isTransfer;
- (unsigned long long)lineID;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })toNodeID;
- (int)toNodeSignificance;

@end
