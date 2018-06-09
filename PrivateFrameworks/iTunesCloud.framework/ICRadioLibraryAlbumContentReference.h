/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioLibraryAlbumContentReference : ICRadioContentReference <NSCopying, NSSecureCoding> {
    NSString * _albumName;
    NSNumber * _representativeCloudIdentifier;
    NSNumber * _storeIdentifier;
}

@property (nonatomic, copy) NSString *albumName;
@property (nonatomic, copy) NSNumber *representativeCloudIdentifier;
@property (nonatomic, copy) NSNumber *storeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)albumName;
- (long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)matchDictionary;
- (id)representativeCloudIdentifier;
- (void)setAlbumName:(id)arg1;
- (void)setRepresentativeCloudIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeIdentifier;

@end
