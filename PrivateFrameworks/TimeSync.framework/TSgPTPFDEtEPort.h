/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort {
    TSgPTPPortStatistics * _statistics;
}

@property (nonatomic, retain) TSgPTPPortStatistics *statistics;

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;

- (bool)_commonInitWithService:(unsigned int)arg1;
- (id)_statistics;
- (void)dealloc;
- (id)initWithMatchingDictionary:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (void)setStatistics:(id)arg1;
- (id)statistics;
- (void)updateProperties;

@end
