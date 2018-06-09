/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDImageAdjustments : NSObject <NSCopying, NSMutableCopying, TSDMixing> {
    double  mBottomLevel;
    double  mContrast;
    double  mDenoise;
    bool  mEnhance;
    double  mExposure;
    double  mGamma;
    double  mHighlights;
    bool  mRepresentsSageAdjustments;
    double  mSaturation;
    double  mShadows;
    double  mSharpness;
    double  mTemperature;
    double  mTint;
    double  mTopLevel;
}

@property (nonatomic, readonly) double bottomLevel;
@property (nonatomic, readonly) double contrast;
@property (nonatomic, readonly) double denoise;
@property (nonatomic, readonly) bool enhance;
@property (nonatomic, readonly) double exposure;
@property (nonatomic, readonly) double gamma;
@property (nonatomic, readonly) double highlights;
@property (nonatomic, readonly) bool representsSageAdjustments;
@property (nonatomic, readonly) double saturation;
@property (nonatomic, readonly) double shadows;
@property (nonatomic, readonly) double sharpness;
@property (nonatomic, readonly) double temperature;
@property (nonatomic, readonly) double tint;
@property (nonatomic, readonly) double topLevel;

+ (bool)canMixWithNilObjects;

- (double)bottomLevel;
- (double)contrast;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)denoise;
- (id)description;
- (bool)enhance;
- (double)exposure;
- (double)gamma;
- (unsigned long long)hash;
- (double)highlights;
- (void)i_initFromDefaultArchive;
- (id)imageAdjustmentsWithoutEnhance;
- (id)init;
- (id)initWithArchive:(const struct ImageAdjustmentsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; bool x17; bool x18; }*)arg1 unarchiver:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)representsSageAdjustments;
- (double)saturation;
- (void)saveToArchive:(struct ImageAdjustmentsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; bool x17; bool x18; }*)arg1 archiver:(id)arg2;
- (double)shadows;
- (double)sharpness;
- (double)temperature;
- (double)tint;
- (double)topLevel;

@end
