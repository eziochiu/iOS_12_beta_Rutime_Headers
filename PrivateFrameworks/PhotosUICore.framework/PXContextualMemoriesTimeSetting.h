/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXContextualMemoriesTimeSetting : NSObject <PXContextualMemoriesSetting> {
    NSDate * _date;
    NSDateFormatter * _dateFormatter;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *headerTitle;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)_forceMiddayDateForDate:(id)arg1;
- (id)date;
- (id)dateFormatter;
- (id)headerTitle;
- (id)init;
- (void)resetToDefault;
- (void)setDate:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (id)title;

@end
