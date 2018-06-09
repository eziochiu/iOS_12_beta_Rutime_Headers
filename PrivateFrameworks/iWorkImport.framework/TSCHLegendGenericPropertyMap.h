/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendGenericPropertyMap : TSSPropertyMap

+ (id)imageFillProperties;
+ (id)properties;
+ (void)savePropertyMap:(id)arg1 toArchive:(struct LegendGenericPropertyMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FillArchive {} *x5; int x6; float x7; struct ShadowArchive {} *x8; struct StrokeArchive {} *x9; }*)arg2 archiver:(id)arg3;

- (id)initWithArchive:(const struct LegendGenericPropertyMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FillArchive {} *x5; int x6; float x7; struct ShadowArchive {} *x8; struct StrokeArchive {} *x9; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct LegendGenericPropertyMapArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FillArchive {} *x5; int x6; float x7; struct ShadowArchive {} *x8; struct StrokeArchive {} *x9; }*)arg1 archiver:(id)arg2;

@end
