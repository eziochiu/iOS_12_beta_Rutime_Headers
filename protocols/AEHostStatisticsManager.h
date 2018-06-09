/* made by EzioChiu.
 */

@protocol AEHostStatisticsManager <NSObject>

@required

- (void)reportPresentationOfFullScreenCamera;
- (void)reportPresentationOfFullScreenPhotoLibrary;
- (void)reportSelectionOfPhotoGridIndex:(unsigned long long)arg1;

@end
