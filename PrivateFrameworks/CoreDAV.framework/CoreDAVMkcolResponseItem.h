/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMkcolResponseItem : CoreDAVItem {
    NSMutableSet * _propStats;
}

@property (nonatomic, retain) NSMutableSet *propStats;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)addPropStat:(id)arg1;
- (id)description;
- (bool)hasPropertyError;
- (id)init;
- (id)propStats;
- (void)setPropStats:(id)arg1;

@end
