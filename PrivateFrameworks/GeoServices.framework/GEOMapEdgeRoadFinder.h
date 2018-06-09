/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapEdgeRoadFinder : GEOMapEdgeFinder {
    struct unordered_set<GEORoadEdge, std::__1::hash<GEORoadEdge>, std::__1::equal_to<GEORoadEdge>, std::__1::allocator<GEORoadEdge> > { 
        struct __hash_table<GEORoadEdge, std::__1::hash<GEORoadEdge>, std::__1::equal_to<GEORoadEdge>, std::__1::allocator<GEORoadEdge> > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *>, std::__1::allocator<std::__1::__hash_node<GEORoadEdge, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<GEORoadEdge> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<GEORoadEdge> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _roadsConsidered;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildersInTile:(id)arg1 localPoint:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg2 localRadiusSqr:(float)arg3 localSearch:(const struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; }*)arg4 handler:(id /* block */)arg5;
- (bool)_checkEdgeForDuplicates:(const struct shared_ptr<geo::MapEdge> { struct MapEdge {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)dealloc;
- (id)initWithMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;

@end
