/* made by EzioChiu.
 */

@protocol VKTrackableAnnotationPresentation <NSObject>

@required

- (struct { double x1; double x2; })presentationCoordinate;
- (void)setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setTracking:(bool)arg1;
- (bool)tracking;

@end
