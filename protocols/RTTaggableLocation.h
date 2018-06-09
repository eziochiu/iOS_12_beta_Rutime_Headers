/* made by EzioChiu.
 */

@protocol RTTaggableLocation <NSObject>

@optional

- (void)tagWithLocationOfInterest:(RTLocationOfInterest *)arg1;
- (void)tagWithMicroLocation:(RTMicroLocation *)arg1;
- (bool)taggedWithLocationOfInterest;
- (bool)taggedWithMicroLocation;

@end
