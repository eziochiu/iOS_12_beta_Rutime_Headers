/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityLogging : NSObject {
    int  _desiredLogLevel;
}

@property (nonatomic) int desiredLogLevel;

+ (bool)canLogMessageAtLevel:(int)arg1;
+ (void)initialize;
+ (void)setLoggingLevel:(int)arg1;

- (void)checkUserDefaults;
- (void)dealloc;
- (int)desiredLogLevel;
- (id)init;
- (void)setDesiredLogLevel:(int)arg1;
- (void)userDefaultsChanged:(id)arg1;

@end
