/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPlaneWorld : NSObject {
    ARGPUCubemapProjector * _gpuCubemapProjector;
    ARGPUWarper * _gpuWarper;
    struct map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { 
        struct __tree<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _planes;
    struct ARPlaneUpdateQueue { 
        struct queue<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::deque<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::allocator<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > > { 
            struct deque<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::allocator<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { 
                struct __split_buffer<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> *, std::__1::allocator<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> *> > { 
                    struct pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> {} **__first_; 
                    struct pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> {} **__begin_; 
                    struct pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> {} **__end_; 
                    struct __compressed_pair<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> **, std::__1::allocator<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> *> > { 
                        struct pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> {} **__value_; 
                    } __end_cap_; 
                } __map_; 
                unsigned long long __start_; 
                struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::pair<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { 
                    unsigned long long __value_; 
                } __size_; 
            } c; 
        } queue; 
        struct set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { 
            struct __tree<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
                struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::array<unsigned char, 16>, void *> > > { 
                    struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                        struct __tree_node_base<void *> {} *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__1::less<std::__1::array<unsigned char, 16> > > { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } elements; 
    }  _queue;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    unsigned long long  _textureSize;
}

+ (struct map<std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > >, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > > > > { struct __tree<std::__1::__value_type<std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > >, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > >, std::__1::less<std::__1::array<unsigned char, 16> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, std::__1::set<std::__1::array<unsigned char, 16>, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::array<unsigned char, 16> > > >, std::__1::less<std::__1::array<unsigned char, 16> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })findMergedPlanes:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane {} *x1; unsigned long long x2; }*)arg1 :(struct map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTextureSize:(unsigned long long)arg1;
- (struct vector<ARTexturedPlane, std::__1::allocator<ARTexturedPlane> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<ARTexturedPlane *, std::__1::allocator<ARTexturedPlane> > { struct { /* ? */ } *x_3_1_1; } x3; })planes;
- (void)updatePlanes:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane {} *x1; unsigned long long x2; }*)arg1 withCameraImage:(struct __CVBuffer { }*)arg2 exposureOffset:(float)arg3 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg4 intrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg5 synchronous:(bool)arg6;
- (struct map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })updatePlanes:(const struct map<std::__1::array<unsigned char, 16>, ARTexturedPlane, std::__1::less<std::__1::array<unsigned char, 16> >, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::array<unsigned char, 16>, std::__1::__value_type<std::__1::array<unsigned char, 16>, ARTexturedPlane>, std::__1::less<std::__1::array<unsigned char, 16> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 withCurrentDetections:(struct CV3DSurfaceDetectionResult { struct CV3DSurfaceDetectionPlane {} *x1; unsigned long long x2; }*)arg2 synchronous:(bool)arg3;

@end
