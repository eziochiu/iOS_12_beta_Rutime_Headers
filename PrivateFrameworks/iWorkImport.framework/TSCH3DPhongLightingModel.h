/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPhongLightingModel : TSCH3DPhongLikeLightingModel

+ (id)effectClass;
+ (id)instanceWithArchive:(const struct Chart3DLightingModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DPhongLightingModelArchive {} *x5; struct Chart3DFixedFunctionLightingModelArchive {} *x6; struct Chart3DEnvironmentPackageArchive {} *x7; }*)arg1 unarchiver:(id)arg2;
+ (id)materialEffectClass;

- (id)initWithArchive:(const struct Chart3DLightingModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DPhongLightingModelArchive {} *x5; struct Chart3DFixedFunctionLightingModelArchive {} *x6; struct Chart3DEnvironmentPackageArchive {} *x7; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct Chart3DLightingModelArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct Chart3DPhongLightingModelArchive {} *x5; struct Chart3DFixedFunctionLightingModelArchive {} *x6; struct Chart3DEnvironmentPackageArchive {} *x7; }*)arg1 archiver:(id)arg2;

@end
