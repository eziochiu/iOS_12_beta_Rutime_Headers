/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCMutableNotificationContent : NCNotificationContent

@property (nonatomic, retain) UIImage *attachmentImage;
@property (nonatomic, retain) UIImage *carPlayIcon;
@property (nonatomic, copy) NSString *categorySummaryFormat;
@property (nonatomic, retain) NSDate *date;
@property (getter=isDateAllDay, nonatomic) bool dateAllDay;
@property (nonatomic, copy) NSString *header;
@property (nonatomic, copy) NSString *hiddenPreviewsBodyPlaceholder;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSArray *icons;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *summaryArgument;
@property (nonatomic) unsigned long long summaryArgumentCount;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAttachmentImage:(id)arg1;
- (void)setCarPlayIcon:(id)arg1;
- (void)setCategorySummaryFormat:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateAllDay:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setHiddenPreviewsBodyPlaceholder:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSummaryArgument:(id)arg1;
- (void)setSummaryArgumentCount:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;

@end
