/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPolygonRenderer : MKOverlayPathRenderer

@property (nonatomic, readonly) MKPolygon *polygon;

- (void)createPath;
- (void)fillPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithPolygon:(id)arg1;
- (id)polygon;

@end
