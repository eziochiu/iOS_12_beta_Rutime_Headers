/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLightingPackage : NSObject <NSCopying, TSSPropertyValueArchiving> {
    NSArray * _lights;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, copy) NSString *name;

+ (id)allNamedPackages;
+ (id)instanceWithArchive:(const struct Chart3DLightingPackageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<TSCH::Chart3DLightArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 unarchiver:(id)arg2;
+ (id)localizedNameForName:(id)arg1;
+ (id)package;
+ (id)packageFromName:(id)arg1;

- (void)addLight:(id)arg1;
- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct Chart3DLightingPackageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<TSCH::Chart3DLightArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 unarchiver:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)name;
- (void)saveToArchive:(struct Chart3DLightingPackageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<TSCH::Chart3DLightArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 archiver:(id)arg2;
- (void)setName:(id)arg1;

@end
