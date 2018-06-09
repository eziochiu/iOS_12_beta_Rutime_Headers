/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWActivityStatistics : NSObject {
    unsigned int  _awdMetricID;
    PBCodable * _awdReport;
    NSUUID * _externallyVisibleActivityUUID;
    NSUUID * _externallyVisibleParentUUID;
    struct nw_activity_report_s { 
        unsigned int domain; 
        unsigned int label; 
        unsigned char activity_uuid[16]; 
        unsigned char parent_activity_uuid[16]; 
        unsigned int retry : 1; 
        unsigned int __pad_bits : 7; 
        unsigned char __pad[3]; 
    }  _report;
}

@property (nonatomic, readonly) NSUUID *activityUUID;
@property (nonatomic) unsigned int awdMetricID;
@property (nonatomic, retain) PBCodable *awdReport;
@property (nonatomic, readonly) unsigned int domain;
@property (nonatomic, retain) NSUUID *externallyVisibleActivityUUID;
@property (nonatomic, retain) NSUUID *externallyVisibleParentUUID;
@property (nonatomic, readonly) unsigned int label;
@property (nonatomic, readonly) NSUUID *parentUUID;
@property (nonatomic) struct nw_activity_report_s { unsigned int x1; unsigned int x2; unsigned char x3[16]; unsigned char x4[16]; unsigned int x5 : 1; unsigned int x6 : 7; unsigned char x7[3]; } report;
@property (nonatomic, readonly) bool retry;

- (void).cxx_destruct;
- (id)activityUUID;
- (unsigned int)awdMetricID;
- (id)awdReport;
- (unsigned int)domain;
- (id)externallyVisibleActivityUUID;
- (id)externallyVisibleParentUUID;
- (id)initWithNWActivityReport:(struct nw_activity_report_s { unsigned int x1; unsigned int x2; unsigned char x3[16]; unsigned char x4[16]; unsigned int x5 : 1; unsigned int x6 : 7; unsigned char x7[3]; }*)arg1 length:(unsigned long long)arg2;
- (unsigned int)label;
- (id)parentUUID;
- (struct nw_activity_report_s { unsigned int x1; unsigned int x2; unsigned char x3[16]; unsigned char x4[16]; unsigned int x5 : 1; unsigned int x6 : 7; unsigned char x7[3]; })report;
- (bool)retry;
- (void)setAwdMetricID:(unsigned int)arg1;
- (void)setAwdReport:(id)arg1;
- (void)setExternallyVisibleActivityUUID:(id)arg1;
- (void)setExternallyVisibleParentUUID:(id)arg1;
- (void)setReport:(struct nw_activity_report_s { unsigned int x1; unsigned int x2; unsigned char x3[16]; unsigned char x4[16]; unsigned int x5 : 1; unsigned int x6 : 7; unsigned char x7[3]; })arg1;

@end
