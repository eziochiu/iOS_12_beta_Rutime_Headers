/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKColor : NSObject <NSCopying, NSSecureCoding> {
    double  _alpha;
    double  _blue;
    struct CGColor { } * _colorRef;
    double  _green;
    double  _red;
}

@property (nonatomic, readonly) struct CGColor { }*CGColor;
@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *string;

+ (id)colorFromString:(id)arg1;
+ (id)colorWithH:(double)arg1 S:(double)arg2 B:(double)arg3 A:(double)arg4;
+ (id)colorWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;
+ (bool)supportsSecureCoding;

- (struct CGColor { }*)CGColor;
- (struct CGColor { }*)_newCGColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (double)luminance;
- (id)string;

@end
