/* made by EzioChiu.
 */

@protocol PVImageDelegate

@required

- (struct CGImage { }*)imageForURL:(NSURL *)arg1 renderingIntent:(int)arg2;
- (bool)isImageValid:(NSURL *)arg1 renderingIntent:(int)arg2 size:(struct CGSize { double x1; double x2; }*)arg3;

@end
