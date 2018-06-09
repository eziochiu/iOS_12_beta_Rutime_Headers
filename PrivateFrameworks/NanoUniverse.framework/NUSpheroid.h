/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

@interface NUSpheroid : NSObject <NUAnimatable, NURotatable> {
    float  _angle;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _centerCoordinate;
    void _colorize;
    float  _distance;
    float  _distanceScale;
    bool  _facing;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _homeCoordinate;
    void _light;
    float  _opacity;
    NUSpheroid * _parent;
    void _position;
    unsigned long long  _programType;
    float  _radius;
    float  _radiusScale;
    float  _rotation;
    NUScene * _scene;
    unsigned long long  _spriteType;
    unsigned long long  _type;
    bool  _visible;
}

@property (nonatomic) float angle;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } centerCoordinate;
@property (nonatomic) void colorize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float distance;
@property (nonatomic) float distanceScale;
@property (getter=isFacing, nonatomic) bool facing;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } homeCoordinate;
@property (nonatomic, readonly) void light;
@property (nonatomic) float opacity;
@property (nonatomic, readonly) NUSpheroid *parent;
@property (nonatomic, readonly) void position;
@property (nonatomic, readonly) unsigned long long programType;
@property (nonatomic, readonly) float radius;
@property (nonatomic) float radiusScale;
@property (nonatomic) float rotation;
@property (nonatomic) unsigned long long spriteType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;
@property (getter=isVisible, nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_updateCamera;
- (void)_updatePositionFromAngle;
- (float)angle;
- (void)animatedFloatForKey:(unsigned long long)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })centerCoordinate;
- (void)centerOnCity:(id)arg1;
- (void)colorize;
- (void)date:(id)arg1 toCameraPosition:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 toCameraTarget:(/* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3;
- (void)date:(id)arg1 toRotation:(float*)arg2 toAngle:(float*)arg3 toLight:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4 toDistance:(float*)arg5 toRadius:(float*)arg6;
- (float)distance;
- (float)distanceScale;
- (struct CLLocationCoordinate2D { double x1; double x2; })homeCoordinate;
- (id)initWithScene:(id)arg1 parent:(id)arg2 type:(unsigned long long)arg3;
- (bool)isFacing;
- (bool)isVisible;
- (void)light;
- (float)opacity;
- (id)parent;
- (void)position;
- (unsigned long long)programType;
- (float)radius;
- (float)radiusScale;
- (float)rotation;
- (void)setAngle:(float)arg1;
- (void)setAnimatedFloat:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: unsigned long long
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setColorize;
- (void)setDistance:(float)arg1;
- (void)setDistanceScale:(float)arg1;
- (void)setFacing:(bool)arg1;
- (void)setHomeCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setOpacity:(float)arg1;
- (void)setRadiusScale:(float)arg1;
- (void)setRotation:(float)arg1;
- (void)setSpriteType:(unsigned long long)arg1;
- (void)setVisible:(bool)arg1;
- (unsigned long long)spriteType;
- (unsigned long long)type;
- (void)updateSunLocationForDate:(id)arg1;

@end
