/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPReportFilesMaintainer : NSObject <_DPMaintenance> {
    NSString * _reportsDirectoryPath;
}

@property (nonatomic, copy) NSString *reportsDirectoryPath;

+ (bool)removeFilesFrom:(id)arg1 olderThanSecond:(double)arg2;
+ (id)reportsInDirectory:(id)arg1;
+ (bool)retireFiles:(id)arg1 toDirectory:(id)arg2;
+ (id)retiredReportsPath:(id)arg1;

- (void).cxx_destruct;
- (bool)doMaintenance;
- (id)init;
- (id)initWithDirectoryPath:(id)arg1;
- (id)reportsDirectoryPath;
- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;
- (void)setReportsDirectoryPath:(id)arg1;

@end
