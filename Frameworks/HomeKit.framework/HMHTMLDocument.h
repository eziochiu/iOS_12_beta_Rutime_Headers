/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHTMLDocument : NSObject <NSCopying, NSSecureCoding> {
    NSString * _stringValue;
}

@property (readonly, copy) NSAttributedString *attributedString;
@property (readonly, copy) NSString *stringValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)stringValue;
- (bool)validateAndReturnError:(id*)arg1;

@end
