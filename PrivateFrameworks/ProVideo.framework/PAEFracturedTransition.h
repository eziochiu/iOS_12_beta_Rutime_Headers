/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEFracturedTransition : PAETransitionDefaultBase {
    struct FracturedParams { bool x1; float x2; bool x3; int x4; bool x5; bool x6; bool x7; bool x8; float x9; float x10; int x11; float x12; float x13; double x14[4]; bool x15; double x16[4]; float x17; float x18; bool x19; float x20; int x21; bool x22; float x23; float x24; bool x25; float x26; float x27[2]; float x28[2]; } * _fxParams;
    struct vector<FracturedUtils::FracturedFXPoolItem *, std::__1::allocator<FracturedUtils::FracturedFXPoolItem *> > { 
        struct FracturedFXPoolItem {} **__begin_; 
        struct FracturedFXPoolItem {} **__end_; 
        struct __compressed_pair<FracturedUtils::FracturedFXPoolItem **, std::__1::allocator<FracturedUtils::FracturedFXPoolItem *> > { 
            struct FracturedFXPoolItem {} **__value_; 
        } __end_cap_; 
    }  _fxPool;
    NSLock * _fxPoolLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)addParameters;
- (bool)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg5;
- (void)dealloc;
- (bool)frameSetup:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg1 inputInfoA:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg2 inputInfoB:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; double x9; })arg3 timeFraction:(float)arg4 hardware:(bool*)arg5 software:(bool*)arg6;
- (id)initWithAPIManager:(id)arg1;
- (id)properties;

@end
