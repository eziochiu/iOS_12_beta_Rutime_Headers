/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCellularUsage : NSObject <NSCopying> {
    double  _bytesUsedLastCycle;
    double  _bytesUsedThisCycle;
    double  _roamingBytesUsedLastCycle;
    double  _roamingBytesUsedThisCycle;
    double  _totalBytesUsed;
    double  _totalRoamingBytesUsed;
}

@property (nonatomic) double bytesUsedLastCycle;
@property (nonatomic) double bytesUsedThisCycle;
@property (nonatomic) double roamingBytesUsedLastCycle;
@property (nonatomic) double roamingBytesUsedThisCycle;
@property (nonatomic) double totalBytesUsed;
@property (nonatomic) double totalRoamingBytesUsed;

- (double)bytesUsedLastCycle;
- (double)bytesUsedThisCycle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)plus:(id)arg1;
- (double)roamingBytesUsedLastCycle;
- (double)roamingBytesUsedThisCycle;
- (void)setBytesUsedLastCycle:(double)arg1;
- (void)setBytesUsedThisCycle:(double)arg1;
- (void)setRoamingBytesUsedLastCycle:(double)arg1;
- (void)setRoamingBytesUsedThisCycle:(double)arg1;
- (void)setTotalBytesUsed:(double)arg1;
- (void)setTotalRoamingBytesUsed:(double)arg1;
- (double)totalBytesUsed;
- (double)totalRoamingBytesUsed;

@end
