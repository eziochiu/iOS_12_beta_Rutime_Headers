/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTileDefinition : NSObject <NSCopying, NSSecureCoding> {
    unsigned short  _currentFrameIndex;
    float  _currentFrameTime;
    bool  _frameDidChange;
    double  _lastTargetTime;
    NSString * _name;
    bool  _nextFrameAffectsVertexBuffer;
    NSMutableArray * _normals;
    unsigned long long  _orientation;
    SKTileGroupRule * _parentRule;
    unsigned long long  _placementWeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSMutableArray * _textures;
    double  _timePerFrame;
    NSString * _uid;
    NSMutableDictionary * _userData;
}

@property (nonatomic) unsigned short currentFrameIndex;
@property (nonatomic) float currentFrameTime;
@property (nonatomic) bool flipHorizontally;
@property (nonatomic) bool flipVertically;
@property (nonatomic) bool frameDidChange;
@property (nonatomic) double lastTargetTime;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool nextFrameAffectsVertexBuffer;
@property (nonatomic, copy) NSArray *normalTextures;
@property (nonatomic) SKTileGroupRule *parentRule;
@property (nonatomic) unsigned long long placementWeight;
@property (nonatomic) unsigned long long rotation;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, copy) NSArray *textures;
@property (nonatomic) double timePerFrame;
@property (nonatomic, retain) NSString *uid;
@property (nonatomic, retain) NSMutableDictionary *userData;

+ (bool)supportsSecureCoding;
+ (id)tileDefinitionWithTexture:(id)arg1;
+ (id)tileDefinitionWithTexture:(id)arg1 normalTexture:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
+ (id)tileDefinitionWithTexture:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)tileDefinitionWithTextures:(id)arg1 normalTextures:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 timePerFrame:(double)arg4;
+ (id)tileDefinitionWithTextures:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 timePerFrame:(double)arg3;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned short)currentFrameIndex;
- (float)currentFrameTime;
- (void)encodeWithCoder:(id)arg1;
- (bool)flipHorizontally;
- (bool)flipVertically;
- (bool)frameDidChange;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTexture:(id)arg1;
- (id)initWithTexture:(id)arg1 normalTexture:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithTexture:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithTextures:(id)arg1 normalTextures:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 timePerFrame:(double)arg4;
- (id)initWithTextures:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 timePerFrame:(double)arg3;
- (bool)isEqualToNode:(id)arg1;
- (double)lastTargetTime;
- (id)name;
- (bool)nextFrameAffectsVertexBuffer;
- (id)normalTextures;
- (id)parentRule;
- (unsigned long long)placementWeight;
- (unsigned long long)rotation;
- (void)setCurrentFrameIndex:(unsigned short)arg1;
- (void)setCurrentFrameTime:(float)arg1;
- (void)setDataWithTexture:(id)arg1 normalTexture:(id)arg2 tileName:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4;
- (void)setDataWithTextures:(id)arg1 normalTextures:(id)arg2 timePerFrame:(double)arg3 tileName:(id)arg4 size:(struct CGSize { double x1; double x2; })arg5;
- (void)setFlipHorizontally:(bool)arg1;
- (void)setFlipVertically:(bool)arg1;
- (void)setFrameDidChange:(bool)arg1;
- (void)setLastTargetTime:(double)arg1;
- (void)setName:(id)arg1;
- (void)setNextFrameAffectsVertexBuffer:(bool)arg1;
- (void)setNormalTextures:(id)arg1;
- (void)setParentRule:(id)arg1;
- (void)setPlacementWeight:(unsigned long long)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextures:(id)arg1;
- (void)setTimePerFrame:(double)arg1;
- (void)setUid:(id)arg1;
- (void)setUserData:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)textures;
- (double)timePerFrame;
- (id)uid;
- (id)userData;

@end
