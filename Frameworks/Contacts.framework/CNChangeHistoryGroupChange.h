/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangeHistoryGroupChange : NSObject <NSSecureCoding> {
    CNChangeHistoryAnchor * _changeAnchor;
    long long  _changeType;
    CNGroup * _group;
    NSString * _groupIdentifier;
}

@property (nonatomic, retain) CNChangeHistoryAnchor *changeAnchor;
@property (nonatomic) long long changeType;
@property (nonatomic, retain) CNGroup *group;
@property (nonatomic, readonly) NSString *groupIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)changeAnchor;
- (long long)changeType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3;
- (void)setChangeAnchor:(id)arg1;
- (void)setChangeType:(long long)arg1;
- (void)setGroup:(id)arg1;

@end
