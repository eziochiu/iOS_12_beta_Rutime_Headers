/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMRequirementLogger : NSObject {
    NSString * _categoryOverride;
    IMLoggerOutput * _logger;
    bool  _throwFailures;
}

@property (retain) NSString *categoryOverride;
@property (retain) IMLoggerOutput *logger;
@property long long loggingLevel;
@property bool throwFailures;

+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)categoryOverride;
- (id)description;
- (id)init;
- (id)logger;
- (long long)loggingLevel;
- (void)requirementFailedForCategory:(const char *)arg1 description:(id)arg2 location:(struct IMFileLocation_t { char *x1; char *x2; char *x3; char *x4; int x5; }*)arg3;
- (void)setCategoryOverride:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setLoggingLevel:(long long)arg1;
- (void)setThrowFailures:(bool)arg1;
- (bool)throwFailures;
- (void)updateSettingsFromUserDefaults;

@end
