/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPReader : NSObject <TSPObjectDelegate, TSPUnarchiverDelegate> {
    TSPCancellationState * _cancellationState;
    NSObject<OS_dispatch_group> * _completionGroup;
    TSPComponent * _component;
    TSPComponentObjectUUIDMap * _componentObjectUUIDMap;
    <TSPReaderDelegate> * _delegate;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _errorQueue;
    TSPFinalizeHandlerQueue * _finalizeHandlerQueue;
    struct { 
        unsigned int didFinishResolvingReferences : 1; 
        unsigned int needsUpgrade : 1; 
        unsigned int hasDocumentVersionUUID : 1; 
        unsigned int sourceType : 3; 
        unsigned int canRetainObjectReferencedByWeakLazyReference : 1; 
        unsigned int isCrossDocumentPaste : 1; 
        unsigned int isCrossAppPaste : 1; 
        unsigned int delegateRespondsToDidResetObjectIdentifierForObject : 1; 
        unsigned int delegateRespondsToDidResetObjectUUID : 1; 
        unsigned int delegateRespondsToDidUnarchiveObject : 1; 
    }  _flags;
    bool  _hasReadFailure;
    struct unordered_map<long long, TSP::ObjectInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ObjectInfo> > > { 
        struct __hash_table<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, TSP::ObjectInfo>, TSP::ObjectIdentifierHash, true>, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, TSP::ObjectInfo>, std::__1::equal_to<long long>, true>, std::__1::allocator<std::__1::__hash_value_type<long long, TSP::ObjectInfo> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<long long, TSP::ObjectInfo>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<long long, std::__1::__hash_value_type<long long, TSP::ObjectInfo>, TSP::ObjectIdentifierHash, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<long long, std::__1::__hash_value_type<long long, TSP::ObjectInfo>, std::__1::equal_to<long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _objectInfoMap;
    NSMapTable * _objects;
    NSObject<OS_dispatch_queue> * _objectsQueue;
    NSHashTable * _objectsToModify;
    NSObject<OS_dispatch_queue> * _objectsToModifyQueue;
    struct vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { 
        struct UnarchiverRepeatedReference {} *__begin_; 
        struct UnarchiverRepeatedReference {} *__end_; 
        struct __compressed_pair<TSP::UnarchiverRepeatedReference *, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { 
            struct UnarchiverRepeatedReference {} *__value_; 
        } __end_cap_; 
    }  _repeatedReferences;
    NSObject<OS_dispatch_queue> * _unarchiveQueue;
}

@property (nonatomic, readonly) bool canRetainObjectReferencedByWeakLazyReference;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *completionGroup;
@property (nonatomic, readonly) TSPComponent *component;
@property (nonatomic, readonly) long long componentIdentifier;
@property (nonatomic, readonly) TSPObjectContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TSPReaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didFinishResolvingReferences;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) unsigned long long fileFormatVersion;
@property (nonatomic, readonly) bool hasDocumentVersionUUID;
@property (readonly) bool hasReadFailure;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCrossAppPaste;
@property (nonatomic, readonly) bool isCrossDocumentPaste;
@property (nonatomic, readonly) long long sourceType;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)UUIDForObjectIdentifier:(long long)arg1;
- (void)addUnarchivedObject:(id)arg1 unarchiver:(id)arg2;
- (void)attemptedToReadInMemoryObject:(id)arg1 objectIdentifier:(long long)arg2;
- (void)beginIgnoringModificationsForObject:(id)arg1;
- (void)beginReadingWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)canRetainObjectReferencedByWeakLazyReference;
- (bool)canSetObjectUUIDForObject:(id)arg1;
- (id)completionGroup;
- (id)component;
- (long long)componentIdentifier;
- (id)context;
- (id)dataForIdentifier:(long long)arg1;
- (id)delegate;
- (bool)didFinishResolvingReferences;
- (void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2;
- (void)endIgnoringModificationsForObject:(id)arg1;
- (id)error;
- (unsigned long long)fileFormatVersion;
- (bool)finishUnarchiving;
- (bool)hasDocumentVersionUUID;
- (bool)hasReadFailure;
- (id)init;
- (id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3;
- (bool)isCrossAppPaste;
- (bool)isCrossDocumentPaste;
- (bool)isObjectInDocument:(id)arg1;
- (long long)modifyObjectTokenForNewObject;
- (long long)newObjectIdentifier;
- (id)newObjectUUIDForObject:(id)arg1;
- (long long)objectIdentifierForUUID:(id)arg1;
- (struct ObjectInfo { struct vector<TSP::ReferenceCompletionInfo, std::__1::allocator<TSP::ReferenceCompletionInfo> > { struct ReferenceCompletionInfo {} *x_1_1_1; struct ReferenceCompletionInfo {} *x_1_1_2; struct __compressed_pair<TSP::ReferenceCompletionInfo *, std::__1::allocator<TSP::ReferenceCompletionInfo> > { struct ReferenceCompletionInfo {} *x_3_2_1; } x_1_1_3; } x1; }*)objectInfoForIdentifier:(long long)arg1;
- (id)objectUUIDMap;
- (void)processObjectsToModifyWithRootObject:(id)arg1;
- (void)readWithIOCompletionQueue:(id)arg1 ioCompletion:(id /* block */)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)resolveReferences;
- (void)setError:(id)arg1;
- (void)setObjectDelegatesToContextObjectDelegate;
- (bool)shouldValidateComponentsOfInMemoryObjects;
- (long long)sourceType;
- (void)unarchiveObjectWithUnarchiver:(id)arg1;
- (void)unarchiver:(id)arg1 didReadLazyReference:(id)arg2 isExternal:(bool*)arg3;
- (bool)validateObjectIdentifierForObject:(id)arg1;
- (void)willModifyObject:(id)arg1 duringReadOperation:(bool)arg2;

@end