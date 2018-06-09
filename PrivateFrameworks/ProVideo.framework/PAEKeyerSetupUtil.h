/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEKeyerSetupUtil : NSObject {
    id  _actionAPI;
    id  _apiManager;
    id  _getAPI;
    PAEKeyerCbCrSetup * _keyerCbCrSetup;
    PAEKeyerLumaSetup * _keyerLumaSetup;
    struct PAEKeyerOMKeyer2D { int (**x1)(); float x2; float x3; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_4_1_1; struct Vec2f { float x_2_2_1[2]; } x_4_1_2; } x4; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_5_1_1; struct Vec2f { float x_2_2_1[2]; } x_5_1_2; } x5; float x6; float x7; struct Vec2f { float x_8_1_1[2]; } x8; float *x9; struct vector<float, std::__1::allocator<float> > { float *x_10_1_1; float *x_10_1_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_2_1; } x_10_1_3; } x10; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_11_1_1; } x11; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct Mat4f { struct Vec4f { float x_1_2_1[4]; } x_13_1_1[4]; } x13; } * _omKeyer;
    id  _setAPI;
}

- (bool)addTolerance;
- (double)autoAdjustSoftGap;
- (double)autoKeySoftness;
- (bool)autoScale;
- (void)dealloc;
- (bool)defineEdge;
- (void)getDataFromDB:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (double)highlightsGain;
- (id)initWithAPIManager:(id)arg1 colorPrimaries:(int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)keyerActiveAt:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (struct PAEKeyerOMKeyer2D { int (**x1)(); float x2; float x3; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_4_1_1; struct Vec2f { float x_2_2_1[2]; } x_4_1_2; } x4; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_5_1_1; struct Vec2f { float x_2_2_1[2]; } x_5_1_2; } x5; float x6; float x7; struct Vec2f { float x_8_1_1[2]; } x8; float *x9; struct vector<float, std::__1::allocator<float> > { float *x_10_1_1; float *x_10_1_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_2_1; } x_10_1_3; } x10; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_11_1_1; } x11; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct Mat4f { struct Vec4f { float x_1_2_1[4]; } x_13_1_1[4]; } x13; }*)omKeyer;
- (void)removeKeyframeAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)removeKeyframeAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1 forParam:(int)arg2 withAPI:(id)arg3;
- (void)setAddTolerance:(bool)arg1;
- (void)setDefineEdge:(bool)arg1;
- (double)shadowsGain;
- (double)simpleKeyAmount;
- (double)spreadGain;
- (void)syncChromaWithDB:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)syncLumaWithDB:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)syncWithDB:(union { double x1; struct { /* ? */ } *x2; })arg1 setAsDefault:(bool)arg2;
- (bool)tight;

@end
