/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLToneStoreDownload : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _accessQueueLabel;
    NSString * _albumTitle;
    NSString * _artistName;
    float  _downloadProgress;
    double  _duration;
    NSString * _genreName;
    NSString * _identifier;
    bool  _isRingtone;
    NSString * _name;
    unsigned long long  _storeItemIdentifier;
    NSString * _toneIdentifier;
}

@property (setter=_setAlbumTitle:, nonatomic, copy) NSString *albumTitle;
@property (setter=_setArtistName:, nonatomic, copy) NSString *artistName;
@property (setter=_setDownloadProgress:, nonatomic) float downloadProgress;
@property (setter=_setDuration:, nonatomic) double duration;
@property (setter=_setGenreName:, nonatomic, copy) NSString *genreName;
@property (nonatomic, readonly) NSString *identifier;
@property (setter=_setName:, nonatomic, copy) NSString *name;
@property (getter=isRingtone, setter=_setRingtone:, nonatomic) bool ringtone;
@property (setter=_setStoreItemIdentifier:, nonatomic) unsigned long long storeItemIdentifier;
@property (setter=_setToneIdentifier:, nonatomic, copy) NSString *toneIdentifier;

- (void).cxx_destruct;
- (void)_setAlbumTitle:(id)arg1;
- (void)_setArtistName:(id)arg1;
- (void)_setDownloadProgress:(float)arg1;
- (void)_setDuration:(double)arg1;
- (void)_setGenreName:(id)arg1;
- (void)_setName:(id)arg1;
- (void)_setRingtone:(bool)arg1;
- (void)_setStoreItemIdentifier:(unsigned long long)arg1;
- (void)_setToneIdentifier:(id)arg1;
- (id)albumTitle;
- (id)artistName;
- (void)dealloc;
- (id)description;
- (float)downloadProgress;
- (double)duration;
- (id)genreName;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isRingtone;
- (id)name;
- (unsigned long long)storeItemIdentifier;
- (id)toneIdentifier;

@end
