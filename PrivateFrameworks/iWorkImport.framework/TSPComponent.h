/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponent : NSObject <NSDiscardableContent> {
    int  _accessCount;
    NSObject<OS_dispatch_queue> * _accessQueue;
    TSPComponentObjectUUIDMap * _componentObjectUUIDMap;
    NSMutableSet * _dataReferences;
    <TSPComponentDelegate> * _delegate;
    unsigned long long  _encodedLength;
    TSPComponentExternalReferenceMap * _externalReferenceMap;
    NSArray * _featureInfos;
    struct { 
        unsigned int usesDelayedArchiving : 1; 
        unsigned int modified : 1; 
        unsigned int persisted : 1; 
        unsigned int isStoredOutsideObjectArchive : 1; 
        unsigned int packageIdentifier : 2; 
        unsigned int discarded : 1; 
    }  _flags;
    long long  _identifier;
    NSDate * _lastModificationDate;
    NSString * _locator;
    TSPObjectReferenceMap * _objectReferenceMap;
    NSString * _preferredLocator;
    unsigned long long  _readVersion;
    unsigned long long  _saveToken;
    TSPObject * _strongRootObject;
    TSPObject * _weakRootObject;
    unsigned long long  _writeVersion;
    NSMapTable * _writtenObjects;
}

@property (nonatomic, readonly) TSPComponentObjectUUIDMap *componentObjectUUIDMap;
@property (nonatomic, readonly) unsigned long long encodedLength;
@property (nonatomic, readonly) NSArray *featureInfos;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) bool isStoredOutsideObjectArchive;
@property (nonatomic, readonly) bool isTransientComponent;
@property (nonatomic, readonly) NSDate *lastModificationDate;
@property (nonatomic, readonly) NSString *locator;
@property (readonly) bool modified;
@property (readonly) bool needsArchiving;
@property (nonatomic, readonly) TSPObjectReferenceMap *objectReferenceMap;
@property (readonly) unsigned char packageIdentifier;
@property (readonly) bool persisted;
@property (nonatomic, readonly) NSString *preferredLocator;
@property (nonatomic, readonly) unsigned long long readVersion;
@property (retain) TSPObject *rootObject;
@property (nonatomic, readonly) unsigned long long saveToken;
@property (nonatomic, readonly) unsigned long long writeVersion;

+ (id)componentsDiscardingContentOnCurrentThread;

- (void).cxx_destruct;
- (bool)addExternalReferenceToObjectOrLazyReference:(id)arg1 isWeak:(bool)arg2 externalReferenceMap:(id)arg3 delegate:(id)arg4;
- (id)additionalDescription;
- (bool)beginContentAccess;
- (id)componentObjectUUIDMap;
- (void)continueDiscardingContentIfPossibleUsingBlock:(id /* block */)arg1;
- (id)description;
- (void)didReadObjects:(id)arg1;
- (void)discardContentIfPossible;
- (void)discardContentIfPossibleFromNSCache:(bool)arg1;
- (unsigned long long)encodedLength;
- (void)endContentAccess;
- (void)enumerateDataReferences:(id /* block */)arg1;
- (void)enumerateExternalReferences:(id /* block */)arg1;
- (struct ComponentExternalReferenceInfo { long long x1; bool x2; })externalReferenceInfoForObjectIdentifier:(long long)arg1;
- (id)featureInfos;
- (long long)identifier;
- (id)init;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 preferredLocator:(id)arg3 packageIdentifier:(unsigned char)arg4 isStoredOutsideObjectArchive:(bool)arg5 encodedLength:(unsigned long long)arg6 lastModificationDate:(id)arg7;
- (id)initWithDelegate:(id)arg1 message:(const struct ComponentInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct RepeatedField<unsigned int> { unsigned int *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedField<unsigned int> { unsigned int *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedPtrField<TSP::ComponentExternalReference> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct RepeatedPtrField<TSP::ComponentDataReference> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; struct RepeatedPtrField<TSP::FeatureInfo> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; }*)arg2 packageIdentifier:(unsigned char)arg3 encodedLength:(unsigned long long)arg4 lastModificationDate:(id)arg5;
- (id)initWithDelegate:(id)arg1 rootObject:(id)arg2;
- (bool)isCachingEnabled;
- (bool)isContentDiscarded;
- (bool)isDiscardingContent;
- (bool)isStoredOutsideObjectArchive;
- (bool)isTransientComponent;
- (id)lastModificationDate;
- (id)locator;
- (void)markAsDiscarded;
- (bool)modified;
- (bool)needsArchiving;
- (bool)needsArchivingImpl;
- (id)newExternalReferenceMapWithStrongReferences:(id)arg1 weakReferences:(id)arg2 delegate:(id)arg3;
- (id)newUpdatedExternalReferenceMapUsingDelegate:(id)arg1;
- (id)objectReferenceMap;
- (unsigned char)packageIdentifier;
- (void)performSynchronousDiscardContentIfPossibleUsingBlock:(id /* block */)arg1;
- (bool)persisted;
- (id)preferredLocator;
- (unsigned long long)readVersion;
- (id)rootObject;
- (void)saveToMessage:(struct ComponentInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct RepeatedField<unsigned int> { unsigned int *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedField<unsigned int> { unsigned int *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedPtrField<TSP::ComponentExternalReference> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct RepeatedPtrField<TSP::ComponentDataReference> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; struct RepeatedPtrField<TSP::FeatureInfo> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; }*)arg1 saveToken:(unsigned long long)arg2 writtenComponentInfo:(const struct WrittenComponentInfo { id x1; bool x2; bool x3; bool x4; id x5; bool x6; bool x7; id x8; bool x9; unsigned long long x10; unsigned long long x11; id x12; id x13; id x14; }*)arg3;
- (unsigned long long)saveToken;
- (void)setArchivedObjectsImpl:(id)arg1;
- (void)setComponentObjectUUIDMap:(id)arg1;
- (void)setEncodedLength:(unsigned long long)arg1 lastModificationDate:(id)arg2;
- (void)setLocator:(id)arg1;
- (void)setModified:(bool)arg1 forObject:(id)arg2;
- (void)setModified:(bool)arg1 forObject:(id)arg2 isDocumentUpgrade:(bool)arg3;
- (void)setModifiedImpl:(bool)arg1 forObject:(id)arg2;
- (void)setPackageIdentifier:(unsigned char)arg1 preferredLocator:(id)arg2 locator:(id)arg3 isStoredOutsideObjectArchive:(bool)arg4 rootObjectOrNil:(id)arg5 archivedObjects:(id)arg6 externalReferenceMap:(id)arg7 dataReferences:(id)arg8 readVersion:(unsigned long long)arg9 writeVersion:(unsigned long long)arg10 featureInfos:(id)arg11 componentObjectUUIDMap:(id)arg12 objectReferenceMap:(id)arg13 saveToken:(unsigned long long)arg14 encodedLength:(unsigned long long)arg15 lastModificationDate:(id)arg16 wasCopied:(bool)arg17 wasModifiedDuringWrite:(bool)arg18;
- (void)setReadVersion:(unsigned long long)arg1 writeVersion:(unsigned long long)arg2 componentObjectUUIDMap:(id)arg3;
- (void)setRootObject:(id)arg1;
- (bool)shouldForceCaching;
- (bool)shouldKeepStrongObjectImpl;
- (void)willDiscardComponent;
- (unsigned long long)writeVersion;

@end