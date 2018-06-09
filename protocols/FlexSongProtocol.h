/* made by EzioChiu.
 */

@protocol FlexSongProtocol

@required

- (NSString *)artistName;
- (UIImage *)artwork;
- (FMSongAsset *)assetWithID:(NSString *)arg1;
- (NSString *)audioEncoderPresetName;
- (bool)canPlay;
- (NSDictionary *)customOptions;
- (bool)hidden;
- (NSSet *)keywords;
- (long long)metadataVersion;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })naturalDuration;
- (bool)recalled;
- (FMSongRendition *)renditionForDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withOptions:(NSDictionary *)arg2 usePreRenderedFades:(bool)arg3 testingContext:(FlexTestingContext *)arg4;
- (long long)sampleRate;
- (NSString *)songName;
- (NSSet *)tagIDs;
- (NSString *)uid;
- (void)updateAssets:(NSArray *)arg1;

@end
