/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPhongMaterialPackage : TSCH3DMaterialPackage {
    TSCH3DDiffuseMaterial * _diffuse;
    TSCH3DEmissiveMaterial * _emissive;
    TSCH3DModulateMaterial * _modulate;
    TSCH3DShininessMaterial * _shininess;
    TSCH3DSpecularMaterial * _specular;
}

@property (nonatomic, retain) TSCH3DDiffuseMaterial *diffuse;
@property (nonatomic, retain) TSCH3DEmissiveMaterial *emissive;
@property (nonatomic, retain) TSCH3DModulateMaterial *modulate;
@property (nonatomic, retain) TSCH3DShininessMaterial *shininess;
@property (nonatomic, retain) TSCH3DSpecularMaterial *specular;

+ (id)instanceWithArchive:(const struct Chart3DPhongMaterialPackageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DEmissiveMaterialArchive {} *x5; struct Chart3DDiffuseMaterialArchive {} *x6; struct Chart3DModulateMaterialArchive {} *x7; struct Chart3DSpecularMaterialArchive {} *x8; struct Chart3DShininessMaterialArchive {} *x9; }*)arg1 unarchiver:(id)arg2;
+ (id)package;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)diffuse;
- (id)emissive;
- (bool)hasCompleteData;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct Chart3DPhongMaterialPackageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DEmissiveMaterialArchive {} *x5; struct Chart3DDiffuseMaterialArchive {} *x6; struct Chart3DModulateMaterialArchive {} *x7; struct Chart3DSpecularMaterialArchive {} *x8; struct Chart3DShininessMaterialArchive {} *x9; }*)arg1 unarchiver:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)materialEnumerator;
- (id)modulate;
- (void)saveToArchive:(struct Chart3DPhongMaterialPackageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DEmissiveMaterialArchive {} *x5; struct Chart3DDiffuseMaterialArchive {} *x6; struct Chart3DModulateMaterialArchive {} *x7; struct Chart3DSpecularMaterialArchive {} *x8; struct Chart3DShininessMaterialArchive {} *x9; }*)arg1 archiver:(id)arg2;
- (void)setDiffuse:(id)arg1;
- (void)setEmissive:(id)arg1;
- (void)setModulate:(id)arg1;
- (void)setShininess:(id)arg1;
- (void)setSpecular:(id)arg1;
- (id)shininess;
- (id)specular;

@end
