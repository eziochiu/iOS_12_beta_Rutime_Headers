/* made by EzioChiu.
 */

@protocol PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate <NSObject>

@required

- (void)operation:(PHAFaceCropProcessingJobProcessFaceCropsOperation *)arg1 didProcessFaceCrop:(PVFaceCrop *)arg2 withError:(NSError *)arg3;

@end
