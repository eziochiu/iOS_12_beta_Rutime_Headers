/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsVehicleWheel : NSObject <NSCopying, NSSecureCoding> {
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _axle;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _connectionPosition;
    double  _frictionSlip;
    bool  _isFront;
    double  _maximumSuspensionForce;
    double  _maximumSuspensionTravel;
    SCNNode * _node;
    double  _radius;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _steeringAxis;
    double  _suspensionCompression;
    double  _suspensionDamping;
    double  _suspensionRestLength;
    double  _suspensionStiffness;
    SCNPhysicsVehicle * _vehicle;
    int  _wheelIndex;
}

@property struct SCNVector3 { float x1; float x2; float x3; } axle;
@property struct SCNVector3 { float x1; float x2; float x3; } connectionPosition;
@property double frictionSlip;
@property double maximumSuspensionForce;
@property double maximumSuspensionTravel;
@property (readonly) SCNNode *node;
@property double radius;
@property struct SCNVector3 { float x1; float x2; float x3; } steeringAxis;
@property double suspensionCompression;
@property double suspensionDamping;
@property double suspensionRestLength;
@property double suspensionStiffness;

+ (bool)supportsSecureCoding;
+ (id)wheelWithNode:(id)arg1;

- (void)_setVehicle:(id)arg1;
- (void)_setWheelIndex:(int)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })axle;
- (struct SCNVector3 { float x1; float x2; float x3; })connectionPosition;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (double)frictionSlip;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFront;
- (double)maximumSuspensionForce;
- (double)maximumSuspensionTravel;
- (id)node;
- (double)radius;
- (void)setAxle:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setConnectionPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setFrictionSlip:(double)arg1;
- (void)setIsFront:(bool)arg1;
- (void)setMaximumSuspensionForce:(double)arg1;
- (void)setMaximumSuspensionTravel:(double)arg1;
- (void)setNode:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)setSteeringAxis:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setSuspensionCompression:(double)arg1;
- (void)setSuspensionDamping:(double)arg1;
- (void)setSuspensionRestLength:(double)arg1;
- (void)setSuspensionStiffness:(double)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })steeringAxis;
- (double)suspensionCompression;
- (double)suspensionDamping;
- (double)suspensionRestLength;
- (double)suspensionStiffness;

@end
