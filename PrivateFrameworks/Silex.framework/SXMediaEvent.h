/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMediaEvent : SXAnalyticsEvent {
    unsigned long long  _galleryType;
    NSString * _mediaId;
    unsigned long long  _mediaType;
    NSDictionary * _metaData;
    unsigned long long  _videoType;
}

@property (nonatomic) unsigned long long galleryType;
@property (nonatomic, retain) NSString *mediaId;
@property (nonatomic) unsigned long long mediaType;
@property (nonatomic, retain) NSDictionary *metaData;
@property (nonatomic) unsigned long long videoType;

- (void).cxx_destruct;
- (unsigned long long)galleryType;
- (id)mediaId;
- (unsigned long long)mediaType;
- (id)metaData;
- (void)setGalleryType:(unsigned long long)arg1;
- (void)setMediaId:(id)arg1;
- (void)setMediaType:(unsigned long long)arg1;
- (void)setMetaData:(id)arg1;
- (void)setVideoType:(unsigned long long)arg1;
- (unsigned long long)videoType;

@end
