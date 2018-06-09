/* made by EzioChiu.
 */

@protocol MDLTransformComponent <MDLComponent>

@required

- (NSArray *)keyTimes;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })matrix;
- (double)maximumTime;
- (double)minimumTime;
- (bool)resetsTransform;
- (void)setMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setResetsTransform:(bool)arg1;

@optional

+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })globalTransformWithObjectatTime;

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })localTransformAtTime;
- (void)setLocalTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setLocalTransform:(void *)arg1 forTime:(void *)arg2; // needs 2 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }

@end
