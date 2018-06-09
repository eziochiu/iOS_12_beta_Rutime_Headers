/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKOrganizer : EKParticipant

+ (Class)frozenClass;
+ (id)organizerWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 address:(id)arg4 isCurrentUser:(bool)arg5;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 address:(id)arg4 isCurrentUser:(bool)arg5;
- (bool)isCurrentUser;
- (id)owner;
- (void)setCurrentUser:(bool)arg1;

@end
