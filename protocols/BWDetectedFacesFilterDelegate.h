/* made by EzioChiu.
 */

@protocol BWDetectedFacesFilterDelegate <NSObject>

@required

- (void)filterDetectedFacesInSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end
