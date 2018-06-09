/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSceneRenderSetup : NSObject

+ (id)camera;
+ (id)cameraAndSceneTransform;
+ (id)full;
+ (id)identity;
+ (id)null;
+ (id)sceneTransform;
+ (id)viewport;

- (id)renderingCameraFromOriginalCamera:(id)arg1 pipeline:(id)arg2;

@end
