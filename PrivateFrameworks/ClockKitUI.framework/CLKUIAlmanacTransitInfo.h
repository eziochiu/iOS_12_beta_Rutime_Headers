/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIAlmanacTransitInfo : NSObject {
    long long  _constantSun;
    NSDate * _day;
    struct { 
        double latitude; 
        double longitude; 
    }  _location;
    NSDate * _rise;
    NSDate * _set;
    NSDate * _transit;
}

@property (nonatomic) long long constantSun;
@property (nonatomic, retain) NSDate *day;
@property (nonatomic) struct { double x1; double x2; } location;
@property (nonatomic, retain) NSDate *rise;
@property (nonatomic, retain) NSDate *set;
@property (nonatomic, retain) NSDate *transit;

+ (id)transitInfoForDate:(id)arg1;
+ (id)transitInfoForDate:(id)arg1 city:(id)arg2;
+ (id)transitInfoForDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3;
+ (id)transitInfoForDate:(id)arg1 location:(struct { double x1; double x2; })arg2;
+ (id)transitInfoForDate:(id)arg1 location:(struct { double x1; double x2; })arg2 sunAltitude:(double)arg3;

- (void).cxx_destruct;
- (long long)constantSun;
- (id)day;
- (id)description;
- (id)initWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 city:(id)arg2;
- (id)initWithDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3;
- (id)initWithDate:(id)arg1 location:(struct { double x1; double x2; })arg2;
- (id)initWithDate:(id)arg1 location:(struct { double x1; double x2; })arg2 sunAltitude:(double)arg3;
- (struct { double x1; double x2; })location;
- (id)rise;
- (id)set;
- (void)setConstantSun:(long long)arg1;
- (void)setDay:(id)arg1;
- (void)setLocation:(struct { double x1; double x2; })arg1;
- (void)setRise:(id)arg1;
- (void)setSet:(id)arg1;
- (void)setTransit:(id)arg1;
- (id)transit;

@end
