/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoData : NSObject {
    NSString * _demoDataPath;
    NSFileManager * _fileManager;
}

+ (id)demoDataDirectory;
+ (bool)shouldUseDemoDataDirectory;
+ (bool)willBeGeneratingDemoData;

- (void).cxx_destruct;
- (id)_directoryPath;
- (bool)_resetDemoDataDB;
- (id)initWithProfileType:(long long)arg1;

@end
