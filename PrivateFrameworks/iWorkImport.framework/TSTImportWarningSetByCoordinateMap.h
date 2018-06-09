/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTImportWarningSetByCoordinateMap : NSObject {
    struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> > { 
        struct TSUCellCoord {} *__begin_; 
        struct TSUCellCoord {} *__end_; 
        struct __compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord> > { 
            struct TSUCellCoord {} *__value_; 
        } __end_cap_; 
    }  _coordinates;
    struct unordered_map<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet>, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> > > > { 
        struct __hash_table<std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, std::__1::__unordered_map_hasher<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, std::__1::hash<TSUCellCoord>, true>, std::__1::__unordered_map_equal<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, std::__1::equal_to<TSUCellCoord>, true>, std::__1::allocator<std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> > > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, std::__1::hash<TSUCellCoord>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<TSUCellCoord, std::__1::__hash_value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<TSTImportWarningSet> >, std::__1::equal_to<TSUCellCoord>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _warningSetForCoordinate;
}

@property (readonly) unsigned long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addWarning:(id)arg1 atCellCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })cellCoordinateForIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initFromArchive:(const struct ImportWarningSetByCoordinateMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TST::CellCoordinateImportWarningSetPairArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1;
- (void)saveToArchive:(struct ImportWarningSetByCoordinateMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TST::CellCoordinateImportWarningSetPairArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1;
- (id)warningSetAtCoordinate:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;

@end
