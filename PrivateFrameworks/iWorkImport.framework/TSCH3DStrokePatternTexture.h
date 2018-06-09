/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DStrokePatternTexture : TSCH3DResource {
    TSDStroke * mStroke;
}

@property (nonatomic, readonly) TSDStroke *stroke;

- (void)dealloc;
- (id)get;
- (id)initWithStroke:(id)arg1;
- (id)stroke;

@end
