/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailPhotoCropViewController : NTKCNavigationController {
    _NTKCFaceDetailPhotoCropViewController * _implementationVC;
}

@property (nonatomic, readonly) NTKCompanionCustomPhotosEditor *editor;
@property (nonatomic, readonly) NTKFace *face;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) NTKDigitalTimeLabelStyle *timeStyle;

- (void).cxx_destruct;
- (id)editor;
- (id)face;
- (unsigned long long)index;
- (id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4;
- (id)timeStyle;
- (void)viewDidLoad;

@end
