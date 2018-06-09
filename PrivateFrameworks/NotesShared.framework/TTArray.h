/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface TTArray : NSObject <CRCoding, CRDataType, TTMergeableStringDelegate> {
    TTMergeableAttributedString * _contents;
    NSObject<CRUndoDelegate> * _delegate;
    CRDocument * _document;
}

@property (nonatomic, readonly) TTMergeableAttributedString *contents;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CRUndoDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CRDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *nsArray;
@property (nonatomic, readonly) NSUUID *replicaUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addUndoCommand:(id)arg1;
- (void)beginEditing;
- (id)contents;
- (unsigned long long)count;
- (id)delegate;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)document;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (void)encodeWithCRCoder:(id)arg1;
- (void)endEditing;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)init;
- (id)initWithArchive:(const struct StringArray { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct String {} *x5; struct RepeatedPtrField<CRDT::StringArray_ArrayAttachment> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 andReplicaID:(id)arg2;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1 stringArray:(const struct StringArray { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct String {} *x5; struct RepeatedPtrField<CRDT::StringArray_ArrayAttachment> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg2;
- (id)initWithContents:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)nsArray;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)replicaUUID;
- (void)saveToArchive:(struct StringArray { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct String {} *x5; struct RepeatedPtrField<CRDT::StringArray_ArrayAttachment> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1;
- (id)serializeDataFromArchive:(const struct StringArray { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct String {} *x5; struct RepeatedPtrField<CRDT::StringArray_ArrayAttachment> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)textAttachmentAtIndex:(unsigned long long)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;
- (bool)wantsUndoCommands;

@end
