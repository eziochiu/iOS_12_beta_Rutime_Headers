/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationCategory : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray * _actions;
    unsigned long long  _backgroundStyle;
    NSString * _categorySummaryFormat;
    NSString * _hiddenPreviewsBodyPlaceholder;
    NSString * _identifier;
    NSArray * _intentIdentifiers;
    unsigned long long  _listPriority;
    NSArray * _minimalActions;
    unsigned long long  _options;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly) unsigned long long backgroundStyle;
@property (nonatomic, readonly, copy) NSString *categorySummaryFormat;
@property (nonatomic, readonly, copy) NSString *hiddenPreviewsBodyPlaceholder;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *intentIdentifiers;
@property (nonatomic, readonly) unsigned long long listPriority;
@property (nonatomic, readonly, copy) NSArray *minimalActions;
@property (nonatomic, readonly) unsigned long long options;

+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 hiddenPreviewsBodyPlaceholder:(id)arg4 categorySummaryFormat:(id)arg5 options:(unsigned long long)arg6;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 hiddenPreviewsBodyPlaceholder:(id)arg4 options:(unsigned long long)arg5;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 intentIdentifiers:(id)arg3 options:(unsigned long long)arg4;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 hiddenPreviewsBodyPlaceholder:(id)arg5 categorySummaryFormat:(id)arg6 options:(unsigned long long)arg7;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 hiddenPreviewsBodyPlaceholder:(id)arg5 options:(unsigned long long)arg6;
+ (id)categoryWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 options:(unsigned long long)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 actions:(id)arg2 minimalActions:(id)arg3 intentIdentifiers:(id)arg4 hiddenPreviewsBodyPlaceholder:(id)arg5 categorySummaryFormat:(id)arg6 options:(unsigned long long)arg7 backgroundStyle:(unsigned long long)arg8 listPriority:(unsigned long long)arg9;
- (id)actions;
- (unsigned long long)backgroundStyle;
- (id)categorySummaryFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hiddenPreviewsBodyPlaceholder;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)intentIdentifiers;
- (bool)isEqual:(id)arg1;
- (unsigned long long)listPriority;
- (id)minimalActions;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)options;

@end
