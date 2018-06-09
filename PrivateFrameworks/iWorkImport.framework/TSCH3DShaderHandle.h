/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderHandle : TSCH3DGLHandle {
    unsigned int  mType;
}

@property (nonatomic, readonly) unsigned int type;

+ (id)handleWithType:(unsigned int)arg1;

- (void)destroyResourcesInContext:(id)arg1;
- (id)initWithGLHandle:(unsigned int)arg1;
- (id)initWithType:(unsigned int)arg1;
- (unsigned int)type;

@end
