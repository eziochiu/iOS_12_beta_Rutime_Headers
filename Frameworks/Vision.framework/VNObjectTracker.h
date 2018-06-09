/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNObjectTracker : VNTracker

+ (Class)trackerObservationClass;

- (id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id*)arg3;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;

@end
