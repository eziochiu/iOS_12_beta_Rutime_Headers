/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicalDate : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    long long  _form;
    NSString * _originalTimeZoneString;
    NSDate * _underlyingDate;
}

@property (nonatomic, readonly, copy) NSDate *dateForUTC;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long form;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *originalTimeZoneString;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDate *underlyingDate;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_adjustDate:(id)arg1 calendar:(id)arg2 form:(long long)arg3;
+ (unsigned long long)_calendarUnitForForm:(long long)arg1;
+ (id)_descriptionForForm:(long long)arg1;
+ (id)_medicalDateFromComponents:(id)arg1 originalTimeZoneString:(id)arg2 form:(long long)arg3 error:(out id*)arg4;
+ (id)_medicalDateWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3;
+ (bool)_validForm:(long long)arg1;
+ (id)medicalDateWithYear:(long long)arg1 error:(out id*)arg2;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 error:(out id*)arg4;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 originalTimeZoneString:(id)arg7 error:(out id*)arg8;
+ (id)medicalDateWithYear:(long long)arg1 month:(long long)arg2 error:(out id*)arg3;
+ (id)referenceCalendar;
+ (id)referenceCalendarWithLocalTimezone;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithForm:(long long)arg1 underlyingDate:(id)arg2 originalTimeZoneString:(id)arg3;
- (id)adjustedDateForCalendar:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateForUTC;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)form;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isCompatibleWithMedicalDateForm:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)originalTimeZoneString;
- (id)underlyingDate;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)displayStringForDate:(id)arg1 form:(long long)arg2 originalTimeZoneString:(id)arg3;

- (id)displayString;
- (id)displayStringWithPreferredForm:(long long)arg1 includeTimeZone:(bool)arg2;
- (id)displayStringWithTimeZone;
- (id)viewControllerTitleDisplayStringWithDateCache:(id)arg1;

@end
