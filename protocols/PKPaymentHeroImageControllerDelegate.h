/* made by EzioChiu.
 */

@protocol PKPaymentHeroImageControllerDelegate <NSObject>

@required

- (void)heroImageController:(PKPaymentHeroImageController *)arg1 didFinishDownloadingImageData:(NSData *)arg2 forNetwork:(NSNumber *)arg3 error:(NSError *)arg4;

@end
