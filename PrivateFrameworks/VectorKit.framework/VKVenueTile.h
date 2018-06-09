/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKVenueTile : VKSkewingVectorTile <VKPolygonTile> {
    float  _alpha;
    struct _retain_ptr<VKAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKAnimation *_obj; 
        struct _retain_objc { } _retain; 
        struct _release_objc { } _release; 
    }  _animationForPitch;
    float  _maxLayeringHeight;
    float  _minLayeringHeight;
    float  _scale;
    struct vector<md::VenueFloorGroup, std::__1::allocator<md::VenueFloorGroup> > { 
        struct VenueFloorGroup {} *__begin_; 
        struct VenueFloorGroup {} *__end_; 
        struct __compressed_pair<md::VenueFloorGroup *, std::__1::allocator<md::VenueFloorGroup> > { 
            struct VenueFloorGroup {} *__value_; 
        } __end_cap_; 
    }  _venueFloorGroups;
    struct vector<geo::_retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::allocator<geo::_retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { 
        struct _retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *__begin_; 
        struct _retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *__end_; 
        struct __compressed_pair<geo::_retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> *, std::__1::allocator<geo::_retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { 
            struct _retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *__value_; 
        } __end_cap_; 
    }  _venueGroups;
    struct vector<std::__1::shared_ptr<md::Venue>, std::__1::allocator<std::__1::shared_ptr<md::Venue> > > { 
        struct shared_ptr<md::Venue> {} *__begin_; 
        struct shared_ptr<md::Venue> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<md::Venue> *, std::__1::allocator<std::__1::shared_ptr<md::Venue> > > { 
            struct shared_ptr<md::Venue> {} *__value_; 
        } __end_cap_; 
    }  _venues;
}

@property (nonatomic) float alpha;
@property (nonatomic, retain) VKAnimation *animationForPitch;
@property (nonatomic, readonly) float maxLayeringHeight;
@property (nonatomic, readonly) float minLayeringHeight;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{vector<geo::_retain_ptr<VKPolygonGroup *' */ struct *polygonGroups; /* unknown property attribute:  geo::_equal_objc>}}} */
@property (nonatomic) float scale;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<md::VenueFloorGroup' */ struct *venueFloorGroups; /* unknown property attribute:  std::__1::allocator<md::VenueFloorGroup> >=^{VenueFloorGroup}}} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{vector<geo::_retain_ptr<VKVenueGroup *' */ struct *venueGroups; /* unknown property attribute:  geo::_equal_objc>}}} */
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<md::Venue>' */ struct *venues; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<md::Venue> > >=^{shared_ptr<md::Venue>}}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)alpha;
- (id)animationForPitch;
- (void)buildExteriorWallMeshesWithDevice:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg1 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)buildMeshesWithDevice:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg1 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; }*)arg2 triangulator:(id)arg3;
- (void)buildPolygonMeshesWithDevice:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg1 triangulator:(id)arg2;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 userInfo:(id)arg3 styleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(struct Device { int (**x1)(); struct DeviceVersion { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct DeviceCapabilities { bool x_3_1_1; bool x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; struct DeviceSize { unsigned int x_6_2_1; unsigned int x_6_2_2; unsigned int x_6_2_3; } x_3_1_6; } x3; struct DeviceAPIProperties { int x_4_1_1; double x_4_1_2; } x4; int x5; int x6; }*)arg7;
- (float)maxLayeringHeight;
- (float)minLayeringHeight;
- (const struct vector<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::allocator<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { struct _retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *x1; struct _retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *x2; struct __compressed_pair<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> *, std::__1::allocator<geo::_retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { struct _retain_ptr<VKPolygonGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *x_3_1_1; } x3; }*)polygonGroups;
- (void)populateMetaData:(id)arg1;
- (float)scale;
- (void)setAlpha:(float)arg1;
- (void)setAnimationForPitch:(id)arg1;
- (void)setScale:(float)arg1;
- (struct vector<md::VenueFloorGroup, std::__1::allocator<md::VenueFloorGroup> > { struct VenueFloorGroup {} *x1; struct VenueFloorGroup {} *x2; struct __compressed_pair<md::VenueFloorGroup *, std::__1::allocator<md::VenueFloorGroup> > { struct VenueFloorGroup {} *x_3_1_1; } x3; }*)venueFloorGroups;
- (const struct vector<geo::_retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::allocator<geo::_retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { struct _retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *x1; struct _retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *x2; struct __compressed_pair<geo::_retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> *, std::__1::allocator<geo::_retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> > > { struct _retain_ptr<VKVenueGroup *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {} *x_3_1_1; } x3; }*)venueGroups;
- (const struct vector<std::__1::shared_ptr<md::Venue>, std::__1::allocator<std::__1::shared_ptr<md::Venue> > > { struct shared_ptr<md::Venue> {} *x1; struct shared_ptr<md::Venue> {} *x2; struct __compressed_pair<std::__1::shared_ptr<md::Venue> *, std::__1::allocator<std::__1::shared_ptr<md::Venue> > > { struct shared_ptr<md::Venue> {} *x_3_1_1; } x3; }*)venues;

@end
