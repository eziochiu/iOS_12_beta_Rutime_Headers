/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFinalizeHandlerQueue : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    TSPCancellationState * _cancellationState;
    struct unordered_map<const long long, TSP::FinalizeHandlerItem, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::FinalizeHandlerItem> > > { 
        struct __hash_table<std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, TSP::IdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, TSP::IdentifierHash, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSP::FinalizeHandlerItem>, std::__1::equal_to<const long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _map;
    struct vector<TSP::FinalizeHandlerItem *, std::__1::allocator<TSP::FinalizeHandlerItem *> > { 
        struct FinalizeHandlerItem {} **__begin_; 
        struct FinalizeHandlerItem {} **__end_; 
        struct __compressed_pair<TSP::FinalizeHandlerItem **, std::__1::allocator<TSP::FinalizeHandlerItem *> > { 
            struct FinalizeHandlerItem {} **__value_; 
        } __end_cap_; 
    }  _order;
    long long  _rootObjectIdentifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFinalizeHandlers:(struct vector<void (^)(), std::__1::allocator<void (^)()> >=^@?^@?{__compressed_pair<void (^__strong *)(), std::__1::allocator<void (^)()> >=^@? {}*)arg1 strongReferencesOrNull:(struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct __hash_table<std::__1::__hash_value_type<const long long, bool>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, bool>, TSP::IdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, bool> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg2 forIdentifier:(long long)arg3;
- (id)init;
- (id)initWithRootObjectIdentifier:(long long)arg1;
- (id)initWithRootObjectIdentifier:(long long)arg1 cancellationState:(id)arg2;
- (void)reset;
- (void)runFinalizeHandlerForItem:(struct FinalizeHandlerItem { struct vector<void (^)(), std::__1::allocator<void (^)()> >=^@?^@?{__compressed_pair<void (^__strong *)(), std::__1::allocator<void (^)()> >=^@? {} x1; }*)arg1;
- (bool)runFinalizeHandlers;
- (void)visitItemForCycleDetection:(struct FinalizeHandlerItem { struct vector<void (^)(), std::__1::allocator<void (^)()> >=^@?^@?{__compressed_pair<void (^__strong *)(), std::__1::allocator<void (^)()> >=^@? {} x1; }*)arg1;

@end
