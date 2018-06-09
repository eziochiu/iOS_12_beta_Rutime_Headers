/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSpatialEventTrigger : NSObject <NSCopying, NSSecureCoding> {
    long long  _event;
    CLPlacemark * _placemark;
}

@property (nonatomic, readonly) long long event;
@property (nonatomic, readonly, copy) CLPlacemark *placemark;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)event;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlacemark:(id)arg1 event:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)placemark;

@end
