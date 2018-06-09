/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSimpleBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer> {
    TSCH3DFBOResource * mBlurFBOResource;
    NSArray * mBlurParametersArray;
    TSCH3DFBOResource * mShadowsFBOResource;
    struct tvec2<int> { 
        union { 
            int x; 
            int r; 
            int s; 
        } ; 
        union { 
            int y; 
            int g; 
            int t; 
        } ; 
    }  mShadowsSize;
}

- (id).cxx_construct;
- (void)blurParametersFromQuality:(float)arg1 shadowSize:(long long*)arg2 numPasses:(long long*)arg3 kernelScale:(float*)arg4;
- (float)blurSlackForQuality:(float)arg1;
- (void)dealloc;
- (id)initWithBlurParametersArray:(id)arg1;
- (void)invalidate;
- (void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(id /* block */)arg3;
- (id)shadowsFBOForContext:(id)arg1;
- (void)unprotectShadowInSession:(id)arg1;

@end
