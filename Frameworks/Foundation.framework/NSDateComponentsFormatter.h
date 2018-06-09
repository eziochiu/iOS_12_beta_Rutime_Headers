/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDateComponentsFormatter : NSFormatter <NSObservable, NSObserver> {
    unsigned long long  _allowedUnits;
    bool  _allowsFractionalUnits;
    NSCalendar * _calendar;
    bool  _collapsesLargestUnit;
    void * _fmt;
    NSString * _fmtLocaleIdent;
    long long  _formattingContext;
    bool  _includesApproximationPhrase;
    bool  _includesTimeRemainingPhrase;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    long long  _maximumUnitCount;
    NSDate * _referenceDate;
    void * _reserved;
    NSNumberFormatter * _unitFormatter;
    long long  _unitsStyle;
    void * _unused;
    unsigned long long  _zeroFormattingBehavior;
}

@property unsigned long long allowedUnits;
@property bool allowsFractionalUnits;
@property (copy) NSCalendar *calendar;
@property bool collapsesLargestUnit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long formattingContext;
@property (readonly) unsigned long long hash;
@property bool includesApproximationPhrase;
@property bool includesTimeRemainingPhrase;
@property long long maximumUnitCount;
@property (copy) NSDate *referenceDate;
@property (readonly) Class superclass;
@property long long unitsStyle;
@property unsigned long long zeroFormattingBehavior;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)localizedStringFromDateComponents:(id)arg1 unitsStyle:(long long)arg2;

- (void)_NSDateComponentsFormatter_commonInit;
- (id)_calendarFromDateComponents:(id)arg1;
- (id)_calendarOrCanonicalCalendar;
- (id)_canonicalizedDateComponents:(id)arg1 withCalendar:(id)arg2 usedUnits:(unsigned long long*)arg3 withReferenceDate:(id)arg4;
- (void)_ensureUnitFormatterWithLocale:(id)arg1;
- (void)_ensureUnitFormatterWithLocale_alreadyLocked:(id)arg1;
- (void)_flushFormatterCache;
- (bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (unsigned long long)allowedUnits;
- (bool)allowsFractionalUnits;
- (id)calendar;
- (bool)collapsesLargestUnit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (long long)formattingContext;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (bool)includesApproximationPhrase;
- (bool)includesTimeRemainingPhrase;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)maximumUnitCount;
- (void)receiveObservedValue:(id)arg1;
- (id)referenceDate;
- (void)setAllowedUnits:(unsigned long long)arg1;
- (void)setAllowsFractionalUnits:(bool)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCollapsesLargestUnit:(bool)arg1;
- (void)setFormattingContext:(long long)arg1;
- (void)setIncludesApproximationPhrase:(bool)arg1;
- (void)setIncludesTimeRemainingPhrase:(bool)arg1;
- (void)setMaximumUnitCount:(long long)arg1;
- (void)setReferenceDate:(id)arg1;
- (void)setUnitsStyle:(long long)arg1;
- (void)setZeroFormattingBehavior:(unsigned long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1 withReferenceDate:(id)arg2;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;
- (id)stringFromDateComponents:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;
- (long long)unitsStyle;
- (unsigned long long)zeroFormattingBehavior;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)__ck_durationFormatter;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_fullStyleDateComponentsFormatter;

// Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI

+ (id)st_sharedAbbreviatedHourAndMinuteDateFormatter;
+ (id)st_sharedAbbreviatedSecondsDateFormatter;
+ (id)st_sharedFullDynamicDateFormatter;
+ (id)st_sharedShortDayHourAndMinuteDateFormatter;
+ (id)st_sharedShortDynamicDateFormatter;

@end
