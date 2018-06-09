/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapEdgeBuilder : GEOMapRequest {
    bool  _buildAhead;
    bool  _buildBehind;
    unsigned long long  _buildDirection;
    GEOMapTileFinder * _currentTileFinder;
    id /* block */  _edgeHandler;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _firstTilePoint;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _lastTilePoint;
    bool  _searchDirection;
    struct unordered_set<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> > { 
        struct __hash_table<_GEOTileKey, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<_GEOTileKey> > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *>, std::__1::allocator<std::__1::__hash_node<_GEOTileKey, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<_GEOTileKey, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::hash<GEOTileKey> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::equal_to<GEOTileKey> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _tileKeysSeen;
}

@property (nonatomic) unsigned long long buildDirection;
@property (nonatomic, copy) id /* block */ edgeHandler;
@property (nonatomic, readonly) GEOMapAccess *map;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildCompleteEdge;
- (bool)_edgeStart:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 end:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg2 connectsTo:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg3;
- (bool)_findEdgeAhead;
- (bool)_findEdgeAheadInTile:(id)arg1;
- (bool)_findEdgeBehind;
- (bool)_findEdgeBehindInTile:(id)arg1;
- (bool)_findNextEdge;
- (void)_findTilesAdjacentToTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 containingPoint:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg2 findAhead:(bool)arg3;
- (struct Matrix<float, 2, 1> { float x1[2]; })_firstPoint;
- (id)_firstTile;
- (struct Matrix<float, 2, 1> { float x1[2]; })_lastPoint;
- (id)_lastTile;
- (unsigned long long)_maxTileCount;
- (bool)_pointConnects:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg1 rect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 to:(const struct { double x1; double x2; }*)arg3;
- (bool)_shouldFindEdgeAhead;
- (bool)_shouldFindEdgeBehind;
- (id)_tileFinderForMap:(id)arg1 center:(struct { double x1; double x2; })arg2 radius:(double)arg3;
- (unsigned long long)buildDirection;
- (void)buildEdge:(id /* block */)arg1;
- (void)cancel;
- (id /* block */)edgeHandler;
- (id)initWithMap:(id)arg1;
- (id)map;
- (void)setBuildDirection:(unsigned long long)arg1;
- (void)setEdgeHandler:(id /* block */)arg1;

@end
