/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAceCalendarSystemSetting : SADomainObject

@property (nonatomic, copy) NSString *calendarType;

+ (id)aceCalendarSystemSetting;
+ (id)aceCalendarSystemSettingWithDictionary:(id)arg1 context:(id)arg2;

- (id)calendarType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCalendarType:(id)arg1;

@end
