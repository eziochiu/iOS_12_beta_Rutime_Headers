/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTileRegionDownloaderInternal : NSObject {
    struct queue<std::__1::tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale>, std::__1::deque<std::__1::tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale>, std::__1::allocator<std::__1::tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale> > > > { 
        struct deque<std::__1::tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale>, std::__1::allocator<std::__1::tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale> > > { 
            struct __split_buffer<std::__1::tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale> *, std::__1::allocator<std::__1::tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale> *> > { 
                struct tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale> {} **__first_; 
                struct tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale> {} **__begin_; 
                struct tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale> {} **__end_; 
                struct __compressed_pair<std::__1::tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale> **, std::__1::allocator<std::__1::tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale> *> > { 
                    struct tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale> {} **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::tuple<GEOTileSetStyle, GEOTileSize, GEOTileScale> > > { 
                unsigned long long __value_; 
            } __size_; 
        } c; 
    }  remainingTilesets;
    struct queue<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > { 
        struct deque<unsigned int, std::__1::allocator<unsigned int> > { 
            struct __split_buffer<unsigned int *, std::__1::allocator<unsigned int *> > { 
                unsigned int **__first_; 
                unsigned int **__begin_; 
                unsigned int **__end_; 
                struct __compressed_pair<unsigned int **, std::__1::allocator<unsigned int *> > { 
                    unsigned int **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::__1::allocator<unsigned int> > { 
                unsigned long long __value_; 
            } __size_; 
        } c; 
    }  remainingZoomLevelsForCurrentTileset;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
