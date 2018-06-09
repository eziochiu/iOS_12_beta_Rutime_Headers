/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXSetTTYTypeCallAction : CXCallAction {
    long long  _ttyType;
}

@property (nonatomic) long long ttyType;

+ (bool)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 ttyType:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setTtyType:(long long)arg1;
- (long long)ttyType;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
