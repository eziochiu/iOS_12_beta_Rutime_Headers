/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPolylineOverlayRenderRegion : NSObject {
    struct vector<gm::Box<double, 2>, std::__1::allocator<gm::Box<double, 2> > > { 
        struct Box<double, 2> {} *__begin_; 
        struct Box<double, 2> {} *__end_; 
        struct __compressed_pair<gm::Box<double, 2> *, std::__1::allocator<gm::Box<double, 2> > > { 
            struct Box<double, 2> {} *__value_; 
        } __end_cap_; 
    }  _rectsForSnapping;
    struct vector<VKTileKey, std::__1::allocator<VKTileKey> > { 
        struct VKTileKey {} *__begin_; 
        struct VKTileKey {} *__end_; 
        struct __compressed_pair<VKTileKey *, std::__1::allocator<VKTileKey> > { 
            struct VKTileKey {} *__value_; 
        } __end_cap_; 
    }  _snappedTileKeys;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _snappingRect;
    NSSet * _tiles;
    struct Box<double, 2> { 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _minimum; 
        struct Matrix<double, 2, 1> { 
            double _e[2]; 
        } _maximum; 
    }  _visibleRect;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Box<double' */ struct  snappingRect; /* unknown property attribute:  1>=[2d]}} */
@property (nonatomic, readonly) NSSet *tiles;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Box<double' */ struct  visibleRect; /* unknown property attribute:  1>=[2d]}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initForKeysInView:(id)arg1 tiles:(id)arg2 allowsSnapping:(bool)arg3;
- (bool)isEquivalentToNewRegion:(id)arg1;
- (const struct vector<gm::Box<double, 2>, std::__1::allocator<gm::Box<double, 2> > > { struct Box<double, 2> {} *x1; struct Box<double, 2> {} *x2; struct __compressed_pair<gm::Box<double, 2> *, std::__1::allocator<gm::Box<double, 2> > > { struct Box<double, 2> {} *x_3_1_1; } x3; }*)rectsForSnapping;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })snappingRect;
- (id)tiles;
- (struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; })visibleRect;

@end
