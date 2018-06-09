/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLConfiguration : NSObject <NSCopying> {
    NSArray * _allowedExternalServices;
    bool  _allowsCamera;
    bool  _allowsMicrophone;
    NSArray * _audioCategoryNames;
    SKUIMediaSocialAuthor * _authorForActiveAccount;
    NSURL * _baseTagLookupURL;
    MSCLStoreItem * _item;
    long long  _maximumNumberOfAttachments;
    double  _maximumSoundBiteDuration;
    NSArray * _potentalAuthors;
    NSArray * _suggestedTags;
}

@property (nonatomic, copy) NSArray *allowedExternalServices;
@property (nonatomic) bool allowsCamera;
@property (nonatomic) bool allowsMicrophone;
@property (nonatomic, copy) NSArray *audioCategoryNames;
@property (nonatomic, copy) SKUIMediaSocialAuthor *authorForActiveAccount;
@property (nonatomic, copy) MSCLStoreItem *item;
@property (nonatomic) long long maximumNumberOfAttachments;
@property (nonatomic) double maximumSoundBiteDuration;
@property (nonatomic, copy) NSArray *potentalAuthors;
@property (nonatomic, copy) NSArray *suggestedTags;

- (void).cxx_destruct;
- (id)allowedExternalServices;
- (bool)allowsCamera;
- (bool)allowsMicrophone;
- (id)audioCategoryNames;
- (id)authorForActiveAccount;
- (id)authorsForSharing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)item;
- (long long)maximumNumberOfAttachments;
- (double)maximumSoundBiteDuration;
- (id)potentalAuthors;
- (void)setAllowedExternalServices:(id)arg1;
- (void)setAllowsCamera:(bool)arg1;
- (void)setAllowsMicrophone:(bool)arg1;
- (void)setAudioCategoryNames:(id)arg1;
- (void)setAuthorForActiveAccount:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setMaximumNumberOfAttachments:(long long)arg1;
- (void)setMaximumSoundBiteDuration:(double)arg1;
- (void)setPotentalAuthors:(id)arg1;
- (void)setSuggestedTags:(id)arg1;
- (void)setTagLookupBaseURL:(id)arg1;
- (id)suggestedTags;
- (id)tagLookupURLWithTag:(id)arg1;

@end
