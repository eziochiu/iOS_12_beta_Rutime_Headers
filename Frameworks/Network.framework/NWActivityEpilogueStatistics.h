/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWActivityEpilogueStatistics : NSObject {
    unsigned int  _awdMetricID;
    PBCodable * _awdReport;
    NSUUID * _externallyVisibleActivityUUID;
    NSUUID * _externallyVisibleParentUUID;
    struct nw_activity_epilogue_report_s { 
        unsigned long long duration_msecs; 
        struct nw_activity_report_s { 
            unsigned int domain; 
            unsigned int label; 
            unsigned char activity_uuid[16]; 
            unsigned char parent_activity_uuid[16]; 
            unsigned int retry : 1; 
            unsigned int __pad_bits : 7; 
            unsigned char __pad[3]; 
        } activity; 
        unsigned int fragments_quenched; 
        int completion_reason; 
        unsigned char __pad[4]; 
    }  _report;
}

@property (nonatomic, readonly) NSUUID *activityUUID;
@property (nonatomic) unsigned int awdMetricID;
@property (nonatomic, retain) PBCodable *awdReport;
@property (nonatomic, readonly) int completionReason;
@property (nonatomic, readonly) unsigned int domain;
@property (nonatomic, readonly) unsigned long long durationMsecs;
@property (nonatomic, retain) NSUUID *externallyVisibleActivityUUID;
@property (nonatomic, retain) NSUUID *externallyVisibleParentUUID;
@property (nonatomic, readonly) unsigned int fragmentsQuenched;
@property (nonatomic, readonly) unsigned int label;
@property (nonatomic, readonly) NSUUID *parentUUID;
@property (nonatomic) struct nw_activity_epilogue_report_s { unsigned long long x1; struct nw_activity_report_s { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned char x_2_1_3[16]; unsigned char x_2_1_4[16]; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 7; unsigned char x_2_1_7[3]; } x2; unsigned int x3; int x4; unsigned char x5[4]; } report;
@property (nonatomic, readonly) bool retry;

- (void).cxx_destruct;
- (id)activityUUID;
- (unsigned int)awdMetricID;
- (id)awdReport;
- (int)completionReason;
- (unsigned int)domain;
- (unsigned long long)durationMsecs;
- (id)externallyVisibleActivityUUID;
- (id)externallyVisibleParentUUID;
- (unsigned int)fragmentsQuenched;
- (id)initWithNWActivityEpilogueReport:(struct nw_activity_epilogue_report_s { unsigned long long x1; struct nw_activity_report_s { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned char x_2_1_3[16]; unsigned char x_2_1_4[16]; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 7; unsigned char x_2_1_7[3]; } x2; unsigned int x3; int x4; unsigned char x5[4]; }*)arg1 length:(unsigned long long)arg2;
- (unsigned int)label;
- (id)parentUUID;
- (struct nw_activity_epilogue_report_s { unsigned long long x1; struct nw_activity_report_s { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned char x_2_1_3[16]; unsigned char x_2_1_4[16]; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 7; unsigned char x_2_1_7[3]; } x2; unsigned int x3; int x4; unsigned char x5[4]; })report;
- (bool)retry;
- (void)setAwdMetricID:(unsigned int)arg1;
- (void)setAwdReport:(id)arg1;
- (void)setExternallyVisibleActivityUUID:(id)arg1;
- (void)setExternallyVisibleParentUUID:(id)arg1;
- (void)setReport:(struct nw_activity_epilogue_report_s { unsigned long long x1; struct nw_activity_report_s { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned char x_2_1_3[16]; unsigned char x_2_1_4[16]; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 7; unsigned char x_2_1_7[3]; } x2; unsigned int x3; int x4; unsigned char x5[4]; })arg1;

@end
