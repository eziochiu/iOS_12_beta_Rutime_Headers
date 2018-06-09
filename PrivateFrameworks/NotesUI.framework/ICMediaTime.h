/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICMediaTime : NSObject <NSCopying> {
    unsigned char  _days;
    unsigned char  _hours;
    unsigned char  _minutes;
    bool  _negative;
    unsigned char  _seconds;
}

@property (nonatomic) unsigned char days;
@property (nonatomic, readonly) NSString *durationDescription;
@property (nonatomic) unsigned char hours;
@property (nonatomic, readonly) bool isZero;
@property (nonatomic) unsigned char minutes;
@property (getter=isNegative, nonatomic) bool negative;
@property (nonatomic) unsigned char seconds;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned char)days;
- (id)durationDescription;
- (unsigned char)hours;
- (id)initWithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithSeconds:(double)arg1;
- (bool)isEqualToMediaTime:(id)arg1;
- (bool)isNegative;
- (bool)isZero;
- (unsigned char)minutes;
- (unsigned char)seconds;
- (void)setDays:(unsigned char)arg1;
- (void)setHours:(unsigned char)arg1;
- (void)setMinutes:(unsigned char)arg1;
- (void)setNegative:(bool)arg1;
- (void)setSeconds:(unsigned char)arg1;

@end