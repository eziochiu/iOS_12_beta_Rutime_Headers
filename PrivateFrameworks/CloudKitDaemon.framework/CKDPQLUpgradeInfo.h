/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQLUpgradeInfo : NSObject {
    bool  _shouldTruncateDatabase;
    bool  _shouldVacuum;
    int (* _upgradeFunction;
    unsigned long long  _version;
}

@property (nonatomic) bool shouldTruncateDatabase;
@property (nonatomic) bool shouldVacuum;
@property (nonatomic) int (*upgradeFunction;
@property (nonatomic) unsigned long long version;

+ (id)upgradeInfoWithVersion:(unsigned long long)arg1 function:(int (*)arg2 shouldVacuum:(bool)arg3 shouldTruncate:(bool)arg4;

- (id)initWithVersion:(unsigned long long)arg1 function:(int (*)arg2 shouldVacuum:(bool)arg3 shouldTruncate:(bool)arg4;
- (void)setShouldTruncateDatabase:(bool)arg1;
- (void)setShouldVacuum:(bool)arg1;
- (void)setUpgradeFunction:(int (*)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (bool)shouldTruncateDatabase;
- (bool)shouldVacuum;
- (int (*)upgradeFunction;
- (unsigned long long)version;

@end
