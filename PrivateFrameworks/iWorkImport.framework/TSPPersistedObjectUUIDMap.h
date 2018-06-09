/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPersistedObjectUUIDMap : NSObject <NSCopying> {
    struct unordered_map<NSUUID *, TSP::ObjectLocation, TSP::NSUUIDHash, TSP::NSUUIDEqualTo, std::__1::allocator<std::__1::pair<NSUUID *const, TSP::ObjectLocation> > > { struct __hash_table<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, std::__1::__unordered_map_hasher<NSUUID *, std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, TSP::NSUUIDHash, true>, std::__1::__unordered_map_equal<NSUUID *, std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, TSP::NSUUIDEqualTo, true>, std::__1::allocator<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSUUID *, TSP::ObjectLocation>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; } * _map;
}

@property (nonatomic, readonly) unsigned long long count;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)descriptionForComponentIdentifier:(long long)arg1 objectIdentifier:(long long)arg2 delegate:(id)arg3;
- (void)didUpdateObjectIdentifierDuringRead:(long long)arg1 forUUID:(id)arg2 componentIdentifier:(long long)arg3 originalObjectIdentifier:(long long)arg4 delegate:(id)arg5;
- (void)didUpdateUUIDDuringRead:(id)arg1 forComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3 originalUUID:(id)arg4 isDuplicatedUUID:(bool)arg5 delegate:(id)arg6;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithComponentsDictionary:(id)arg1 isLoadingDocument:(bool)arg2 objectReferenceMapOrNil:(id)arg3 delegate:(id)arg4;
- (id)initWithPersistedObjectUUIDMap:(id)arg1;
- (struct ObjectLocation { long long x1; long long x2; })objectLocationForUUID:(id)arg1;
- (bool)setObjectLocation:(struct ObjectLocation { long long x1; long long x2; })arg1 forUUID:(id)arg2 objectReferenceMapOrNil:(id)arg3 delegate:(id)arg4;

@end
