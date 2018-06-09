/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSpotLight : TSCH3DLight <TSCH3DLightDirectional, TSCH3DLightPositionable> {
    float  _cutOff;
    TSCH3DVector * _direction;
    float  _dropOff;
    TSCH3DVector * _position;
}

@property (nonatomic) float cutOff;
@property (nonatomic) struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; } direction;
@property (nonatomic) float dropOff;
@property (nonatomic) struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; } position;

+ (Class)effectClass;
+ (id)instanceWithArchive:(const struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; struct Chart3DVectorArchive {} *x8; struct Chart3DVectorArchive {} *x9; float x10; unsigned int x11; struct Chart3DPointLightArchive {} *x12; struct Chart3DDirectionalLightArchive {} *x13; struct Chart3DSpotLightArchive {} *x14; bool x15; }*)arg1 unarchiver:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)cutOff;
- (void)dealloc;
- (id)description;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })direction;
- (float)dropOff;
- (id)init;
- (id)initWithArchive:(const struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; struct Chart3DVectorArchive {} *x8; struct Chart3DVectorArchive {} *x9; float x10; unsigned int x11; struct Chart3DPointLightArchive {} *x12; struct Chart3DDirectionalLightArchive {} *x13; struct Chart3DSpotLightArchive {} *x14; bool x15; }*)arg1 unarchiver:(id)arg2;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })position;
- (void)saveToArchive:(struct Chart3DLightArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct Chart3DVectorArchive {} *x6; struct Chart3DVectorArchive {} *x7; struct Chart3DVectorArchive {} *x8; struct Chart3DVectorArchive {} *x9; float x10; unsigned int x11; struct Chart3DPointLightArchive {} *x12; struct Chart3DDirectionalLightArchive {} *x13; struct Chart3DSpotLightArchive {} *x14; bool x15; }*)arg1 archiver:(id)arg2;
- (void)setCutOff:(float)arg1;
- (void)setDirection:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg1;
- (void)setDropOff:(float)arg1;
- (void)setPosition:(struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })arg1;

@end
