/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPlace : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _placeDescriptors;
    NSString * _placeSubType;
    NSString * _placeType;
}

@property (nonatomic, readonly, copy) NSArray *placeDescriptors;
@property (nonatomic, readonly, copy) NSString *placeSubType;
@property (nonatomic, readonly, copy) NSString *placeType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaceType:(id)arg1 placeSubType:(id)arg2 placeDescriptors:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)placeDescriptors;
- (id)placeSubType;
- (id)placeType;

@end
