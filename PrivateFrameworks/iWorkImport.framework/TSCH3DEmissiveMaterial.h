/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DEmissiveMaterial : TSCH3DTexturesMaterial

+ (id)instanceWithArchive:(const struct Chart3DEmissiveMaterialArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DTexturesMaterialArchive {} *x5; struct RepeatedPtrField<TSCH::Chart3DImageTextureTilingArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 unarchiver:(id)arg2;

- (struct MaterialShaderVariables { id x1; id x2; id x3; id x4; })defaultShaderVariables;
- (id)initWithArchive:(const struct Chart3DEmissiveMaterialArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DTexturesMaterialArchive {} *x5; struct RepeatedPtrField<TSCH::Chart3DImageTextureTilingArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct Chart3DEmissiveMaterialArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DTexturesMaterialArchive {} *x5; struct RepeatedPtrField<TSCH::Chart3DImageTextureTilingArchive> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; }*)arg1 archiver:(id)arg2;

@end
