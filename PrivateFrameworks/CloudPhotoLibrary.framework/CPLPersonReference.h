/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPersonReference : NSObject <CPLReference, NSCopying, NSSecureCoding> {
    NSDictionary * _extraProperties;
    NSString * _personIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *extraProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *personIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extraProperties;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCPLArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)personIdentifier;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)serializedString;
- (void)setExtraProperties:(id)arg1;
- (void)setPersonIdentifier:(id)arg1;

@end
