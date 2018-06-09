/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface OSAAppleErrorReport : NSObject {
    double  _capture_time;
    NSString * _incidentID;
    NSString * _logType;
    NSMutableDictionary * _logWritingOptions;
    NSString * _logfile;
    NSMutableArray * _notes;
}

@property (nonatomic, readonly) NSString *logfile;
@property (nonatomic, readonly) NSArray *notes;

+ (id)bootArgs;
+ (unsigned char)executeWithTimeout:(unsigned int)arg1 Code:(id /* block */)arg2;
+ (id)kernelVersionDescription;
+ (id)systemIDWithDescription:(bool)arg1;

- (void).cxx_destruct;
- (id)additionalIPSMetadata;
- (id)appleCareDetails;
- (void)generateLogAtLevel:(bool)arg1 withBlock:(id /* block */)arg2;
- (id)getSyslogForPid:(int)arg1 andOptionalSenders:(id)arg2;
- (id)hardwareModel;
- (id)incidentID;
- (id)init;
- (bool)isActionable;
- (bool)isAppleTV;
- (bool)isCarrierInstall;
- (bool)isInternalInstall;
- (bool)isInternalOrCarrierInstall;
- (id)logfile;
- (id)notes;
- (id)overrideFileExtension;
- (id)problemType;
- (id)reportNamePrefix;
- (bool)saveToDir:(id)arg1;
- (bool)secondChanceToSylog;
- (int)streamContentAtLevel:(bool)arg1 withBlock:(id /* block */)arg2;
- (void)symlink:(id)arg1;

@end
