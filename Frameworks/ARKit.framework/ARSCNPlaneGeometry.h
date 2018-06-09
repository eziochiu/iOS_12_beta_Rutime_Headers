/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARSCNPlaneGeometry : SCNGeometry {
    <MTLBuffer> * _textureCoordinateBuffer;
    <MTLBuffer> * _vertexBuffer;
}

+ (id)planeGeometryWithDevice:(id)arg1;

- (void).cxx_destruct;
- (void)updateFromPlaneGeometry:(id)arg1;

@end
