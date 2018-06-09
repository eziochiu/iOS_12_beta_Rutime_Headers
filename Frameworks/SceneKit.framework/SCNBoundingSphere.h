/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNBoundingSphere : NSObject {
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  center;
    double  radius;
}

@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } center;
@property (nonatomic) double radius;

- (struct SCNVector3 { float x1; float x2; float x3; })center;
- (id)description;
- (double)radius;
- (void)setCenter:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setRadius:(double)arg1;

@end
