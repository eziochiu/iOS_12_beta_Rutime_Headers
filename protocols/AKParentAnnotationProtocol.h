/* made by EzioChiu.
 */

@protocol AKParentAnnotationProtocol <NSObject>

@required

- (AKAnnotation *)childAnnotation;
- (void)setChildAnnotation:(AKAnnotation *)arg1;

@end
