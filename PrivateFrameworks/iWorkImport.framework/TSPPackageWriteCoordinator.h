/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPExternalReferenceDelegate, TSPObjectModifyDelegate, TSPPersistedObjectUUIDMapDelegate> {
    TSPArchiverManager * _archiverManager;
    bool  _captureSnapshots;
    NSObject<OS_dispatch_group> * _completionGroup;
    struct unordered_map<const long long, TSP::ComponentPropertiesSnapshot, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot> > > { 
        struct __hash_table<std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, TSP::IdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, TSP::IdentifierHash, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSP::ComponentPropertiesSnapshot>, std::__1::equal_to<const long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _componentPropertiesSnapshot;
    NSObject<OS_dispatch_queue> * _componentQueue;
    TSPObjectContext * _context;
    TSPDataAttributesSnapshot * _dataAttributesSnapshot;
    NSMutableArray * _dataFinalizeHandlers;
    bool  _didWriteMetadata;
    bool  _didWriteObjectContainer;
    bool  _didWriteRootObject;
    TSPDocumentRevision * _documentRevision;
    NSURL * _documentTargetURL;
    NSMutableSet * _duplicateUUIDs;
    TSPComponentExternalReferenceMap * _externalLazyReferencesMap;
    NSObject<OS_dispatch_queue> * _externalLazyReferencesQueue;
    NSMutableArray * _externalReferenceBlocks;
    NSObject<OS_dispatch_queue> * _externalReferenceQueue;
    unsigned long long  _fileFormatVersion;
    bool  _isCancelled;
    bool  _isRecoverableError;
    NSSet * _knownComponentLocators;
    TSPObject * _metadataObject;
    NSObject<OS_dispatch_queue> * _metadataQueue;
    NSHashTable * _modifiedObjectsDuringWrite;
    NSObject<OS_dispatch_queue> * _modifyObjectQueue;
    TSPObjectContainer * _objectContainer;
    TSPObjectReferenceMap * _objectReferenceMap;
    NSObject<OS_dispatch_queue> * _objectsQueue;
    unsigned char  _packageIdentifier;
    NSMutableSet * _packageLocatorSet;
    TSPPackageMetadata * _packageMetadata;
    TSPPersistedObjectUUIDMap * _persistedUUIDMap;
    long long  _preferredPackageType;
    unsigned long long  _readVersion;
    NSHashTable * _referencedDatas;
    NSURL * _relativeURLForExternalData;
    struct map<unsigned int, std::__1::map<long long, TSPComponent *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSPComponent *> > >, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::map<long long, TSPComponent *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSPComponent *> > > > > > { 
        struct __tree<std::__1::__value_type<unsigned int, std::__1::map<long long, TSPComponent *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSPComponent *> > > >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::map<long long, TSPComponent *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSPComponent *> > > >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::map<long long, TSPComponent *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSPComponent *> > > > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::map<long long, TSPComponent *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSPComponent *> > > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::map<long long, TSPComponent *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSPComponent *> > > >, std::__1::less<unsigned int>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _remainingComponentsQueue;
    unsigned long long  _saveToken;
    struct unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { 
        struct __hash_table<std::__1::__hash_value_type<const long long, bool>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, bool>, TSP::IdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, bool> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, bool>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, bool>, TSP::IdentifierHash, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, bool>, std::__1::equal_to<const long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _skippedComponents;
    bool  _writeSuccess;
    unsigned long long  _writeVersion;
    struct unordered_map<const long long, TSP::WrittenComponentInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenComponentInfo> > > { 
        struct __hash_table<std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, TSP::IdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, TSP::IdentifierHash, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSP::WrittenComponentInfo>, std::__1::equal_to<const long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _writtenComponents;
    struct queue<TSP::WrittenObjectInfo, std::__1::deque<TSP::WrittenObjectInfo, std::__1::allocator<TSP::WrittenObjectInfo> > > { 
        struct deque<TSP::WrittenObjectInfo, std::__1::allocator<TSP::WrittenObjectInfo> > { 
            struct __split_buffer<TSP::WrittenObjectInfo *, std::__1::allocator<TSP::WrittenObjectInfo *> > { 
                struct WrittenObjectInfo {} **__first_; 
                struct WrittenObjectInfo {} **__begin_; 
                struct WrittenObjectInfo {} **__end_; 
                struct __compressed_pair<TSP::WrittenObjectInfo **, std::__1::allocator<TSP::WrittenObjectInfo *> > { 
                    struct WrittenObjectInfo {} **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::__1::allocator<TSP::WrittenObjectInfo> > { 
                unsigned long long __value_; 
            } __size_; 
        } c; 
    }  _writtenLazyReferences;
    struct unordered_map<const long long, TSP::WrittenObjectInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenObjectInfo> > > { 
        struct __hash_table<std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, TSP::IdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, TSP::IdentifierHash, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSP::WrittenObjectInfo>, std::__1::equal_to<const long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _writtenObjects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TSPObjectContainer *objectContainer;
@property (nonatomic, readonly) TSPPackageMetadata *packageMetadata;
@property (nonatomic, readonly) NSURL *relativeURLForExternalData;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDataFinalizeHandlerForSuccessfulSave:(id /* block */)arg1;
- (void)addDelayedObject:(id)arg1 forComponentRootObject:(id)arg2 claimingComponent:(id)arg3 isDelayedObjectReferencedByObjectContainer:(bool)arg4 completion:(id /* block */)arg5;
- (void)archiveComponent:(id)arg1 locator:(id)arg2 storeOutsideObjectArchive:(bool)arg3 rootObject:(id)arg4 withPackageWriter:(id)arg5;
- (void)calculateExternalReferences;
- (id)componentForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2;
- (long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2 objectUUIDOrNil:(id)arg3;
- (void)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3 completion:(id /* block */)arg4;
- (void)componentWriter:(id)arg1 locatorForClaimingComponent:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (bool)componentWriter:(id)arg1 object:(id)arg2 belongsToLinkedComponent:(id)arg3;
- (void)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 archiverOrNil:(id)arg3 claimingComponent:(id)arg4 hasArchiverAccessLock:(bool)arg5;
- (void)componentWriterNeedsDocumentRecovery:(id)arg1;
- (void)componentWriterWantsDelayedObjects:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)copyComponent:(id)arg1 locator:(id)arg2 packageWriter:(id)arg3;
- (id)createPackageMetadataWritingDatasWithPackageWriter:(id)arg1 saveOperationState:(id)arg2;
- (void)dealloc;
- (void)didReferenceData:(id)arg1;
- (bool)didWriteComponent:(id)arg1 wasCopied:(bool*)arg2;
- (bool)didWriteData:(id)arg1;
- (bool)didWriteObject:(id)arg1 claimingComponent:(id*)arg2;
- (void)enqueueComponent:(id)arg1 rootObjectOrNil:(id)arg2 forceArchive:(bool)arg3 failToAutosaveOnArchive:(bool)arg4;
- (void)enqueueRootObject:(id)arg1 forceArchive:(bool)arg2 failToAutosaveOnArchive:(bool)arg3 isAddingDelayedObjectReferencedByObjectContainer:(bool)arg4 completion:(id /* block */)arg5;
- (void)enqueueRootObjectImpl:(id)arg1 forceArchive:(bool)arg2 failToAutosaveOnArchive:(bool)arg3 isAddingDelayedObjectReferencedByObjectContainer:(bool)arg4 completion:(id /* block */)arg5;
- (void)enumerateWrittenObjectsWithBlock:(id /* block */)arg1;
- (id)explicitComponentRootObjectForObject:(id)arg1;
- (id)explicitComponentRootObjectForObject:(id)arg1 archiverOrNil:(id)arg2 claimingComponent:(id)arg3 newClaimingComponent:(id)arg4 hasArchiverAccessLock:(bool)arg5;
- (id)init;
- (id)initWithContext:(id)arg1 documentRevision:(id)arg2 saveToken:(unsigned long long)arg3 packageIdentifier:(unsigned char)arg4 fileFormatVersion:(unsigned long long)arg5 preferredPackageType:(long long)arg6 metadataObject:(id)arg7 dataAttributesSnapshot:(id)arg8;
- (id)initWithContext:(id)arg1 documentRevision:(id)arg2 saveToken:(unsigned long long)arg3 packageIdentifier:(unsigned char)arg4 fileFormatVersion:(unsigned long long)arg5 preferredPackageType:(long long)arg6 metadataObject:(id)arg7 dataAttributesSnapshot:(id)arg8 packageWriteCoordinator:(id)arg9 captureSnapshots:(bool)arg10;
- (bool)isComponentExternal:(id)arg1 wasWritten:(bool*)arg2 wasCopied:(bool*)arg3;
- (bool)isComponentPersisted:(id)arg1;
- (bool)isObjectInExternalPackage:(id)arg1 claimingComponent:(id*)arg2;
- (void)nextComponentAndRootObjectForComponentWriteWithCompletion:(id /* block */)arg1;
- (id)objectContainer;
- (id)objectForIdentifier:(long long)arg1;
- (unsigned long long)objectTargetType;
- (unsigned long long)objectTargetTypeForComponentWriter:(id)arg1;
- (id)packageMetadata;
- (void)persistedObjectUUIDMap:(id)arg1 foundDuplicateUUID:(id)arg2 firstObjectLocation:(struct ObjectLocation { long long x1; long long x2; })arg3 secondObjectLocation:(struct ObjectLocation { long long x1; long long x2; })arg4;
- (id)persistedObjectUUIDMap:(id)arg1 needsDescriptionForComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3;
- (id)relativeURLForExternalData;
- (void)setArchivedObjects:(id)arg1 componentObjectUUIDMap:(id)arg2 objectReferenceMap:(id)arg3 externalStrongReferences:(id)arg4 externalWeakReferences:(id)arg5 featureInfos:(id)arg6 dataReferences:(id)arg7 forComponent:(id)arg8;
- (bool)shouldArchiveComponent:(id)arg1;
- (bool)shouldArchiveComponent:(id)arg1 checkForceArchive:(bool)arg2;
- (bool)shouldEnqueueComponent:(id)arg1;
- (bool)shouldLinkComponentOfObject:(id)arg1;
- (void)stopCapturingSnapshots;
- (void)updateExternalReferencesForLinkedComponent:(id)arg1;
- (void)updateObjectContextForSuccessfulSaveWithPackageWriter:(id)arg1 packageURL:(id)arg2;
- (bool)wasComponentCopied:(long long)arg1;
- (void)willModifyObject:(id)arg1 duringReadOperation:(bool)arg2 shouldCaptureSnapshot:(bool)arg3;
- (void)writeComponent:(id)arg1 rootObjectOrNil:(id)arg2 forceArchive:(bool)arg3 failToAutosaveOnArchive:(bool)arg4 withPackageWriter:(id)arg5;
- (void)writeExternalReferences:(id)arg1 andUpdateLazyReferences:(id)arg2 withPackageWriter:(id)arg3 forComponent:(id)arg4 locator:(id)arg5;
- (void)writeRemainingComponentsWithPackageWriter:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)writeRemainingRootObjectsAndRelatedComponents:(id)arg1 withPackageWriter:(id)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;
- (void)writeRootObject:(id)arg1 withPackageWriter:(id)arg2 saveOperationState:(id)arg3 completionQueue:(id)arg4 completion:(id /* block */)arg5;
- (unsigned long long)writeRootObject:(id)arg1 withPackageWriter:(id)arg2 saveOperationState:(id)arg3 error:(id*)arg4;
- (void)writeRootObjectAndRelatedComponents:(id)arg1 withPackageWriter:(id)arg2 completionQueue:(id)arg3 completion:(id /* block */)arg4;

@end
