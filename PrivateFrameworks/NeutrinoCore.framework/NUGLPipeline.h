/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGLPipeline : NUGLObject {
    NSDictionary * _attributes;
    NSError * _buildError;
    long long  _buildStatus;
    NUGLContext * _currentContext;
    NSMutableSet * _dirtyKeys;
    NSArray * _orderedAttributes;
    NSOrderedSet * _samplers;
    NSArray * _stages;
    NSMutableDictionary * _uniformSamplers;
    NSMutableDictionary * _uniformValues;
    NSDictionary * _uniforms;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSArray *orderedAttributes;
@property (nonatomic, readonly) NSOrderedSet *samplers;
@property (nonatomic, readonly) NSArray *stages;
@property (nonatomic, readonly) NSDictionary *uniforms;

- (void).cxx_destruct;
- (void)_beginDrawing:(id)arg1;
- (void)_build:(id)arg1;
- (void)_drawVertexArray:(id)arg1 block:(id /* block */)arg2;
- (void)_endDrawing:(id)arg1;
- (bool)_validate:(id)arg1;
- (id)attributes;
- (void)begin:(id)arg1;
- (bool)build:(id)arg1 error:(out id*)arg2;
- (void)delete;
- (void)drawVertexArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 mode:(long long)arg3;
- (void)end:(id)arg1;
- (void)generate:(id)arg1;
- (id)init;
- (id)initWithStages:(id)arg1;
- (id)orderedAttributes;
- (void)run:(id)arg1 block:(id /* block */)arg2;
- (id)samplerForUniform:(id)arg1;
- (id)samplers;
- (void)setSampler:(id)arg1 forUniform:(id)arg2;
- (void)setValue:(id)arg1 forUniform:(id)arg2;
- (id)stages;
- (id)uniforms;
- (id)valueForUniform:(id)arg1;

@end
