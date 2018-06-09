/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLAvailabilityTileParser : NSObject {
    struct shared_ptr<AvailabilityTile> { 
        struct AvailabilityTile {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _avlTile;
    NSURL * _path;
}

@property (nonatomic, readonly) NSURL *path;

+ (bool)generateAvlTileFromJSON:(id)arg1 atPath:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_deserializeEntireTileFromPath;
- (bool)_openTileFileForIncrementalIO;
- (struct AvailabilityTile { struct shared_ptr<proto::availability::AvailabilityTile> { struct AvailabilityTile {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; bool x2; struct unique_ptr<google::protobuf::io::FileInputStream, std::__1::default_delete<google::protobuf::io::FileInputStream> > { struct __compressed_pair<google::protobuf::io::FileInputStream *, std::__1::default_delete<google::protobuf::io::FileInputStream> > { struct FileInputStream {} *x_1_2_1; } x_3_1_1; } x3; struct path { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_6_1; unsigned long long x_1_6_2; unsigned long long x_1_6_3; } x_1_5_1; struct __short { BOOL x_2_6_1[23]; struct { unsigned char x_2_7_1; } x_2_6_2; } x_1_5_2; struct __raw { unsigned long long x_3_6_1[3]; } x_1_5_3; } x_1_4_1; } x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; }*)getAvlTile;
- (bool)getNextVenueBoundsIncrementally:(struct VenueBounds { int (**x1)(); struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_2_1_1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; struct RepeatedPtrField<proto::availability::LatLonPolygon> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct TileDownloadConfiguration {} *x4; struct LatLonPolygon {} *x5; struct RepeatedField<unsigned int> { unsigned int *x_6_1_1; int x_6_1_2; int x_6_1_3; } x6; int x7; int x8; unsigned int x9[1]; }*)arg1;
- (id)init;
- (id)initWithEmptyTile;
- (id)initWithTilePath:(id)arg1;
- (id)initWithTilePathIncrementalIO:(id)arg1;
- (int)numTotalExpectedExteriorsInVenues;
- (int)numVenuesExpected;
- (id)path;
- (bool)tileIsOpenForIncrementalIO;
- (unsigned long long)venuesCount;

@end
