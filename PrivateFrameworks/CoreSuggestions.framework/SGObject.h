/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGObject : NSObject <NSCopying, NSSecureCoding> {
    SGOrigin * _origin;
    SGRecordId * _recordId;
}

@property (nonatomic, readonly) SGOrigin *origin;
@property (nonatomic, readonly) SGRecordId *recordId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(id)arg1 origin:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSuggestion:(id)arg1;
- (id)origin;
- (id)recordId;

@end
