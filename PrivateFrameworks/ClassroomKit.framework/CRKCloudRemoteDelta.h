/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudRemoteDelta : NSObject {
    NSDictionary * _changeRecordsByRecordType;
    NSDictionary * _deleteIdsByRecordType;
}

@property (nonatomic, readonly) NSDictionary *changeRecordIdsByRecordType;
@property (nonatomic, retain) NSDictionary *changeRecordsByRecordType;
@property (nonatomic, retain) NSDictionary *deleteIdsByRecordType;

+ (id)new;

- (void).cxx_destruct;
- (id)changeRecordIdsByRecordType;
- (id)changeRecordsByRecordType;
- (id)deleteIdsByRecordType;
- (id)init;
- (id)initWithChangedRecordsByRecordType:(id)arg1 deleteIdsByRecordType:(id)arg2;
- (bool)isEmpty;
- (void)setChangeRecordsByRecordType:(id)arg1;
- (void)setDeleteIdsByRecordType:(id)arg1;

@end
