/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationContent : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    UIImage * _attachmentImage;
    UIImage * _carPlayIcon;
    NSString * _categorySummaryFormat;
    NSDate * _date;
    bool  _dateAllDay;
    NSString * _header;
    NSString * _hiddenPreviewsBodyPlaceholder;
    NSArray * _icons;
    NSString * _message;
    NSString * _subtitle;
    NSString * _summaryArgument;
    unsigned long long  _summaryArgumentCount;
    NSTimeZone * _timeZone;
    NSString * _title;
    NSString * _topic;
}

@property (nonatomic, readonly) UIImage *attachmentImage;
@property (nonatomic, readonly) UIImage *carPlayIcon;
@property (nonatomic, readonly, copy) NSString *categorySummaryFormat;
@property (nonatomic, readonly) NSDate *date;
@property (getter=isDateAllDay, nonatomic, readonly) bool dateAllDay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *header;
@property (nonatomic, readonly, copy) NSString *hiddenPreviewsBodyPlaceholder;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) NSArray *icons;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *summaryArgument;
@property (nonatomic, readonly) unsigned long long summaryArgumentCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *topic;

- (void).cxx_destruct;
- (id)attachmentImage;
- (id)carPlayIcon;
- (id)categorySummaryFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)header;
- (id)hiddenPreviewsBodyPlaceholder;
- (id)icon;
- (id)icons;
- (id)initWithNotificationContent:(id)arg1;
- (bool)isDateAllDay;
- (bool)isEqual:(id)arg1;
- (id)message;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)subtitle;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)summaryArgument;
- (unsigned long long)summaryArgumentCount;
- (id)timeZone;
- (id)title;
- (id)topic;

@end
