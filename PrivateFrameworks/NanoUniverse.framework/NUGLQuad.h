/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
 */

@interface NUGLQuad : CLKUIQuad {
    double  _baseTime;
    unsigned int  _isPrepared;
    NUScene * _scene;
    unsigned int  _vertexArray;
}

@property (nonatomic, retain) NUScene *scene;

- (void).cxx_destruct;
- (void)encodeGLforSize:(struct CLKUIQuadSize { int x1; int x2; })arg1;
- (void)prepare;
- (id)scene;
- (void)setScene:(id)arg1;

@end
