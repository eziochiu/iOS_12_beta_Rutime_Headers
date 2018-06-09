/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTNextAlarm : NSObject {
    NSDate * _fireDate;
    NSString * _identifier;
    bool  _isSleepAlarm;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSURL *clockAppSectionURL;
@property (nonatomic, copy) NSDate *fireDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isSleepAlarm;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)clockAppSectionURL;
- (id)description;
- (id)fireDate;
- (id)identifier;
- (bool)isSleepAlarm;
- (void)setFireDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsSleepAlarm:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
