/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCERemoteDataValueMap : NSObject <NSCopying> {
    NSMutableDictionary * _coldDataByYear;
    struct NSMutableDictionary { Class x1; } * _data;
}

@property (nonatomic, retain) NSMutableDictionary *coldDataByYear;
@property (nonatomic, readonly) long long count;
@property (nonatomic, retain) NSMutableDictionary *data;

+ (id)valueMap;
+ (id)valueMapWithSpecifier:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (void)addValuesFromMap:(id)arg1;
- (id)allSpecifiers;
- (id)coldDataByYear;
- (bool)containsValueForAllSpecifiersInSet:(id)arg1;
- (bool)containsValueForSpecifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (struct NSMutableDictionary { Class x1; }*)data;
- (void)enumerateSpecifiersAndValuesWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initFromArchive:(const struct RemoteDataValueMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCE::RemoteDataValueMapArchive_RemoteDataMapEntry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1;
- (id)initWithData:(struct NSMutableDictionary { Class x1; }*)arg1;
- (id)mapForSingleSpecifier:(id)arg1;
- (id)mapForSpecifiersInSet:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (struct NSMutableDictionary { Class x1; }*)p_mapForSpecifier:(id)arg1 createIfMissing:(bool)arg2;
- (struct NSMutableDictionary { Class x1; }*)p_mapForYear:(id)arg1 createIfMissing:(bool)arg2;
- (void)p_saveMap:(struct NSMutableDictionary { Class x1; }*)arg1 toArchive:(struct RemoteDataValueMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCE::RemoteDataValueMapArchive_RemoteDataMapEntry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg2;
- (void)removeAllValues;
- (void)removeValueForSpecifier:(id)arg1;
- (void)removeValuesForSpecifierSet:(id)arg1;
- (void)saveToArchive:(struct RemoteDataValueMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSCE::RemoteDataValueMapArchive_RemoteDataMapEntry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1;
- (void)setColdDataByYear:(id)arg1;
- (void)setData:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setValue:(id)arg1 forSpecifier:(id)arg2;
- (id)updateWithValuesFromMap:(id)arg1 overwriteValues:(bool)arg2;
- (id)valueForSpecifier:(id)arg1;

@end
