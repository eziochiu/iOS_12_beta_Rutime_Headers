/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFFence : NSObject <NSCopying, NSSecureCoding> {
    bool  _active;
    NSString * _createdByIdentifier;
    NSArray * _followerIds;
    NSString * _friendIdentifier;
    bool  _fromMe;
    NSString * _identifier;
    NSString * _label;
    CLLocation * _location;
    unsigned long long  _locationType;
    FMFPlacemark * _placemark;
    NSArray * _recipients;
    bool  _recurring;
    NSDate * _timestamp;
    NSString * _trigger;
    NSString * _type;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) NSString *createdByIdentifier;
@property (nonatomic, retain) NSArray *followerIds;
@property (nonatomic, retain) NSString *friendIdentifier;
@property (getter=isFromMe, nonatomic) bool fromMe;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) unsigned long long locationType;
@property (nonatomic, retain) FMFPlacemark *placemark;
@property (nonatomic, retain) NSArray *recipients;
@property (getter=isRecurring, nonatomic) bool recurring;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) NSString *trigger;
@property (nonatomic, retain) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdByIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)followerIds;
- (id)friendIdentifier;
- (id)handlesForArray:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRecipient:(id)arg1 location:(id)arg2 placemark:(id)arg3 label:(id)arg4 trigger:(id)arg5 type:(id)arg6 locationType:(unsigned long long)arg7 recurring:(bool)arg8;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (bool)isRecurring;
- (id)label;
- (id)location;
- (id)locationForDictionary:(id)arg1;
- (unsigned long long)locationType;
- (id)placemark;
- (id)recipients;
- (void)setActive:(bool)arg1;
- (void)setCreatedByIdentifier:(id)arg1;
- (void)setFollowerIds:(id)arg1;
- (void)setFriendIdentifier:(id)arg1;
- (void)setFromMe:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationType:(unsigned long long)arg1;
- (void)setPlacemark:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setRecurring:(bool)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTrigger:(id)arg1;
- (void)setType:(id)arg1;
- (id)timestamp;
- (id)trigger;
- (id)type;

@end
