/* made by EzioChiu.
 */

@protocol MFSearchResultHandler

@required

- (void)beginResult:(unsigned int)arg1;
- (void)endResult;
- (void)setResultDateRecieved:(double)arg1;
- (void)setResultSender:(char *)arg1;
- (void)setResultSubject:(char *)arg1;
- (void)setResultUnread:(bool)arg1;

@optional

- (NSObject<MFMessageIterationFilter> *)filter;
- (void)handleMessage:(MFLibraryMessage *)arg1;
- (void)setResultSummary:(char *)arg1;

@end
