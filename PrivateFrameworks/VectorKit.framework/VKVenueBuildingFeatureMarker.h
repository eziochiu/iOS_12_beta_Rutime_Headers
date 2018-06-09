/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKVenueBuildingFeatureMarker : VKFeatureMarker {
    bool  _localize;
}

@property (nonatomic, readonly) unsigned long long buildingId;
@property (nonatomic, readonly) unsigned long long businessId;
@property (nonatomic, readonly) NSDictionary *floorNames;
@property (nonatomic, readonly) NSArray *floorOrdinals;
@property (nonatomic, readonly) NSDictionary *shortFloorNames;

- (unsigned long long)buildingId;
- (unsigned long long)businessId;
- (id)floorNames;
- (id)floorOrdinals;
- (id)initWithVenueBuilding:(const struct VenueBuilding { struct vector<md::VenueLevel, std::__1::allocator<md::VenueLevel> > { struct VenueLevel {} *x_1_1_1; struct VenueLevel {} *x_1_1_2; struct __compressed_pair<md::VenueLevel *, std::__1::allocator<md::VenueLevel> > { struct VenueLevel {} *x_3_2_1; } x_1_1_3; } x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; short x6; struct Matrix<double, 2, 1> { double x_7_1_1[2]; } x7; struct ConvexHull2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_8_1_1; } x8; }*)arg1 localize:(bool)arg2;
- (struct { double x1; double x2; })nearestFramingPositionToLocation:(struct { double x1; double x2; })arg1;
- (id)shortFloorNames;
- (const struct shared_ptr<md::VenueBuildingFeatureMarker> { struct VenueBuildingFeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)venueBuildingFeatureMarker;

@end
