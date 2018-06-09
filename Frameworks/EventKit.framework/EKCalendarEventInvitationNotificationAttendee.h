/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarEventInvitationNotificationAttendee : NSObject <EKIdentityProtocol> {
    NSURL * _URL;
    NSString * _comment;
    bool  _commentChanged;
    NSString * _emailAddress;
    NSString * _firstName;
    bool  _isCurrentUser;
    NSString * _lastName;
    NSString * _name;
    long long  _participantStatus;
    NSString * _phoneNumber;
    NSDate * _proposedStartDate;
    bool  _proposedStartDateChanged;
    bool  _proposedStartDateDeclined;
    bool  _statusChanged;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *comment;
@property (nonatomic, readonly) bool commentChanged;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCurrentUser;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long participantStatus;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSDate *proposedStartDate;
@property (nonatomic, readonly) bool proposedStartDateChanged;
@property (nonatomic, readonly) bool proposedStartDateDeclined;
@property (nonatomic, readonly) bool statusChanged;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (id)comment;
- (bool)commentChanged;
- (id)emailAddress;
- (id)firstName;
- (id)initWithParticipant:(id)arg1 forEvent:(id)arg2;
- (bool)isCurrentUser;
- (id)lastName;
- (id)name;
- (long long)participantStatus;
- (id)phoneNumber;
- (id)proposedStartDate;
- (bool)proposedStartDateChanged;
- (bool)proposedStartDateDeclined;
- (bool)statusChanged;

@end
