/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INGeographicalFeature : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _geographicalFeatureDescriptors;
    NSString * _geographicalFeatureType;
}

@property (nonatomic, readonly, copy) NSArray *geographicalFeatureDescriptors;
@property (nonatomic, readonly, copy) NSString *geographicalFeatureType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)geographicalFeatureDescriptors;
- (id)geographicalFeatureType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeographicalFeatureType:(id)arg1 geographicalFeatureDescriptors:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
