/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UASharedPasteboardItemInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _types;
}

@property (copy) NSDictionary *types;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTypes:(id)arg1;
- (id)types;

@end
