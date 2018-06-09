/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _Geometry : NSObject {
    unsigned int  _vao;
    unsigned int  _vbo;
}

@property (nonatomic) unsigned int vao;
@property (nonatomic) unsigned int vbo;

- (void)createGeometry:(const float*)arg1 count:(unsigned long long)arg2;
- (void)createGeometry:(const float*)arg1 count:(unsigned long long)arg2 useWeights:(bool)arg3;
- (void)setVao:(unsigned int)arg1;
- (void)setVbo:(unsigned int)arg1;
- (unsigned int)vao;
- (unsigned int)vbo;

@end
