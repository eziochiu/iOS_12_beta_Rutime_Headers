/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CROrderedSetElement : NSObject <CRDataType, CREquatable, NSCopying> {
    CRRegisterLatest * _index;
    <CRDataType><CRCoding> * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CRRegisterLatest *index;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CRDataType><CRCoding> *value;

+ (id)temporaryElementWithValue:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (void)encodeIntoProtobufSetElement:(struct Dictionary_Element { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ObjectID {} *x5; struct ObjectID {} *x6; struct VectorTimestamp {} *x7; struct RegisterLatest {} *x8; }*)arg1 coder:(id)arg2;
- (unsigned long long)hash;
- (id)index;
- (id)initWithProtobufSetElement:(const struct Dictionary_Element { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned long long x_1_5_3; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; struct { unsigned char x_2_6_1; } x_2_5_2; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ObjectID {} *x5; struct ObjectID {} *x6; struct VectorTimestamp {} *x7; struct RegisterLatest {} *x8; }*)arg1 decoder:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)setValue:(id)arg1;
- (id)tombstone;
- (id)value;
- (void)walkGraph:(id /* block */)arg1;

@end
