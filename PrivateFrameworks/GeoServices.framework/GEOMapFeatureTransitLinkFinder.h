/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureTransitLinkFinder : GEOMapFeatureAccessFinder

- (id)findTransitLinksNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

@end
