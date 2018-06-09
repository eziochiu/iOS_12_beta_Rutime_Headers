/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUConversationMember : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _handles;
}

@property (nonatomic, readonly, copy) NSSet *handles;
@property (nonatomic, readonly, copy) NSArray *idsDestinations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handles;
- (unsigned long long)hash;
- (id)idsDestinations;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithDestinations:(id)arg1;
- (id)initWithHandles:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMember:(id)arg1;
- (bool)representsSameMemberAs:(id)arg1;

@end
