/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarNotification : NSObject <EKIdentityProtocol> {
    NSURL * _URL;
    bool  _alerted;
    bool  _couldBeJunk;
    struct CGColor { } * _dotColor;
    NSString * _emailAddress;
    NSString * _firstName;
    bool  _hiddenFromNotificationCenter;
    NSString * _lastName;
    NSString * _name;
    EKObjectID * _objectID;
    NSString * _phoneNumber;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) bool alerted;
@property (nonatomic) bool couldBeJunk;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CGColor { }*dotColor;
@property (nonatomic, retain) NSString *emailAddress;
@property (nonatomic, retain) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hiddenFromNotificationCenter;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) bool needsAlert;
@property (nonatomic, retain) EKObjectID *objectID;
@property (nonatomic, retain) NSString *phoneNumber;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long type;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (void).cxx_destruct;
- (id)URL;
- (bool)alerted;
- (bool)couldBeJunk;
- (void)dealloc;
- (struct CGColor { }*)dotColor;
- (id)emailAddress;
- (id)firstName;
- (bool)hiddenFromNotificationCenter;
- (id)initWithType:(long long)arg1;
- (id)lastName;
- (id)name;
- (bool)needsAlert;
- (id)objectID;
- (id)phoneNumber;
- (void)setAlerted:(bool)arg1;
- (void)setCouldBeJunk:(bool)arg1;
- (void)setDotColor:(struct CGColor { }*)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setHiddenFromNotificationCenter:(bool)arg1;
- (void)setLastName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setURL:(id)arg1;
- (id)title;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)_identityStringWithOptions:(unsigned long long)arg1;
- (id)allDescriptionStringsWithOptions:(unsigned long long)arg1;
- (id)importantDescriptionStringWithOptions:(unsigned long long)arg1;
- (id)senderStringWithOptions:(unsigned long long)arg1;
- (bool)supportsDisplay;
- (id)titleStringWithOptions:(unsigned long long)arg1;

@end
