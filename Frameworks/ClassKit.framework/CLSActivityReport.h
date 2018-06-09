/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSActivityReport : CLSReportItem <NSCopying, NSSecureCoding> {
    NSArray * _additionalReportItems;
    NSString * _contextID;
    NSString * _contextTitle;
    NSString * _contextTopic;
    long long  _contextType;
    CLSActivityReportItem * _primaryReportItem;
    CLSAggregatedValue * _progress;
    CLSAggregatedValue * _time;
}

@property (nonatomic, copy) NSArray *additionalReportItems;
@property (nonatomic, copy) NSString *contextID;
@property (nonatomic, copy) NSString *contextTitle;
@property (nonatomic, copy) NSString *contextTopic;
@property (nonatomic) long long contextType;
@property (nonatomic, copy) CLSActivityReportItem *primaryReportItem;
@property (nonatomic, copy) CLSAggregatedValue *progress;
@property (nonatomic, copy) CLSAggregatedValue *time;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)add:(id)arg1;
- (id)additionalReportItems;
- (long long)compare:(id)arg1;
- (id)contextID;
- (id)contextTitle;
- (id)contextTopic;
- (long long)contextType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)primaryReportItem;
- (id)progress;
- (void)scalarMultiply:(double)arg1;
- (void)setAdditionalReportItems:(id)arg1;
- (void)setContextID:(id)arg1;
- (void)setContextTitle:(id)arg1;
- (void)setContextTopic:(id)arg1;
- (void)setContextType:(long long)arg1;
- (void)setPrimaryReportItem:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setTime:(id)arg1;
- (id)time;

@end
