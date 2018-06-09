/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCircleRenderer : MKOverlayPathRenderer

@property (nonatomic, readonly) MKCircle *circle;

- (id)circle;
- (void)createPath;
- (id)initWithCircle:(id)arg1;

@end
