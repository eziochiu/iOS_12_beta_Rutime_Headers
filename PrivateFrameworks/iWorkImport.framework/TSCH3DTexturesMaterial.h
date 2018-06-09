/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTexturesMaterial : TSCH3DMaterial {
    TSCH3DVector * _color;
    NSArray * _textures;
    NSArray * _tilings;
}

@property (nonatomic) struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } color;

+ (id)instanceWithArchive:(const struct Chart3DTexturesMaterialArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DVectorArchive {} *x5; struct RepeatedPtrField<TSCH::Chart3DTSPImageDataTextureArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 unarchiver:(id)arg2;

- (void)addTexture:(id)arg1 tiling:(id)arg2;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (id)firstTexture;
- (id)firstTiling;
- (bool)hasCompleteData;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct Chart3DTexturesMaterialArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DVectorArchive {} *x5; struct RepeatedPtrField<TSCH::Chart3DTSPImageDataTextureArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 unarchiver:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)saveToArchive:(struct Chart3DTexturesMaterialArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DVectorArchive {} *x5; struct RepeatedPtrField<TSCH::Chart3DTSPImageDataTextureArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 archiver:(id)arg2;
- (void)setColor:(struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })arg1;
- (unsigned long long)textureCount;
- (id)textureEnumerator;
- (id)textures;
- (id)tilings;

@end
