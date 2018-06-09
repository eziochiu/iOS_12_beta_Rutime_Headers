/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPDateTimeSmartField : TSWPSmartField {
    NSDate * _date;
    long long  _dateStyle;
    NSString * _format;
    NSString * _localeID;
    bool  _needsUpdate;
    long long  _timeStyle;
    int  _updatePlan;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic) long long dateStyle;
@property (nonatomic, copy) NSString *format;
@property (nonatomic, copy) NSString *localeIdentifier;
@property (nonatomic) bool needsUpdate;
@property (nonatomic) long long timeStyle;
@property (nonatomic) int updatePlan;

+ (id)dateStringFromTime:(double)arg1 withFormat:(id)arg2 localeIdentifier:(id)arg3 dateStyle:(long long)arg4 timeStyle:(long long)arg5;
+ (id)newDateFormatWithLocaleIdentifier:(id)arg1 dateStyle:(long long)arg2 timeStyle:(long long)arg3;

- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)date;
- (long long)dateStyle;
- (id)format;
- (id)generateInlineText;
- (id)initWithLocaleIdentifier:(id)arg1 dateStyle:(long long)arg2 timeStyle:(long long)arg3 autoUpdate:(bool)arg4 context:(id)arg5;
- (id)initWithLocaleIdentifier:(id)arg1 dateStyle:(long long)arg2 timeStyle:(long long)arg3 format:(id)arg4 autoUpdate:(bool)arg5 context:(id)arg6;
- (id)initWithLocaleIdentifier:(id)arg1 dateStyle:(long long)arg2 timeStyle:(long long)arg3 format:(id)arg4 date:(id)arg5 updatePlan:(int)arg6 context:(id)arg7;
- (void)loadFromUnarchiver:(id)arg1;
- (id)localeIdentifier;
- (bool)needsUpdate;
- (void)resetLocaleTo:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateStyle:(long long)arg1;
- (void)setFormat:(id)arg1;
- (void)setFormat:(id)arg1 localeIdentifier:(id)arg2 dateStyle:(long long)arg3 timeStyle:(long long)arg4;
- (void)setFormat:(id)arg1 localeIdentifier:(id)arg2 dateStyle:(long long)arg3 timeStyle:(long long)arg4 autoLocale:(bool)arg5;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setTimeStyle:(long long)arg1;
- (void)setUpdatePlan:(int)arg1;
- (int)smartFieldKind;
- (bool)supportsDeepCopyForUndo;
- (long long)timeStyle;
- (int)updatePlan;

@end
