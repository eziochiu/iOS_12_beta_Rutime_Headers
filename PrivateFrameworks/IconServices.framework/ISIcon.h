/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISIcon : NSObject <CALayerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) ISIconManager *manager;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)applicationIcon;
+ (unsigned long long)deviceIdiom;
+ (int)findVariantFromSet:(unsigned long long)arg1 deviceIdiom:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
+ (id)layerUpdateQueue;
+ (id)sizesFromSet:(unsigned long long)arg1;
+ (struct _LIIconVariantInfo { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; double x3; unsigned long long x4; char *x5; }*)variantInfoForSet:(unsigned long long)arg1 count:(unsigned long long*)arg2;

- (id)_init;
- (unsigned long long)badgeOptions;
- (void)displayLayer:(id)arg1;
- (id)manager;
- (unsigned long long)variantOptions;

@end
