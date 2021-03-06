/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureRoadFinder : GEOMapFeatureAccessFinder {
    bool  _flipNegativeTravelDirectionRoads;
    bool  _visitDoubleTravelDirectionRoadsTwice;
}

@property (nonatomic) bool flipNegativeTravelDirectionRoads;
@property (nonatomic) bool visitDoubleTravelDirectionRoadsTwice;

- (id)findRoadsNear:(struct { double x1; double x2; })arg1 radius:(double)arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (bool)flipNegativeTravelDirectionRoads;
- (void)setFlipNegativeTravelDirectionRoads:(bool)arg1;
- (void)setVisitDoubleTravelDirectionRoadsTwice:(bool)arg1;
- (bool)visitDoubleTravelDirectionRoadsTwice;

@end
