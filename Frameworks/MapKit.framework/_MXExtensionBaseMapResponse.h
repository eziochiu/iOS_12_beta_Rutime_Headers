/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MXExtensionBaseMapResponse : NSObject <NSSecureCoding> {
    NSSet * _features;
    NSSet * _namedImages;
}

@property (nonatomic, copy) NSSet *features;
@property (nonatomic, copy) NSSet *namedImages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)features;
- (id)initWithCoder:(id)arg1;
- (id)namedImages;
- (void)setFeatures:(id)arg1;
- (void)setNamedImages:(id)arg1;

@end
