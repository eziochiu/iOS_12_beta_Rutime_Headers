/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFCalendarComposeRecipient : MFComposeRecipient {
    NSString * _calAttendeeName;
    id  _participant;
}

@property (nonatomic, retain) id participant;

- (void)dealloc;
- (id)displayString;
- (unsigned long long)hash;
- (id)initWithComposeRecipient:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)participant;
- (void)setCalAttendeeName:(id)arg1;
- (void)setParticipant:(id)arg1;

@end
