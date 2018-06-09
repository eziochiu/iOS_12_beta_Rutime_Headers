/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationMatchLibraryTrackMetadata : RadioStationMatchMetadata {
    NSString * _albumArtistName;
    NSString * _albumName;
    NSString * _artistName;
    NSNumber * _compilation;
    NSString * _composerName;
    NSString * _copyright;
    NSNumber * _discCount;
    NSNumber * _discNumber;
    NSNumber * _duration;
    NSNumber * _fileSize;
    NSString * _genreName;
    NSString * _kind;
    NSString * _name;
    NSNumber * _storeAdamID;
    NSNumber * _storeCloudID;
    NSNumber * _trackCount;
    NSNumber * _trackNumber;
    NSNumber * _year;
}

@property (nonatomic, copy) NSString *albumArtistName;
@property (nonatomic, copy) NSString *albumName;
@property (nonatomic, copy) NSString *artistName;
@property (getter=isCompilation, nonatomic, copy) NSNumber *compilation;
@property (nonatomic, copy) NSString *composerName;
@property (nonatomic, copy) NSString *copyright;
@property (nonatomic, copy) NSNumber *discCount;
@property (nonatomic, copy) NSNumber *discNumber;
@property (nonatomic, copy) NSNumber *duration;
@property (nonatomic, copy) NSNumber *fileSize;
@property (nonatomic, copy) NSString *genreName;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *storeAdamID;
@property (nonatomic, copy) NSNumber *storeCloudID;
@property (nonatomic, copy) NSNumber *trackCount;
@property (nonatomic, copy) NSNumber *trackNumber;
@property (nonatomic, copy) NSNumber *year;

+ (id)metadataKey;

- (void).cxx_destruct;
- (id)albumArtistName;
- (id)albumName;
- (id)artistName;
- (id)composerName;
- (id)copyMetadataDictionary;
- (id)copyright;
- (id)discCount;
- (id)discNumber;
- (id)duration;
- (id)fileSize;
- (id)genreName;
- (id)isCompilation;
- (id)kind;
- (id)name;
- (void)setAlbumArtistName:(id)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setCompilation:(id)arg1;
- (void)setComposerName:(id)arg1;
- (void)setCopyright:(id)arg1;
- (void)setDiscCount:(id)arg1;
- (void)setDiscNumber:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setGenreName:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStoreAdamID:(id)arg1;
- (void)setStoreCloudID:(id)arg1;
- (void)setTrackCount:(id)arg1;
- (void)setTrackNumber:(id)arg1;
- (void)setYear:(id)arg1;
- (id)storeAdamID;
- (id)storeCloudID;
- (id)trackCount;
- (id)trackNumber;
- (id)year;

@end
