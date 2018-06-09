/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPTime : NSObject {
    unsigned int  _nanoseconds;
    unsigned long long  _seconds;
}

@property (nonatomic) unsigned int nanoseconds;
@property (nonatomic) unsigned long long nanoseconds64Representation;
@property (nonatomic) unsigned long long seconds;

- (unsigned int)nanoseconds;
- (unsigned long long)nanoseconds64Representation;
- (unsigned long long)seconds;
- (void)setNanoseconds64Representation:(unsigned long long)arg1;
- (void)setNanoseconds:(unsigned int)arg1;
- (void)setSeconds:(unsigned long long)arg1;

@end
