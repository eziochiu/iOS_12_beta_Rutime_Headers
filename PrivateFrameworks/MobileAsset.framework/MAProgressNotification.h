/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface MAProgressNotification : NSObject {
    double  _expectedTimeRemaining;
    bool  _isStalled;
    long long  _totalExpected;
    long long  _totalWritten;
}

@property (nonatomic) double expectedTimeRemaining;
@property (nonatomic) bool isStalled;
@property (nonatomic) long long totalExpected;
@property (nonatomic) long long totalWritten;

- (double)expectedTimeRemaining;
- (bool)isStalled;
- (void)setExpectedTimeRemaining:(double)arg1;
- (void)setIsStalled:(bool)arg1;
- (void)setTotalExpected:(long long)arg1;
- (void)setTotalWritten:(long long)arg1;
- (long long)totalExpected;
- (long long)totalWritten;

@end
