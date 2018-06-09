/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLHandle : TSCH3DResourceHandle {
    unsigned int  mValue;
}

@property (nonatomic, readonly) unsigned int value;

+ (id)handleWithGLHandle:(unsigned int)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithGLHandle:(unsigned int)arg1;
- (void)setValue:(unsigned int)arg1;
- (unsigned int)value;

@end
