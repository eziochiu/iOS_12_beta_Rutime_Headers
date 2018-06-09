/* made by EzioChiu.
 */

@protocol FigSmartcamClassifier <NSObject>

@required

- (bool)allocateResources;
- (struct { int x1; int x2; int x3; })classifierVersion;
- (bool)classify:(struct __CVBuffer { }*)arg1 confidences:(float*)arg2;
- (bool)releaseResources;

@end
