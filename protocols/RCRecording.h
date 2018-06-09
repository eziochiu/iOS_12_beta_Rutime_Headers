/* made by EzioChiu.
 */

@protocol RCRecording <NSFetchRequestResult, UIActivityItemSource>

@required

- (NSURL *)URIRepresentation;
- (AVAsset *)avAsset;
- (NSString *)customLabel;
- (NSDate *)date;
- (double)duration;
- (NSDate *)evictionDate;
- (long long)iTunesPersistentID;
- (bool)isContentBeingModified;
- (CLLocation *)location;
- (NSString *)path;
- (bool)pendingRestore;
- (bool)playable;
- (bool)synced;
- (NSString *)title;
- (NSString *)titleDisallowingEmptyString;
- (NSString *)uniqueID;
- (NSURL *)url;

@end
