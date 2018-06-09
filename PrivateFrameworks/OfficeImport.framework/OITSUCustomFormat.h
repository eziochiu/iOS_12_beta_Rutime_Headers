/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUCustomFormat : NSObject <NSCopying, NSMutableCopying> {
    NSMutableArray * mConditionList;
    OITSUCustomFormatData * mDefaultFormatData;
    NSString * mFormatName;
    NSString * mFormatNameStem;
    NSString * mFormatNameTag;
    int  mFormatType;
}

@property (nonatomic, readonly) unsigned long long conditionCount;
@property (nonatomic, readonly) NSMutableArray *conditionList;
@property (nonatomic, readonly) OITSUCustomFormatData *defaultFormatData;
@property (nonatomic, readonly) NSString *formatName;
@property (nonatomic, readonly) NSString *formatNameStem;
@property (nonatomic, readonly) NSString *formatNameTag;
@property (nonatomic, readonly) int formatType;

- (unsigned long long)conditionCount;
- (id)conditionList;
- (id)conditionalFormatAtIndex:(unsigned long long)arg1;
- (id)conditionalFormatDataForKey:(unsigned long long)arg1;
- (id)conditionalFormatDataForValue:(double)arg1;
- (id)conditionalFormatDataForValue:(double)arg1 outKey:(unsigned long long*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customFormatWithNewName:(id)arg1;
- (void)dealloc;
- (id)defaultFormatData;
- (id)description;
- (id)formatName;
- (id)formatNameStem;
- (id)formatNameTag;
- (int)formatType;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3;
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3 conditionList:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualWithStemNameMatching:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)p_addConditionOfType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (bool)p_isEqual:(id)arg1 matchingFullName:(bool)arg2;
- (void)p_makeFormatNameStemAndTag;

@end
