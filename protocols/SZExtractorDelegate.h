/* made by EzioChiu.
 */

@protocol SZExtractorDelegate <NSObject>

@optional

- (void)extractionCompleteAtArchivePath:(NSString *)arg1;
- (void)extractionEnteredPassThroughMode;
- (void)setExtractionProgress:(double)arg1;

@end
