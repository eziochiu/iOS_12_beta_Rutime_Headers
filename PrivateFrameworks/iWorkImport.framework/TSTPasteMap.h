/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTPasteMap : NSObject {
    struct set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > { 
        struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, TSTColumnOrRowMapTgtLess> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  mColumnTgtToPbMaps;
    struct set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > { 
        struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, TSTColumnOrRowMapTgtLess> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  mRowTgtToPbMaps;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createTgtMergeMapFromPbMergeMap:(id)arg1 andTgtRegion:(id*)arg2 andTgtBodyRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3;
- (id)createTgtRegionByIntersectingPbRegion:(id)arg1 andTgtRegion:(id)arg2;
- (id)createTgtRegionFromPbRegion:(id)arg1;
- (id)initWithPbRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 tgtRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithPbTable:(id)arg1 pbRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 tgtTable:(id)arg3 tgtRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg4 flag:(int)arg5;
- (unsigned short)p_indexForTgtToPbMaps:(struct set<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapTgtLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapTgtLess> { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 andMap:(struct TSTColumnOrRowMap { unsigned short x1; unsigned short x2; unsigned short x3; bool x4; }*)arg2;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })p_tgtCellIDForPbCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 givenColumnMaps:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg2 rowMaps:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg3;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })p_tgtRangeForPbRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 givenColumnMaps:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg2 rowMaps:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })p_tgtRangeFromPbRange:(const struct TSTColumnOrRowMap { unsigned short x1; unsigned short x2; unsigned short x3; bool x4; }*)arg1 andMap:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg2;
- (struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x1; struct TSUCellRect {} *x2; struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { struct TSUCellRect {} *x_3_1_1; } x3; }*)p_tgtRangesForPbRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 givenColumnMaps:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg2 rowMaps:(const struct multiset<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree<TSTColumnOrRowMap, TSTColumnOrRowMapPbLess, std::__1::allocator<TSTColumnOrRowMap> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTColumnOrRowMap, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTColumnOrRowMapPbLess> { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg3;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })pbCellIDForTgtCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })pbRangeForTgtRange:(struct TSUCellRect { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;

@end
