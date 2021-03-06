/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKGLUtility : NSObject

+ (bool)canUseOpenGL;
+ (id)defaultDevice;
+ (void)initialize;
+ (bool)isInBackground;
+ (double)layerContentsScale;
+ (void)postGLActiveNotification;
+ (void)postGLInactiveNotification;

@end
