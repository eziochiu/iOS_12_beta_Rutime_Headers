/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface TTMergeableString : NSObject <CRDataType> {
    NSMutableAttributedString * _attributedString;
    bool  _cacheInvalid;
    NSObject<TTMergeableStringDelegate> * _delegate;
    unsigned long long  _editCount;
    struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { 
        struct TopoSubstring {} **__begin_; 
        struct TopoSubstring {} **__end_; 
        struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { 
            struct TopoSubstring {} **__value_; 
        } __end_cap_; 
    }  _endNodes;
    bool  _hasLocalChanges;
    NSHashTable * _objectsNeedingUpdatedRanges;
    struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { 
        struct TopoSubstring {} **__begin_; 
        struct TopoSubstring {} **__end_; 
        struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { 
            struct TopoSubstring {} **__value_; 
        } __end_cap_; 
    }  _orderedSubstrings;
    unsigned long long  _replicaStyleClock;
    unsigned long long  _replicaTextClock;
    NSUUID * _replicaUUID;
    struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { 
        struct TopoSubstring {} **__begin_; 
        struct TopoSubstring {} **__end_; 
        struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { 
            struct TopoSubstring {} **__value_; 
        } __end_cap_; 
    }  _startNodes;
    TTVectorMultiTimestamp * _timestamp;
    unsigned int  _unserializedClock;
    id /* block */  _updateRangeBlock;
}

@property (nonatomic, retain) NSMutableAttributedString *attributedString;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<TTMergeableStringDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CRTTCompatibleDocument *document;
@property (nonatomic) bool hasLocalChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *objectsNeedingUpdatedRanges;
@property (nonatomic, readonly) unsigned long long replicaStyleClock;
@property (nonatomic, readonly) unsigned long long replicaTextClock;
@property (nonatomic, retain) NSUUID *replicaUUID;
@property (readonly) Class superclass;
@property (nonatomic, retain) TTVectorMultiTimestamp *timestamp;

+ (id)unserialisedReplicaID;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_testSetTextTimestamp:(unsigned long long)arg1;
- (id)attributedString;
- (void)beginEditing;
- (bool)canMergeString:(id)arg1;
- (id)characterRangesForSelection:(id)arg1;
- (id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(id /* block */)arg2;
- (bool)check:(id*)arg1;
- (void)checkTimestampLogStyleErrors:(bool)arg1;
- (void)cleanupObjectsNeedingUpdatedRanges;
- (void)coalesce;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)deleteSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg1 withCharacterRanges:(struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg2;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)document;
- (id)dotDescription:(unsigned long long)arg1;
- (void)dumpMergeData:(id)arg1;
- (void)endEditing;
- (struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)endNodes;
- (void)enumerateRangesModifiedAfter:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateSubstrings:(id /* block */)arg1;
- (void)generateIdsForLocalChanges;
- (void)generateIdsForLocalChangesSafeForSharedTimestamp:(bool)arg1;
- (unsigned long long)getCharacterIndexForCharID:(struct TopoID { id x1; })arg1;
- (void)getCharacterRanges:(struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1 forSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg2;
- (struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)getSubstringBeforeTopoID:(struct TopoID { id x1; })arg1;
- (void)getSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg1 forCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)getSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg1 forTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; } x1; unsigned int x2; })arg2;
- (void)getSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg1 inOrderedSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg2 forCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)graphIsEqual:(id)arg1;
- (bool)hasLocalChanges;
- (unsigned long long)hash;
- (id)i_saveDeltasSinceTimestamp:(id)arg1 toArchive:(struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg2;
- (id)init;
- (id)initWithArchive:(const struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1 andReplicaID:(id)arg2;
- (id)initWithArchive:(const struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1 andReplicaID:(id)arg2 andSharedTimestamp:(id)arg3;
- (id)initWithArchive:(const struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg3;
- (id)initWithArchive:(const struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg3 timestamp:(id)arg4;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithReplicaID:(id)arg1;
- (id)initWithReplicaID:(id)arg1 asFragment:(bool)arg2;
- (struct TopoIDRange { struct TopoID { id x_1_1_1; } x1; unsigned int x2; })insertAttributedString:(id)arg1 after:(struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)arg2 before:(struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)arg3;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)invalidateCache;
- (bool)isEqual:(id)arg1;
- (bool)isFragment;
- (unsigned long long)length;
- (void)mergeWith:(id)arg1;
- (unsigned long long)mergeWithString:(id)arg1;
- (unsigned long long)mergeWithString:(id)arg1 mergeTimestamps:(bool)arg2;
- (void)moveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndex:(unsigned long long)arg2;
- (id)objectsNeedingUpdatedRanges;
- (struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)orderedSubstrings;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (unsigned long long)replicaStyleClock;
- (unsigned long long)replicaTextClock;
- (id)replicaUUID;
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)arg1;
- (void)resetLocalReplicaClocksToTimestampValues;
- (void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg2;
- (void)saveSubstrings:(struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)arg1 archiveSet:(struct unordered_set<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *> > { struct __hash_table<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *>, std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *> > > { struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> { struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg2 linkSet:(struct unordered_set<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *> > { struct __hash_table<TopoSubstring *, std::__1::hash<TopoSubstring *>, std::__1::equal_to<TopoSubstring *>, std::__1::allocator<TopoSubstring *> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *>, std::__1::allocator<std::__1::__hash_node<TopoSubstring *, void *> > > { struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> { struct __hash_node_base<std::__1::__hash_node<TopoSubstring *, void *> *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; }*)arg3 archivedString:(id*)arg4 toArchive:(struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg5;
- (void)saveToArchive:(struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1;
- (bool)selection:(id)arg1 wasModifiedAfter:(id)arg2;
- (id)selectionForCharacterRanges:(id)arg1;
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned long long)arg2;
- (id)serialize;
- (id)serializeDeltaSinceTimestamp:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setHasLocalChanges:(bool)arg1;
- (void)setReplicaUUID:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)sortSplitNodes;
- (struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)splitTopoSubstring:(struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)arg1 atIndex:(unsigned int)arg2;
- (struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x1; struct TopoSubstring {} **x2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_1_1; } x3; }*)startNodes;
- (id)string;
- (long long)substring:(struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)arg1 modifiedAfter:(id)arg2;
- (bool)textEitherSideOfSelectionAnchor:(struct TopoID { id x1; })arg1 wasModifiedAfter:(id)arg2;
- (id)timestamp;
- (id)tombstone;
- (void)traverseUnordered:(id /* block */)arg1;
- (void)updateAttributedStringAfterMerge;
- (void)updateCache;
- (void)updateClock;
- (void)updateSubstringIndexes;
- (void)updateTimestampsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x_1_1_1; } x1; unsigned int x2; })arg1 toNewRangeID:(struct TopoIDRange { struct TopoID { id x_1_1_1; } x1; unsigned int x2; })arg2;
- (void)walkGraph:(id /* block */)arg1;

@end
