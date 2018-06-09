/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSelectedRangeData : NSObject {
    NSAttributedString * _attributedString;
    long long  _dataType;
    long long  _statisticsType;
}

@property (nonatomic, retain) NSAttributedString *attributedString;
@property (nonatomic) long long dataType;
@property (nonatomic) long long statisticsType;

- (void).cxx_destruct;
- (id)attributedString;
- (long long)dataType;
- (id)initWithStatisticsType:(long long)arg1;
- (void)setAttributedString:(id)arg1;
- (void)setDataType:(long long)arg1;
- (void)setStatisticsType:(long long)arg1;
- (long long)statisticsType;

@end
