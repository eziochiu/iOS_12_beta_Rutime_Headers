/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDimension : NSUnit <NSSecureCoding> {
    NSUnitConverter * _converter;
    unsigned long long  _reserved;
}

@property (readonly, copy) NSUnitConverter *converter;
@property (readonly) unsigned long long specifier;

+ (id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2;
+ (id)baseUnit;
+ (bool)supportsSecureCoding;

- (id)converter;
- (void)dealloc;
- (id)dimension;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpecifier:(unsigned long long)arg1 symbol:(id)arg2 converter:(id)arg3;
- (id)initWithSymbol:(id)arg1 converter:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)specifier;

@end
