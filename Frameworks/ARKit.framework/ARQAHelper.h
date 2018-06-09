/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARQAHelper : NSObject

+ (id)arrayOf2dPoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
+ (id)arrayOf3dPoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithMatrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (id)arrayWithVector2;
+ (id)arrayWithVector3;
+ (id)arrayWithVector4;
+ (id)extractAnchorDataForFrame:(id)arg1;
+ (id)generateTagsForConfiguration:(id)arg1 replaySensor:(id)arg2;
+ (id)getARKitVersion;
+ (id)getAppleCV3DVersion;
+ (id)getDictionaryForVertices:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 vertexCount:(unsigned long long)arg2 textureCoordinates:(const /* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 textureCoordinateCount:(unsigned long long)arg4;
+ (id)getSceneKitVersion;
+ (id)headerInformationWithSize:(struct CGSize { double x1; double x2; })arg1 andFrameLabelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andSessionConfiguration:(id)arg3;
+ (id)traceFrameData:(id)arg1 withFrameIndex:(unsigned long long)arg2;

@end
