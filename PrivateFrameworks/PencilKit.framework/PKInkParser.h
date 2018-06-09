/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInkParser : NSObject

+ (void)addFunctionsIfNecessaryForInk:(id)arg1 property:(unsigned long long)arg2 forDictionary:(id)arg3;
+ (id)controlPointArrayForInkFunction:(id)arg1;
+ (id)dictionaryForInk:(id)arg1 name:(id)arg2;
+ (id)dictionaryForInkFunction:(id)arg1;
+ (struct CGImage { }*)imageRefForTextureName:(id)arg1;
+ (id)inkBehaviorFromDictionary:(id)arg1 identifier:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4;
+ (id)inkBehaviorVariantWithDictionary:(id)arg1 renderingDescriptor:(id)arg2 variant:(id)arg3;
+ (id)inkBehaviorsWithIdentifer:(id)arg1;
+ (id)inkBehaviorsWithIdentifer:(id)arg1 version:(unsigned long long)arg2;
+ (id)inkRenderingDescriptorWithDictionary:(id)arg1;
+ (void)loadBaseRadius:(id)arg1 forBehavior:(id)arg2;
+ (struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { struct PKFunction {} *x_1_1_1; } x1; })loadFunction:(id)arg1;
+ (struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x1; struct PKOutputFunction {} *x2; struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction> > { struct PKOutputFunction {} *x_3_1_1; } x3; })loadOutput:(id)arg1 forBehavior:(id)arg2;
+ (id)plistDictionaryForInk:(id)arg1;
+ (id)stringForFunctionMask:(id)arg1;
+ (id)stringForInkInput:(unsigned long long)arg1;
+ (void)validatePiecewiseBezierFunction:(struct PKFunctionPiecewiseBezier { int (**x1)(); struct vector<double, std::__1::allocator<double> > { double *x_2_1_1; double *x_2_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_2_1_3; } x2; struct vector<double, std::__1::allocator<double> > { double *x_3_1_1; double *x_3_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_3_1_3; } x3; struct vector<double, std::__1::allocator<double> > { double *x_4_1_1; double *x_4_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_4_1_3; } x4; struct vector<double, std::__1::allocator<double> > { double *x_5_1_1; double *x_5_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_5_1_3; } x5; struct vector<double, std::__1::allocator<double> > { double *x_6_1_1; double *x_6_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_6_1_3; } x6; struct vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_7_1_1; struct vector<double, std::__1::allocator<double> > {} *x_7_1_2; struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double> > *, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > { struct vector<double, std::__1::allocator<double> > {} *x_3_2_1; } x_7_1_3; } x7; }*)arg1;
+ (void)verifyParameters:(id)arg1;

@end
