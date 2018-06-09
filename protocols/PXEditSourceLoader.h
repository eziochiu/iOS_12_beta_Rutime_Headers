/* made by EzioChiu.
 */

@protocol PXEditSourceLoader <NSObject>

@required

- (long long)baseVersion;
- (void)beginLoading;
- (NSString *)contentIdentifier;
- (PLPhotoEditModel *)editModel;
- (PLEditSource *)editSource;
- (NSError *)error;
- (NSString *)livePhotoPairingIdentifier;
- (NSNumber *)loadDuration;
- (NSProgress *)progress;

@end
