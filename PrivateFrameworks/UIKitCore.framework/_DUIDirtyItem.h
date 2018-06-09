/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _DUIDirtyItem : NSObject <NSSecureCoding> {
    unsigned long long  _index;
    unsigned long long  _reasons;
}

@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long reasons;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)index;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)reasons;
- (void)setIndex:(unsigned long long)arg1;
- (void)setReasons:(unsigned long long)arg1;

@end
