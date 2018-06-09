/* made by EzioChiu.
 */

@protocol FlexSongAssetProviderProtocol

@required

- (NSString *)audioFileExtension;
- (void)setAudioFileExtension:(NSString *)arg1;
- (NSURL *)urlToAudioContainerForSegmentType:(unsigned long long)arg1;
- (NSURL *)urlToAudioForSegment:(FlexSegment *)arg1;
- (NSURL *)urlToRoot;

@end
