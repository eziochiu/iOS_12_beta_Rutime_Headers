/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPReadCoordinatorBase : NSObject <TSPLazyReferenceDelegate, TSPReaderDelegate> {
    TSPCancellationState * _cancellationState;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _errorQueue;
    NSObject<OS_dispatch_queue> * _externalReferenceQueue;
    struct unordered_map<long long, TSP::ExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ExternalReferenceInfo> > > { 
        struct __hash_table<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, TSP::ObjectIdentifierHash, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, TSP::ObjectIdentifierHash, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, TSP::ExternalReferenceInfo>, std::__1::equal_to<long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _externalReferences;
    NSHashTable * _lazyReferenceCopies;
    NSMutableArray * _lazyReferenceObserverBlocks;
    NSObject<OS_dispatch_queue> * _lazyReferenceQueue;
    NSHashTable * _lazyReferences;
    struct vector<TSP::RepeatedExternalReferenceCompletionInfo, std::__1::allocator<TSP::RepeatedExternalReferenceCompletionInfo> > { 
        struct RepeatedExternalReferenceCompletionInfo {} *__begin_; 
        struct RepeatedExternalReferenceCompletionInfo {} *__end_; 
        struct __compressed_pair<TSP::RepeatedExternalReferenceCompletionInfo *, std::__1::allocator<TSP::RepeatedExternalReferenceCompletionInfo> > { 
            struct RepeatedExternalReferenceCompletionInfo {} *__value_; 
        } __end_cap_; 
    }  _repeatedExternalReferences;
    bool  _success;
}

@property (nonatomic, readonly) NSUUID *baseObjectUUID;
@property (nonatomic, readonly) bool canRetainObjectReferencedByWeakLazyReference;
@property (nonatomic, retain) TSPCancellationState *cancellationState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error;
@property (nonatomic, readonly) unsigned long long fileFormatVersion;
@property (nonatomic, readonly) bool hasDocumentVersionUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCrossAppPaste;
@property (nonatomic, readonly) bool isCrossDocumentPaste;
@property (nonatomic, readonly) bool isReadingFromDocument;
@property (nonatomic, readonly) unsigned char packageIdentifier;
@property (nonatomic, readonly) long long sourceType;
@property (nonatomic, readonly) bool success;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
- (id)baseObjectUUID;
- (bool)canRetainObjectReferencedByWeakLazyReference;
- (id)cancellationState;
- (id)cancellationStateForReader:(id)arg1;
- (id)context;
- (id)contextForReader:(id)arg1;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (id)error;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(bool)arg3;
- (struct ExternalReferenceInfo { long long x1; struct vector<TSP::ExternalReferenceCompletionInfo, std::__1::allocator<TSP::ExternalReferenceCompletionInfo> > { struct ExternalReferenceCompletionInfo {} *x_2_1_1; struct ExternalReferenceCompletionInfo {} *x_2_1_2; struct __compressed_pair<TSP::ExternalReferenceCompletionInfo *, std::__1::allocator<TSP::ExternalReferenceCompletionInfo> > { struct ExternalReferenceCompletionInfo {} *x_3_2_1; } x_2_1_3; } x2; }*)externalReferenceInfoForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2;
- (unsigned long long)fileFormatVersion;
- (bool)hasDocumentVersionUUID;
- (id)init;
- (bool)isReadingFromDocument;
- (void)lazyReference:(id)arg1 didCreateCopy:(id)arg2;
- (id)lazyReferenceDelegateForReader:(id)arg1;
- (id)objectDelegateForReader:(id)arg1;
- (id)objectForIdentifier:(long long)arg1;
- (unsigned char)packageIdentifier;
- (bool)readLazyReference:(id)arg1 object:(id*)arg2 error:(id*)arg3;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(bool)arg4 allowUnknownObject:(bool)arg5 fromParentObject:(id)arg6 completion:(id /* block */)arg7;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(bool)arg3 allowUnknownObject:(bool)arg4 fromParentObject:(id)arg5 completion:(id /* block */)arg6;
- (void)reader:(id)arg1 didReadLazyReference:(id)arg2;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (bool)resolveExternalReferences;
- (void)setCancellationState:(id)arg1;
- (void)setError:(id)arg1;
- (void)setLazyReferencesDelegateToObjectContext;
- (long long)sourceType;
- (bool)success;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(bool)arg2;

@end
