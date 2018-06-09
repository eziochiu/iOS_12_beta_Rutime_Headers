/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STDeviceBedtime : NSObject <NSCopying> {
    unsigned long long  _behaviorOption;
    bool  _deviceBedtimeEnabled;
    NSDateComponents * _end;
    NSDateComponents * _start;
}

@property (nonatomic) unsigned long long behaviorOption;
@property (nonatomic) bool deviceBedtimeEnabled;
@property (nonatomic, copy) NSDateComponents *end;
@property (nonatomic, copy) NSDateComponents *start;

- (void).cxx_destruct;
- (void)_stDeviceBedtimeInitByParsingFamilyBedtimeAllPredicate:(id)arg1;
- (void)_stDeviceBedtimeInitByParsingPersonalBedtimePredicate:(id)arg1;
- (unsigned long long)behaviorOption;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultBedtimeEnd;
- (id)defaultBedtimeStart;
- (bool)deviceBedtimeEnabled;
- (id)end;
- (id)init;
- (id)initWithActivation:(id)arg1;
- (void)setBehaviorOption:(unsigned long long)arg1;
- (void)setDeviceBedtimeEnabled:(bool)arg1;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;

@end
