/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUAdjustmentsStatisticsCache : NSObject {
    NSObject<OS_dispatch_group> * _autoCalculatorDispatchGroup;
    NSDictionary * _calculatedColorSettings;
    NSDictionary * _calculatedLightSettings;
    PLPhotoEditModel * _editModel;
    PLEditSource * _editSource;
    long long  _finishedRenderSettingsCacheSequenceID;
    long long  _inProgressRenderSettingsCacheSequenceID;
    NSObject<OS_dispatch_group> * _notificationDispatchGroup;
    long long  _settingsCacheSequenceID;
    NSObject<OS_dispatch_queue> * _statisticsCalculationQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *autoCalculatorDispatchGroup;
@property (nonatomic, retain) NSDictionary *calculatedColorSettings;
@property (nonatomic, retain) NSDictionary *calculatedLightSettings;
@property (nonatomic, readonly, retain) PLPhotoEditModel *editModel;
@property (nonatomic, readonly, retain) PLEditSource *editSource;
@property long long finishedRenderSettingsCacheSequenceID;
@property long long inProgressRenderSettingsCacheSequenceID;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *notificationDispatchGroup;
@property long long settingsCacheSequenceID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *statisticsCalculationQueue;

- (void).cxx_destruct;
- (bool)_needsStatistics;
- (id)autoCalculatorDispatchGroup;
- (id)calculatedColorSettings;
- (id)calculatedLightSettings;
- (id)editModel;
- (id)editSource;
- (long long)finishedRenderSettingsCacheSequenceID;
- (void)getStatistics:(id /* block */)arg1;
- (long long)inProgressRenderSettingsCacheSequenceID;
- (id)initWithEditModel:(id)arg1 editSource:(id)arg2;
- (void)invalidateStatisticsCacheWithEditModel:(id)arg1 andUpdate:(bool)arg2;
- (id)notificationDispatchGroup;
- (void)setAutoCalculatorDispatchGroup:(id)arg1;
- (void)setCalculatedColorSettings:(id)arg1;
- (void)setCalculatedLightSettings:(id)arg1;
- (void)setFinishedRenderSettingsCacheSequenceID:(long long)arg1;
- (void)setInProgressRenderSettingsCacheSequenceID:(long long)arg1;
- (void)setNotificationDispatchGroup:(id)arg1;
- (void)setSettingsCacheSequenceID:(long long)arg1;
- (void)setStatisticsCalculationQueue:(id)arg1;
- (long long)settingsCacheSequenceID;
- (id)statisticsCalculationQueue;
- (void)updateStatisticsCache;

@end
