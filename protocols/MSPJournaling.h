/* made by EzioChiu.
 */

@protocol MSPJournaling <NSObject>

@optional

- (GEOLogMsgEvent *)eventForState:(NSString *)arg1 affectedObject:(id)arg2;
- (bool)shouldJournalState:(NSString *)arg1;
- (bool)shouldLogState:(NSString *)arg1;
- (bool)shouldReportState:(NSString *)arg1;
- (int)telemetricKeyForState:(NSString *)arg1;

@end
