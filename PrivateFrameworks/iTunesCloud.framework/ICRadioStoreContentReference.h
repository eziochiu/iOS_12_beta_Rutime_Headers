/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioStoreContentReference : ICRadioContentReference <NSCopying, NSSecureCoding> {
    NSNumber * _storeIdentifier;
}

@property (nonatomic, copy) NSNumber *storeIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreIdentifier:(id)arg1;
- (id)matchDictionary;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeIdentifier;

@end
