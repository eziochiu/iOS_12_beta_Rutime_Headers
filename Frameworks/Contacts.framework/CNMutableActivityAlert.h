/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMutableActivityAlert : CNActivityAlert

@property (nonatomic) bool ignoreMute;
@property (nonatomic, copy) NSString *sound;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, copy) NSString *vibration;

- (id)freeze;

@end
