/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnitConverterReciprocal : NSUnitConverter <NSSecureCoding> {
    double  _reciprocalValue;
}

@property (readonly) double reciprocalValue;

+ (bool)supportsSecureCoding;

- (double)baseUnitValueFromValue:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReciprocalValue:(double)arg1;
- (bool)isEqual:(id)arg1;
- (double)reciprocalValue;
- (double)valueFromBaseUnitValue:(double)arg1;

@end
