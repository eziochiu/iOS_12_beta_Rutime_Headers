/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface _CPLTransientStatus : NSObject {
    NSDate * _date;
    unsigned long long  _generation;
    CPLRecordChange * _record;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) CPLRecordChange *record;
@property (nonatomic, readonly) CPLRecordStatus *status;

- (void).cxx_destruct;
- (id)date;
- (unsigned long long)generation;
- (id)initWithRecord:(id)arg1 generation:(unsigned long long)arg2 date:(id)arg3;
- (id)record;
- (id)status;

@end
