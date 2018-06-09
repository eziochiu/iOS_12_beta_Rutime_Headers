/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTransformGeometryRenderProcessor : TSCH3DRetargetRenderProcessor {
    TSCH3DDataBuffer * mBuffer;
}

@property (nonatomic, readonly) TSCH3DDataBuffer *buffer;

+ (id)processorWithOriginal:(id)arg1;

- (id)buffer;
- (void)dealloc;
- (void)geometry:(id)arg1;
- (id)init;
- (id)initWithOriginal:(id)arg1;
- (id)matrix;
- (void)setOriginal:(id)arg1;

@end
