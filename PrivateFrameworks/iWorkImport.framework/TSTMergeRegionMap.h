/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTMergeRegionMap : TSPObject {
    struct hash_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate> > > { 
        struct __hash_table<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, __gnu_cxx::__hash_map_hasher<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, TSTCellIDHasher, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, true>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, TSTCellIDHasher, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  mCellIDToMergeRegionTopLeft;
    struct hash_map<TSUColumnRowCoordinate, TSUColumnRowSize, TSTCellIDHasher, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowSize> > > { 
        struct __hash_table<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, __gnu_cxx::__hash_map_hasher<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, TSTCellIDHasher, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, std::__1::equal_to<TSUColumnRowCoordinate>, true>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, TSTCellIDHasher, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<TSUColumnRowCoordinate, TSUColumnRowSize>, std::__1::equal_to<TSUColumnRowCoordinate>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  mMergeRegionTopLeftToMergeRegionSize;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    }  mUnionedMergeRange;
}

+ (id)mergeRegionMapFromMap:(id)arg1 intersectingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)description;
- (bool)find:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)hasRangeSpanningRows;
- (id)initRegionMapFromMap:(id)arg1 intersectingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initRegionMapFromMap:(id)arg1 rowRemapping:(id)arg2;
- (id)initWithContext:(id)arg1;
- (bool)insert:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)iterator;
- (id)mergedGridIndicesForDimension:(int)arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })mergedRangeForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)partiallyIntersectsCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (bool)partiallyIntersectsCellRegion:(id)arg1;
- (bool)remove:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })unionedMergeRange;

@end
