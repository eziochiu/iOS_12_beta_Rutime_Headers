/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPMediaEntity : SADomainObject

@property (nonatomic, retain) SACalendar *dateAdded;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, retain) SAMPPlaybackInfo *playbackInfo;
@property (nonatomic, copy) NSString *rawPlaybackInfo;
@property (nonatomic, copy) NSString *releaseDate;
@property (nonatomic, copy) NSString *sortTitle;
@property (nonatomic, copy) NSString *storeId;
@property (nonatomic, copy) NSString *title;

+ (id)mediaEntity;
+ (id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)dateAdded;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mediaType;
- (id)playbackInfo;
- (id)rawPlaybackInfo;
- (id)releaseDate;
- (void)setDateAdded:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setPlaybackInfo:(id)arg1;
- (void)setRawPlaybackInfo:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setSortTitle:(id)arg1;
- (void)setStoreId:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sortTitle;
- (id)storeId;
- (id)title;

@end
