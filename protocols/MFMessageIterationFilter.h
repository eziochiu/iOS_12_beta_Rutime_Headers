/* made by EzioChiu.
 */

@protocol MFMessageIterationFilter <NSObject>

@required

- (bool)filterMessageWithStatement:(struct sqlite3_stmt { }*)arg1;

@end
