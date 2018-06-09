/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelObjectMediaItem : MPNondurableMediaItem {
    MPModelObject * _modelObject;
    NSDictionary * _propertyValues;
}

@property (nonatomic, readonly) MPModelObject *modelObject;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithPropertyValues:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modelObject;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end
