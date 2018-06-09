/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding> {
    PBCodable * _record;
    NTPBRecordBase * _recordBase;
    NSData * _recordData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _recordLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PBCodable *record;
@property (nonatomic, retain) NTPBRecordBase *recordBase;
@property (nonatomic, retain) NSData *recordData;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } recordLock;
@property (readonly) Class superclass;

+ (id)faultableRecordWithRecord:(id)arg1;
+ (id)faultableRecordWithRecordData:(id)arg1;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)record;
- (id)recordBase;
- (id)recordData;
- (struct os_unfair_lock_s { unsigned int x1; })recordLock;
- (void)setRecord:(id)arg1;
- (void)setRecordBase:(id)arg1;
- (void)setRecordData:(id)arg1;
- (void)setRecordLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)writeToKeyValuePair:(id)arg1;

@end
