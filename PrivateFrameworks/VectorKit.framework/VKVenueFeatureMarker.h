/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKVenueFeatureMarker : VKFeatureMarker {
    bool  _localize;
}

@property (nonatomic, readonly) NSArray *buildings;
@property (nonatomic, readonly) unsigned long long businessID;
@property (nonatomic, readonly) GEOMapItemIdentifier *mapIdentifier;

- (id)buildings;
- (unsigned long long)businessID;
- (id)initWithVenue:(const struct Venue { unsigned long long x1; unsigned long long x2; struct vector<md::VenueBuilding, std::__1::allocator<md::VenueBuilding> > { struct VenueBuilding {} *x_3_1_1; struct VenueBuilding {} *x_3_1_2; struct __compressed_pair<md::VenueBuilding *, std::__1::allocator<md::VenueBuilding> > { struct VenueBuilding {} *x_3_2_1; } x_3_1_3; } x3; struct Polygon2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; struct ConvexHull2<double> { struct vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_1_2_1; struct Matrix<double, 2, 1> {} *x_1_2_2; struct __compressed_pair<gm::Matrix<double, 2, 1> *, std::__1::allocator<gm::Matrix<double, 2, 1> > > { struct Matrix<double, 2, 1> {} *x_3_3_1; } x_1_2_3; } x_5_1_1; } x5; }*)arg1 localize:(bool)arg2;
- (id)mapIdentifier;
- (id)name;
- (const struct shared_ptr<md::VenueFeatureMarker> { struct VenueFeatureMarker {} *x1; struct __shared_weak_count {} *x2; }*)venueFeatureMarker;

@end
